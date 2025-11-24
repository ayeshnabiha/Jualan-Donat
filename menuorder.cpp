#include "menuorder.h"
#include "ui_menuorder.h"
#include "cart.h"
#include "customername.h"

MenuOrder::MenuOrder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MenuOrder)
{
    ui->setupUi(this);
    cart = new Cart();
}

MenuOrder::~MenuOrder()
{
    delete ui;
}

void MenuOrder::setCart(Cart *ptr)
{
    cart = ptr;
}

void MenuOrder::on_pushButton_OK_clicked()
{
    QVector<OrderItem> items;

    OrderItem TCB;
    TCB.name = ui->label_TCB ->text();
    TCB.quantity = ui->spinBox_TCB->value();
    TCB.price = 20;
    if (TCB.quantity > 0) items.push_back(TCB);

    OrderItem TLR;
    TLR.name = ui->label_TLR ->text();
    TLR.quantity = ui->spinBox_TLR->value();
    TLR.price = 25;
    if (TLR.quantity > 0) items.push_back(TLR);

    OrderItem MRB;
    MRB.name = ui->label_MRB ->text();
    MRB.quantity = ui->spinBox_MRB->value();
    MRB.price = 30;
    if (MRB.quantity > 0) items.push_back(MRB);

    OrderItem ACB;
    ACB.name = ui->label_ACB ->text();
    ACB.quantity = ui->spinBox_ACB->value();
    ACB.price = 20;
    if (ACB.quantity > 0) items.push_back(ACB);

    OrderItem RVCB;
    RVCB.name = ui->label_RVCB ->text();
    RVCB.quantity = ui->spinBox_RVCB->value();
    RVCB.price = 25;
    if (RVCB.quantity > 0) items.push_back(RVCB);

    cart->setOrderItems(items);

    cart->show();
    this->hide();
}

void MenuOrder::updateCustomerName()
{
    std::string name = CustomerName::instance().getName();
    ui->label_WelcomeTag->setText("Hi " + QString::fromStdString(name) + "! What would you like today?");
}
