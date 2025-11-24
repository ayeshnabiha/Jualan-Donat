#ifndef CART_H
#define CART_H

#include <QWidget>
#include <QVector>

namespace Ui {
class Cart;
}

struct OrderItem {
    QString name;
    int quantity;
    int price;
};

class MenuOrder;
class Payment;
class Nota;
class Cart : public QWidget
{
    Q_OBJECT

public:
    explicit Cart(QWidget *parent = nullptr);
    ~Cart();
    void setMenuOrder(MenuOrder *ptr);
    void setPayment(Payment *ptr);
    void setOrderItems(const QVector<OrderItem> &items);
    void setCustomerName(const QString &name);
    void setNota(Nota *ptr);

private slots:
    void on_pushButton_Back_clicked();
    void on_pushButton_Confirm_clicked();

private:
    Ui::Cart *ui;
    QVector<OrderItem> orderItems;
    QString customerName;
    Nota *nota;
    MenuOrder *menuOrder;
    Payment *payment;
    void updateUI();
};

#endif // CART_H
