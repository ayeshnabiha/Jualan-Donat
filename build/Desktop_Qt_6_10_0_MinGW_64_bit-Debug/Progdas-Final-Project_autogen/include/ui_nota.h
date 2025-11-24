/********************************************************************************
** Form generated from reading UI file 'nota.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTA_H
#define UI_NOTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nota
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Nota;
    QLabel *label_Nota_3;
    QLabel *label_Time;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Nota_2;
    QLabel *label_CustName;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Nota_4;
    QLabel *label_CustName_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Nota_5;
    QLabel *label_Tax;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Nota_6;
    QLabel *label_CustName_4;
    QLabel *label_Nota_8;
    QLabel *label_Nota_7;
    QLabel *label_Nota_9;
    QPushButton *pushButton_Print;

    void setupUi(QWidget *Nota)
    {
        if (Nota->objectName().isEmpty())
            Nota->setObjectName("Nota");
        Nota->resize(292, 300);
        verticalLayoutWidget_2 = new QWidget(Nota);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 30, 245, 261));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Nota = new QLabel(verticalLayoutWidget_2);
        label_Nota->setObjectName("label_Nota");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Nota->sizePolicy().hasHeightForWidth());
        label_Nota->setSizePolicy(sizePolicy);
        label_Nota->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Palatino Linotype")});
        label_Nota->setFont(font);
        label_Nota->setFrameShape(QFrame::Shape::Panel);
        label_Nota->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Nota);

        label_Nota_3 = new QLabel(verticalLayoutWidget_2);
        label_Nota_3->setObjectName("label_Nota_3");
        sizePolicy.setHeightForWidth(label_Nota_3->sizePolicy().hasHeightForWidth());
        label_Nota_3->setSizePolicy(sizePolicy);
        label_Nota_3->setMinimumSize(QSize(0, 10));
        label_Nota_3->setFont(font);
        label_Nota_3->setFrameShape(QFrame::Shape::NoFrame);
        label_Nota_3->setFrameShadow(QFrame::Shadow::Raised);
        label_Nota_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Nota_3);

        label_Time = new QLabel(verticalLayoutWidget_2);
        label_Time->setObjectName("label_Time");
        sizePolicy.setHeightForWidth(label_Time->sizePolicy().hasHeightForWidth());
        label_Time->setSizePolicy(sizePolicy);
        label_Time->setMinimumSize(QSize(0, 20));
        label_Time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Time);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        label_Nota_2 = new QLabel(verticalLayoutWidget_2);
        label_Nota_2->setObjectName("label_Nota_2");
        sizePolicy.setHeightForWidth(label_Nota_2->sizePolicy().hasHeightForWidth());
        label_Nota_2->setSizePolicy(sizePolicy);
        label_Nota_2->setMinimumSize(QSize(0, 20));
        label_Nota_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_Nota_2);

        label_CustName = new QLabel(verticalLayoutWidget_2);
        label_CustName->setObjectName("label_CustName");
        sizePolicy.setHeightForWidth(label_CustName->sizePolicy().hasHeightForWidth());
        label_CustName->setSizePolicy(sizePolicy);
        label_CustName->setMinimumSize(QSize(0, 20));
        label_CustName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_CustName);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");

        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        label_Nota_4 = new QLabel(verticalLayoutWidget_2);
        label_Nota_4->setObjectName("label_Nota_4");
        sizePolicy.setHeightForWidth(label_Nota_4->sizePolicy().hasHeightForWidth());
        label_Nota_4->setSizePolicy(sizePolicy);
        label_Nota_4->setMinimumSize(QSize(0, 20));
        label_Nota_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_Nota_4);

        label_CustName_2 = new QLabel(verticalLayoutWidget_2);
        label_CustName_2->setObjectName("label_CustName_2");
        sizePolicy.setHeightForWidth(label_CustName_2->sizePolicy().hasHeightForWidth());
        label_CustName_2->setSizePolicy(sizePolicy);
        label_CustName_2->setMinimumSize(QSize(0, 20));
        label_CustName_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_CustName_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        label_Nota_5 = new QLabel(verticalLayoutWidget_2);
        label_Nota_5->setObjectName("label_Nota_5");
        sizePolicy.setHeightForWidth(label_Nota_5->sizePolicy().hasHeightForWidth());
        label_Nota_5->setSizePolicy(sizePolicy);
        label_Nota_5->setMinimumSize(QSize(0, 20));
        label_Nota_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_Nota_5);

        label_Tax = new QLabel(verticalLayoutWidget_2);
        label_Tax->setObjectName("label_Tax");
        sizePolicy.setHeightForWidth(label_Tax->sizePolicy().hasHeightForWidth());
        label_Tax->setSizePolicy(sizePolicy);
        label_Tax->setMinimumSize(QSize(0, 20));
        label_Tax->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_Tax);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        label_Nota_6 = new QLabel(verticalLayoutWidget_2);
        label_Nota_6->setObjectName("label_Nota_6");
        sizePolicy.setHeightForWidth(label_Nota_6->sizePolicy().hasHeightForWidth());
        label_Nota_6->setSizePolicy(sizePolicy);
        label_Nota_6->setMinimumSize(QSize(0, 20));
        label_Nota_6->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(label_Nota_6);

        label_CustName_4 = new QLabel(verticalLayoutWidget_2);
        label_CustName_4->setObjectName("label_CustName_4");
        sizePolicy.setHeightForWidth(label_CustName_4->sizePolicy().hasHeightForWidth());
        label_CustName_4->setSizePolicy(sizePolicy);
        label_CustName_4->setMinimumSize(QSize(0, 20));
        label_CustName_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_CustName_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        label_Nota_8 = new QLabel(verticalLayoutWidget_2);
        label_Nota_8->setObjectName("label_Nota_8");
        sizePolicy.setHeightForWidth(label_Nota_8->sizePolicy().hasHeightForWidth());
        label_Nota_8->setSizePolicy(sizePolicy);
        label_Nota_8->setMinimumSize(QSize(0, 5));
        label_Nota_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Nota_8);

        label_Nota_7 = new QLabel(verticalLayoutWidget_2);
        label_Nota_7->setObjectName("label_Nota_7");
        sizePolicy.setHeightForWidth(label_Nota_7->sizePolicy().hasHeightForWidth());
        label_Nota_7->setSizePolicy(sizePolicy);
        label_Nota_7->setMinimumSize(QSize(0, 5));
        label_Nota_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Nota_7);

        label_Nota_9 = new QLabel(verticalLayoutWidget_2);
        label_Nota_9->setObjectName("label_Nota_9");
        sizePolicy.setHeightForWidth(label_Nota_9->sizePolicy().hasHeightForWidth());
        label_Nota_9->setSizePolicy(sizePolicy);
        label_Nota_9->setMinimumSize(QSize(0, 20));
        label_Nota_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Nota_9);

        pushButton_Print = new QPushButton(verticalLayoutWidget_2);
        pushButton_Print->setObjectName("pushButton_Print");

        verticalLayout_2->addWidget(pushButton_Print);


        retranslateUi(Nota);

        QMetaObject::connectSlotsByName(Nota);
    } // setupUi

    void retranslateUi(QWidget *Nota)
    {
        Nota->setWindowTitle(QCoreApplication::translate("Nota", "Form", nullptr));
        label_Nota->setText(QCoreApplication::translate("Nota", "DOPIYO'S DONUT", nullptr));
        label_Nota_3->setText(QCoreApplication::translate("Nota", "Jl. Grafika No. 2, Depok, Sleman", nullptr));
        label_Time->setText(QString());
        label_Nota_2->setText(QCoreApplication::translate("Nota", "Customer", nullptr));
        label_CustName->setText(QString());
        label_Nota_4->setText(QCoreApplication::translate("Nota", "Subtotal", nullptr));
        label_CustName_2->setText(QString());
        label_Nota_5->setText(QCoreApplication::translate("Nota", "TAX(10%)", nullptr));
        label_Tax->setText(QString());
        label_Nota_6->setText(QCoreApplication::translate("Nota", "Total ", nullptr));
        label_CustName_4->setText(QString());
        label_Nota_8->setText(QCoreApplication::translate("Nota", "Thank you for your purchase!", nullptr));
        label_Nota_7->setText(QCoreApplication::translate("Nota", "Have a nice day <3", nullptr));
        label_Nota_9->setText(QCoreApplication::translate("Nota", "instagram @dopiyosdonut", nullptr));
        pushButton_Print->setText(QCoreApplication::translate("Nota", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nota: public Ui_Nota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTA_H
