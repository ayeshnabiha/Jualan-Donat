/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Payment
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_QR;
    QPushButton *pushButton_Confirm;

    void setupUi(QWidget *Payment)
    {
        if (Payment->objectName().isEmpty())
            Payment->setObjectName("Payment");
        Payment->resize(344, 381);
        verticalLayoutWidget = new QWidget(Payment);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 10, 302, 344));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setFrameShape(QFrame::Shape::NoFrame);
        label->setFrameShadow(QFrame::Shadow::Plain);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        label_QR = new QLabel(verticalLayoutWidget);
        label_QR->setObjectName("label_QR");
        label_QR->setPixmap(QPixmap(QString::fromUtf8(":/img/frame.png")));
        label_QR->setScaledContents(true);

        verticalLayout->addWidget(label_QR);

        pushButton_Confirm = new QPushButton(verticalLayoutWidget);
        pushButton_Confirm->setObjectName("pushButton_Confirm");

        verticalLayout->addWidget(pushButton_Confirm);


        retranslateUi(Payment);

        QMetaObject::connectSlotsByName(Payment);
    } // setupUi

    void retranslateUi(QWidget *Payment)
    {
        Payment->setWindowTitle(QCoreApplication::translate("Payment", "Form", nullptr));
        label->setText(QCoreApplication::translate("Payment", "Scan QR below to do the payment", nullptr));
        label_QR->setText(QString());
        pushButton_Confirm->setText(QCoreApplication::translate("Payment", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Payment: public Ui_Payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
