/********************************************************************************
** Form generated from reading UI file 'cart.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_H
#define UI_CART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cart
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_CartTag;
    QLabel *label_Empty;
    QListWidget *listWidget;
    QPushButton *pushButton_Back;
    QPushButton *pushButton_Confirm;

    void setupUi(QWidget *Cart)
    {
        if (Cart->objectName().isEmpty())
            Cart->setObjectName("Cart");
        Cart->resize(295, 369);
        verticalLayoutWidget_2 = new QWidget(Cart);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(30, 60, 231, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_CartTag = new QLabel(verticalLayoutWidget_2);
        label_CartTag->setObjectName("label_CartTag");
        label_CartTag->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_CartTag);

        label_Empty = new QLabel(verticalLayoutWidget_2);
        label_Empty->setObjectName("label_Empty");
        label_Empty->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Empty);

        listWidget = new QListWidget(verticalLayoutWidget_2);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(30, 0));

        verticalLayout_2->addWidget(listWidget);

        pushButton_Back = new QPushButton(verticalLayoutWidget_2);
        pushButton_Back->setObjectName("pushButton_Back");

        verticalLayout_2->addWidget(pushButton_Back);

        pushButton_Confirm = new QPushButton(verticalLayoutWidget_2);
        pushButton_Confirm->setObjectName("pushButton_Confirm");

        verticalLayout_2->addWidget(pushButton_Confirm);

        verticalLayout_2->setStretch(2, 1);

        retranslateUi(Cart);

        QMetaObject::connectSlotsByName(Cart);
    } // setupUi

    void retranslateUi(QWidget *Cart)
    {
        Cart->setWindowTitle(QCoreApplication::translate("Cart", "Form", nullptr));
        label_CartTag->setText(QCoreApplication::translate("Cart", "Let's double check your order!", nullptr));
        label_Empty->setText(QString());
        pushButton_Back->setText(QCoreApplication::translate("Cart", "Back", nullptr));
        pushButton_Confirm->setText(QCoreApplication::translate("Cart", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cart: public Ui_Cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
