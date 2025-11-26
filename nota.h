#ifndef NOTA_H
#define NOTA_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QLabel>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class Nota;
}

class MainWindow;
class CustomerName;
class OrderManager;
class Nota : public QWidget
{
    Q_OBJECT

public:
    explicit Nota(QWidget *parent = nullptr);
    ~Nota();
    void setCustomerName(const QString &name);
    void updateCustomerName();
    void updateNota();


private slots:
    void on_pushButton_Print_clicked();
    void updateTime();
    void saveAsPDF();

private:
    Ui::Nota *ui;
    QTimer *timer;
};

#endif // NOTA_H
