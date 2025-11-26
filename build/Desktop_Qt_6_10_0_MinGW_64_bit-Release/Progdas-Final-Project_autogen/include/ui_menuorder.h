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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
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
    QPushButton *pushButton_OK;

    void setupUi(QWidget *MenuOrder)
    {
        if (MenuOrder->objectName().isEmpty())
            MenuOrder->setObjectName("MenuOrder");
        MenuOrder->resize(411, 331);
        widget = new QWidget(MenuOrder);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 40, 341, 261));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 341, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        verticalLayout->setContentsMargins(5, 0, 5, 10);
        label_WelcomeTag = new QLabel(verticalLayoutWidget);
        label_WelcomeTag->setObjectName("label_WelcomeTag");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_WelcomeTag->sizePolicy().hasHeightForWidth());
        label_WelcomeTag->setSizePolicy(sizePolicy);
        label_WelcomeTag->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_WelcomeTag);

        label_ShopTag = new QLabel(verticalLayoutWidget);
        label_ShopTag->setObjectName("label_ShopTag");
        sizePolicy.setHeightForWidth(label_ShopTag->sizePolicy().hasHeightForWidth());
        label_ShopTag->setSizePolicy(sizePolicy);
        label_ShopTag->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_ShopTag);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMaximumSize(QSize(16777215, 1500));

        verticalLayout->addWidget(listWidget);

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
        pushButton_OK->setText(QCoreApplication::translate("MenuOrder", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuOrder: public Ui_MenuOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUORDER_H
