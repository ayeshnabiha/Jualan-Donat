/********************************************************************************
** Form generated from reading UI file 'menuorder.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUORDER_H
#define UI_MENUORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuOrder
{
public:
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_WelcomeTag;
    QLabel *label_ShopTag;
    QListWidget *listWidget;
    QGridLayout *gridLayout_1;
    QLabel *label_TCB;
    QSpinBox *spinBox_TCB;
    QLabel *label_PriceTCB;
    QGridLayout *gridLayout_2;
    QLabel *label_PriceTLR;
    QLabel *label_TLR;
    QSpinBox *spinBox_TLR;
    QGridLayout *gridLayout_3;
    QLabel *label_PriceMRB;
    QLabel *label_MRB;
    QSpinBox *spinBox_MRB;
    QGridLayout *gridLayout_4;
    QLabel *label_ACB;
    QSpinBox *spinBox_ACB;
    QLabel *label_PriceACB;
    QGridLayout *gridLayout_5;
    QLabel *label_PriceRVCB;
    QLabel *label_RVCB;
    QSpinBox *spinBox_RVCB;
    QPushButton *pushButton_OK;

    void setupUi(QWidget *MenuOrder)
    {
        if (MenuOrder->objectName().isEmpty())
            MenuOrder->setObjectName("MenuOrder");
        MenuOrder->resize(358, 352);
        widget = new QWidget(MenuOrder);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 40, 291, 311));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 291, 440));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        verticalLayout->setContentsMargins(5, 0, 5, 10);
        label_WelcomeTag = new QLabel(verticalLayoutWidget);
        label_WelcomeTag->setObjectName("label_WelcomeTag");
        label_WelcomeTag->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_WelcomeTag);

        label_ShopTag = new QLabel(verticalLayoutWidget);
        label_ShopTag->setObjectName("label_ShopTag");
        label_ShopTag->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_ShopTag);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(listWidget);

        gridLayout_1 = new QGridLayout();
        gridLayout_1->setObjectName("gridLayout_1");
        gridLayout_1->setHorizontalSpacing(10);
        label_TCB = new QLabel(verticalLayoutWidget);
        label_TCB->setObjectName("label_TCB");
        label_TCB->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_1->addWidget(label_TCB, 0, 0, 1, 1);

        spinBox_TCB = new QSpinBox(verticalLayoutWidget);
        spinBox_TCB->setObjectName("spinBox_TCB");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox_TCB->sizePolicy().hasHeightForWidth());
        spinBox_TCB->setSizePolicy(sizePolicy1);

        gridLayout_1->addWidget(spinBox_TCB, 0, 2, 1, 1);

        label_PriceTCB = new QLabel(verticalLayoutWidget);
        label_PriceTCB->setObjectName("label_PriceTCB");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_PriceTCB->sizePolicy().hasHeightForWidth());
        label_PriceTCB->setSizePolicy(sizePolicy2);
        label_PriceTCB->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_1->addWidget(label_PriceTCB, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(10);
        label_PriceTLR = new QLabel(verticalLayoutWidget);
        label_PriceTLR->setObjectName("label_PriceTLR");
        sizePolicy2.setHeightForWidth(label_PriceTLR->sizePolicy().hasHeightForWidth());
        label_PriceTLR->setSizePolicy(sizePolicy2);
        label_PriceTLR->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_PriceTLR, 0, 1, 1, 1);

        label_TLR = new QLabel(verticalLayoutWidget);
        label_TLR->setObjectName("label_TLR");
        label_TLR->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(label_TLR, 0, 0, 1, 1);

        spinBox_TLR = new QSpinBox(verticalLayoutWidget);
        spinBox_TLR->setObjectName("spinBox_TLR");
        sizePolicy1.setHeightForWidth(spinBox_TLR->sizePolicy().hasHeightForWidth());
        spinBox_TLR->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(spinBox_TLR, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(10);
        label_PriceMRB = new QLabel(verticalLayoutWidget);
        label_PriceMRB->setObjectName("label_PriceMRB");
        sizePolicy2.setHeightForWidth(label_PriceMRB->sizePolicy().hasHeightForWidth());
        label_PriceMRB->setSizePolicy(sizePolicy2);
        label_PriceMRB->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_PriceMRB, 0, 1, 1, 1);

        label_MRB = new QLabel(verticalLayoutWidget);
        label_MRB->setObjectName("label_MRB");
        label_MRB->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_3->addWidget(label_MRB, 0, 0, 1, 1);

        spinBox_MRB = new QSpinBox(verticalLayoutWidget);
        spinBox_MRB->setObjectName("spinBox_MRB");
        sizePolicy1.setHeightForWidth(spinBox_MRB->sizePolicy().hasHeightForWidth());
        spinBox_MRB->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(spinBox_MRB, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(10);
        label_ACB = new QLabel(verticalLayoutWidget);
        label_ACB->setObjectName("label_ACB");
        label_ACB->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_4->addWidget(label_ACB, 0, 0, 1, 1);

        spinBox_ACB = new QSpinBox(verticalLayoutWidget);
        spinBox_ACB->setObjectName("spinBox_ACB");
        sizePolicy1.setHeightForWidth(spinBox_ACB->sizePolicy().hasHeightForWidth());
        spinBox_ACB->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(spinBox_ACB, 0, 2, 1, 1);

        label_PriceACB = new QLabel(verticalLayoutWidget);
        label_PriceACB->setObjectName("label_PriceACB");
        sizePolicy2.setHeightForWidth(label_PriceACB->sizePolicy().hasHeightForWidth());
        label_PriceACB->setSizePolicy(sizePolicy2);
        label_PriceACB->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_PriceACB, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        gridLayout_5->setHorizontalSpacing(10);
        label_PriceRVCB = new QLabel(verticalLayoutWidget);
        label_PriceRVCB->setObjectName("label_PriceRVCB");
        sizePolicy2.setHeightForWidth(label_PriceRVCB->sizePolicy().hasHeightForWidth());
        label_PriceRVCB->setSizePolicy(sizePolicy2);
        label_PriceRVCB->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(label_PriceRVCB, 0, 1, 1, 1);

        label_RVCB = new QLabel(verticalLayoutWidget);
        label_RVCB->setObjectName("label_RVCB");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_RVCB->sizePolicy().hasHeightForWidth());
        label_RVCB->setSizePolicy(sizePolicy3);
        label_RVCB->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_5->addWidget(label_RVCB, 0, 0, 1, 1);

        spinBox_RVCB = new QSpinBox(verticalLayoutWidget);
        spinBox_RVCB->setObjectName("spinBox_RVCB");
        sizePolicy1.setHeightForWidth(spinBox_RVCB->sizePolicy().hasHeightForWidth());
        spinBox_RVCB->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(spinBox_RVCB, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        pushButton_OK = new QPushButton(verticalLayoutWidget);
        pushButton_OK->setObjectName("pushButton_OK");

        verticalLayout->addWidget(pushButton_OK);


        retranslateUi(MenuOrder);

        QMetaObject::connectSlotsByName(MenuOrder);
    } // setupUi

    void retranslateUi(QWidget *MenuOrder)
    {
        MenuOrder->setWindowTitle(QCoreApplication::translate("MenuOrder", "Form", nullptr));
        label_WelcomeTag->setText(QString());
        label_ShopTag->setText(QCoreApplication::translate("MenuOrder", "DOPIYO'S MENU \360\235\234\227\340\247\216", nullptr));
        label_TCB->setText(QCoreApplication::translate("MenuOrder", "Tripple Choco Boom", nullptr));
        label_PriceTCB->setText(QCoreApplication::translate("MenuOrder", "@20k", nullptr));
        label_PriceTLR->setText(QCoreApplication::translate("MenuOrder", "@25k", nullptr));
        label_TLR->setText(QCoreApplication::translate("MenuOrder", "Tiramisu Lotus Ring", nullptr));
        label_PriceMRB->setText(QCoreApplication::translate("MenuOrder", "@30k", nullptr));
        label_MRB->setText(QCoreApplication::translate("MenuOrder", "Matcha Red bean", nullptr));
        label_ACB->setText(QCoreApplication::translate("MenuOrder", "American Cheese Boom", nullptr));
        label_PriceACB->setText(QCoreApplication::translate("MenuOrder", "@20k", nullptr));
        label_PriceRVCB->setText(QCoreApplication::translate("MenuOrder", "@25k", nullptr));
        label_RVCB->setText(QCoreApplication::translate("MenuOrder", "Red Velvet\302\240Cheese\302\240Boom", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("MenuOrder", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuOrder: public Ui_MenuOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUORDER_H
