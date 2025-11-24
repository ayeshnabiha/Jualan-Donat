#include "cart.h"
#include "ui_cart.h"
#include "menuorder.h"
#include "payment.h"

Cart::Cart(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cart)
{
    ui->setupUi(this);
}

Cart::~Cart()
{
    delete ui;
}

void Cart::setMenuOrder(MenuOrder *ptr)
{
    menuOrder = ptr;
}

void Cart::on_pushButton_Confirm_clicked()
{

    payment->show();
    this->hide();
}

void Cart::setPayment(Payment *ptr)
{
    payment = ptr;
}

void Cart::on_pushButton_Back_clicked()
{
    menuOrder->show();
    this->hide();
}

void Cart::setOrderItems(const QVector<OrderItem> &items)
{
    orderItems = items;
    updateUI();
}

void Cart::updateUI()
{
    if (orderItems.isEmpty()) {
        ui->label_Empty->setText("Oh no! Your cart is empty\n Please select at least one item of our menu");
        ui->label_Empty->show();

        ui->pushButton_Confirm->hide();
    } else {
        ui->label_Empty->hide();
        ui->pushButton_Confirm->show();
    }

    QLayoutItem *child;
    while ((child = ui->verticalLayout_Items->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }

    for (const OrderItem &item : orderItems)
    {
        QLabel *label = new QLabel(this);
        label->setText(QString("%1 x%2 - Rp%3K")
                           .arg(item.name)
                           .arg(item.quantity)
                           .arg(item.price * item.quantity));

        ui->verticalLayout_Items->addWidget(label);
    }
}

void Cart::setCustomerName(const QString &name) {
    customerName = name;
}

