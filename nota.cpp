#include "nota.h"
#include "ui_nota.h"
#include "mainwindow.h"
#include "customername.h"

Nota::Nota(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Nota)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    connect(timer, &QTimer::timeout, this, &Nota::updateTime);

    timer->start(1000);

    updateTime();
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
