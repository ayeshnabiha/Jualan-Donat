#ifndef CART_H
#define CART_H

#include <QWidget>
#include <QVector>

namespace Ui {
class Cart;
}

class MenuOrder;
class Payment;
class Nota;
class OrderManager;
class Cart : public QWidget
{
    Q_OBJECT

public:
    explicit Cart(QWidget *parent = nullptr);
    ~Cart();
    void setMenuOrder(MenuOrder *ptr);
    void setPayment(Payment *ptr);
    void setCustomerName(const QString &name);
    void setNota(Nota *ptr);
    void updateUI();

private slots:
    void on_pushButton_Back_clicked();
    void on_pushButton_Confirm_clicked();

private:
    Ui::Cart *ui;
    QString customerName;
    Nota *nota;
    MenuOrder *menuOrder;
    Payment *payment;
};

#endif // CART_H
