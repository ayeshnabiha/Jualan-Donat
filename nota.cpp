#include "nota.h"
#include "ui_nota.h"
#include "mainwindow.h"
#include "customername.h"
#include "ordermanager.h"

Nota::Nota(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Nota)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, &Nota::updateTime);

    timer->start(1000);

    updateTime();

    connect(ui->pushButton_Print, &QPushButton::clicked, this, &Nota::saveAsPDF);

}

Nota::~Nota()
{
    delete ui;
}

void Nota::updateTime()
{
    QTime time = QTime::currentTime();
    QString timeText = time.toString("HH:mm");

    ui->label_Time->setText(timeText);
}

void Nota::setCustomerName(const QString &name)
{
    ui->label_CustName->setText(name);
}

void Nota::on_pushButton_Print_clicked()
{
    this->hide();
}

void Nota::updateCustomerName()
{
    std::string name = CustomerName::instance().getName();
    ui->label_CustName->setText(QString::fromStdString(name));
}

void Nota::updateNota() {
    ui->label_Nota->setText("");

    const auto &orders = OrderManager::instance().getItems();
    int subtotal = 0;

    QString text;

    text += "--------------------------------\n\n";

    for (const auto &item : orders) {
        QString line = QString("%1 x %2   Rp %3\n")
        .arg(item.name)
            .arg(item.qty)
            .arg(item.total());
        text += line;
        subtotal += item.total();
    }

    double taxRate = 0.10;
    int tax = subtotal * taxRate;

    // --- HITUNG TOTAL AKHIR ---
    int total = subtotal + tax;

    text += "\n-------------------------------\n";
    text += "Subtotal : Rp " + QString::number(subtotal) + "\n";
    text += "Tax (10%): Rp " + QString::number(tax) + "\n";
    text += "--------------------------------\n";
    text += "TOTAL    : Rp " + QString::number(total) + "\n";

    ui->label_Nota->setText(text);
}

void Nota::saveAsPDF() {
    QString fileName = QFileDialog::getSaveFileName(
        this,
        "Save Nota as PDF",
        "",
        "PDF Files (*.pdf)"
        );

    if (fileName.isEmpty()) return;

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);

    printer.setPageMargins(QMarginsF(10, 10, 10, 10));
    QPainter painter(&printer);

    // Ambil FULL tampilan nota
    QWidget *widget = this;

    QRectF page = printer.pageRect(QPrinter::DevicePixel);

    double xscale = page.width() / double(widget->width());
    double yscale = page.height() / double(widget->height());
    double scale = qMin(xscale, yscale);

    painter.scale(scale, scale);

    widget->render(&painter);

    painter.end();


    QMessageBox::information(this, "Success", "Nota saved as PDF!");
}


