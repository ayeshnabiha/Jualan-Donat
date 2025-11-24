#ifndef MENUORDER_H
#define MENUORDER_H

#include <QWidget>

namespace Ui
{
    class MenuOrder;
}

class Cart;
class Nota;
class CustomerName;
class MenuOrder : public QWidget
{
    Q_OBJECT

public:
    explicit MenuOrder(QWidget *parent = nullptr);
    ~MenuOrder();
    void setCart(Cart *ptr);
    void updateCustomerName();

private slots:
    void on_pushButton_OK_clicked();

private:
    Ui::MenuOrder *ui;
    Cart *cart;
    Nota *nota;
};

#endif // MENUORDER_H
