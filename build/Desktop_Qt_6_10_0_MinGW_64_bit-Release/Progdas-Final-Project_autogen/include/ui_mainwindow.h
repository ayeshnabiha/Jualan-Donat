/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_Welcome;
    QHBoxLayout *horizontalLayout;
    QLabel *label_EnterName;
    QLineEdit *lineEdit_EnterName;
    QPushButton *pushButton_OK;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(322, 209);
        MainWindow->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(MainWindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 40, 265, 130));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        label_Welcome = new QLabel(verticalLayoutWidget);
        label_Welcome->setObjectName("label_Welcome");
        label_Welcome->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_Welcome);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 5, 0, 5);
        label_EnterName = new QLabel(verticalLayoutWidget);
        label_EnterName->setObjectName("label_EnterName");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_EnterName->sizePolicy().hasHeightForWidth());
        label_EnterName->setSizePolicy(sizePolicy);
        label_EnterName->setMinimumSize(QSize(170, 30));
        label_EnterName->setAutoFillBackground(false);
        label_EnterName->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_EnterName->setWordWrap(true);

        horizontalLayout->addWidget(label_EnterName);

        lineEdit_EnterName = new QLineEdit(verticalLayoutWidget);
        lineEdit_EnterName->setObjectName("lineEdit_EnterName");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_EnterName->sizePolicy().hasHeightForWidth());
        lineEdit_EnterName->setSizePolicy(sizePolicy1);
        lineEdit_EnterName->setMaximumSize(QSize(16777194, 16777215));
        lineEdit_EnterName->setSizeIncrement(QSize(0, 0));

        horizontalLayout->addWidget(lineEdit_EnterName);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_OK = new QPushButton(verticalLayoutWidget);
        pushButton_OK->setObjectName("pushButton_OK");

        verticalLayout->addWidget(pushButton_OK);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Form", nullptr));
        label_Welcome->setText(QCoreApplication::translate("MainWindow", "Welcome to DOPIYO! <3", nullptr));
        label_EnterName->setText(QCoreApplication::translate("MainWindow", "Please enter your name ", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
