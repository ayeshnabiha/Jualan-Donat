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
    QLabel *label_Main;
    QLabel *label_Adress;
    QLabel *label_Time;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Cust;
    QLabel *label_CustName;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Nota_4;
    QLabel *label_Nota_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Nota_5;
    QLabel *label_Nota_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Nota_6;
    QLabel *label_Nota_7;
    QLabel *label_FN;
    QLabel *label_FN2;
    QLabel *label_FNInsta;
    QPushButton *pushButton_Print;

    void setupUi(QWidget *Nota)
    {
        if (Nota->objectName().isEmpty())
            Nota->setObjectName("Nota");
        Nota->resize(276, 300);
        verticalLayoutWidget_2 = new QWidget(Nota);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(30, 30, 211, 261));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Main = new QLabel(verticalLayoutWidget_2);
        label_Main->setObjectName("label_Main");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Main->sizePolicy().hasHeightForWidth());
        label_Main->setSizePolicy(sizePolicy);
        label_Main->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Palatino Linotype")});
        label_Main->setFont(font);
        label_Main->setFrameShape(QFrame::Shape::Panel);
        label_Main->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Main);

        label_Adress = new QLabel(verticalLayoutWidget_2);
        label_Adress->setObjectName("label_Adress");
        sizePolicy.setHeightForWidth(label_Adress->sizePolicy().hasHeightForWidth());
        label_Adress->setSizePolicy(sizePolicy);
        label_Adress->setMinimumSize(QSize(0, 10));
        label_Adress->setFont(font);
        label_Adress->setFrameShape(QFrame::Shape::NoFrame);
        label_Adress->setFrameShadow(QFrame::Shadow::Raised);
        label_Adress->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Adress);

        label_Time = new QLabel(verticalLayoutWidget_2);
        label_Time->setObjectName("label_Time");
        sizePolicy.setHeightForWidth(label_Time->sizePolicy().hasHeightForWidth());
        label_Time->setSizePolicy(sizePolicy);
        label_Time->setMinimumSize(QSize(0, 20));
        label_Time->setFont(font);
        label_Time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Time);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        label_Cust = new QLabel(verticalLayoutWidget_2);
        label_Cust->setObjectName("label_Cust");
        sizePolicy.setHeightForWidth(label_Cust->sizePolicy().hasHeightForWidth());
        label_Cust->setSizePolicy(sizePolicy);
        label_Cust->setMinimumSize(QSize(0, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(10);
        label_Cust->setFont(font1);
        label_Cust->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_Cust);

        label_CustName = new QLabel(verticalLayoutWidget_2);
        label_CustName->setObjectName("label_CustName");
        sizePolicy.setHeightForWidth(label_CustName->sizePolicy().hasHeightForWidth());
        label_CustName->setSizePolicy(sizePolicy);
        label_CustName->setMinimumSize(QSize(0, 20));
        label_CustName->setFont(font1);
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
        label_Nota_4->setFont(font1);
        label_Nota_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_Nota_4);

        label_Nota_9 = new QLabel(verticalLayoutWidget_2);
        label_Nota_9->setObjectName("label_Nota_9");
        sizePolicy.setHeightForWidth(label_Nota_9->sizePolicy().hasHeightForWidth());
        label_Nota_9->setSizePolicy(sizePolicy);
        label_Nota_9->setMinimumSize(QSize(0, 20));
        label_Nota_9->setFont(font1);
        label_Nota_9->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_Nota_9);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        label_Nota_5 = new QLabel(verticalLayoutWidget_2);
        label_Nota_5->setObjectName("label_Nota_5");
        sizePolicy.setHeightForWidth(label_Nota_5->sizePolicy().hasHeightForWidth());
        label_Nota_5->setSizePolicy(sizePolicy);
        label_Nota_5->setMinimumSize(QSize(0, 20));
        label_Nota_5->setFont(font1);
        label_Nota_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_Nota_5);

        label_Nota_8 = new QLabel(verticalLayoutWidget_2);
        label_Nota_8->setObjectName("label_Nota_8");
        sizePolicy.setHeightForWidth(label_Nota_8->sizePolicy().hasHeightForWidth());
        label_Nota_8->setSizePolicy(sizePolicy);
        label_Nota_8->setMinimumSize(QSize(0, 20));
        label_Nota_8->setFont(font1);
        label_Nota_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_Nota_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        label_Nota_6 = new QLabel(verticalLayoutWidget_2);
        label_Nota_6->setObjectName("label_Nota_6");
        sizePolicy.setHeightForWidth(label_Nota_6->sizePolicy().hasHeightForWidth());
        label_Nota_6->setSizePolicy(sizePolicy);
        label_Nota_6->setMinimumSize(QSize(0, 20));
        label_Nota_6->setFont(font1);
        label_Nota_6->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(label_Nota_6);

        label_Nota_7 = new QLabel(verticalLayoutWidget_2);
        label_Nota_7->setObjectName("label_Nota_7");
        sizePolicy.setHeightForWidth(label_Nota_7->sizePolicy().hasHeightForWidth());
        label_Nota_7->setSizePolicy(sizePolicy);
        label_Nota_7->setMinimumSize(QSize(0, 20));
        label_Nota_7->setFont(font1);
        label_Nota_7->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(label_Nota_7);


        verticalLayout_2->addLayout(horizontalLayout_5);

        label_FN = new QLabel(verticalLayoutWidget_2);
        label_FN->setObjectName("label_FN");
        sizePolicy.setHeightForWidth(label_FN->sizePolicy().hasHeightForWidth());
        label_FN->setSizePolicy(sizePolicy);
        label_FN->setMinimumSize(QSize(0, 5));
        label_FN->setFont(font);
        label_FN->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_FN);

        label_FN2 = new QLabel(verticalLayoutWidget_2);
        label_FN2->setObjectName("label_FN2");
        sizePolicy.setHeightForWidth(label_FN2->sizePolicy().hasHeightForWidth());
        label_FN2->setSizePolicy(sizePolicy);
        label_FN2->setMinimumSize(QSize(0, 5));
        label_FN2->setFont(font);
        label_FN2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_FN2);

        label_FNInsta = new QLabel(verticalLayoutWidget_2);
        label_FNInsta->setObjectName("label_FNInsta");
        sizePolicy.setHeightForWidth(label_FNInsta->sizePolicy().hasHeightForWidth());
        label_FNInsta->setSizePolicy(sizePolicy);
        label_FNInsta->setMinimumSize(QSize(0, 20));
        label_FNInsta->setFont(font);
        label_FNInsta->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_FNInsta);

        pushButton_Print = new QPushButton(verticalLayoutWidget_2);
        pushButton_Print->setObjectName("pushButton_Print");

        verticalLayout_2->addWidget(pushButton_Print);


        retranslateUi(Nota);

        QMetaObject::connectSlotsByName(Nota);
    } // setupUi

    void retranslateUi(QWidget *Nota)
    {
        Nota->setWindowTitle(QCoreApplication::translate("Nota", "Form", nullptr));
        label_Main->setText(QCoreApplication::translate("Nota", "DOPIYO'S DONUT", nullptr));
        label_Adress->setText(QCoreApplication::translate("Nota", "Jl. Grafika No. 2, Depok, Sleman", nullptr));
        label_Time->setText(QString());
        label_Cust->setText(QCoreApplication::translate("Nota", "Customer", nullptr));
        label_CustName->setText(QString());
        label_Nota_4->setText(QCoreApplication::translate("Nota", "Subtotal", nullptr));
        label_Nota_9->setText(QString());
        label_Nota_5->setText(QCoreApplication::translate("Nota", "TAX(10%)", nullptr));
        label_Nota_8->setText(QString());
        label_Nota_6->setText(QCoreApplication::translate("Nota", "Total ", nullptr));
        label_Nota_7->setText(QString());
        label_FN->setText(QCoreApplication::translate("Nota", "Thank you for your purchase!", nullptr));
        label_FN2->setText(QCoreApplication::translate("Nota", "Have a nice day <3", nullptr));
        label_FNInsta->setText(QCoreApplication::translate("Nota", "instagram @dopiyosdonut", nullptr));
        pushButton_Print->setText(QCoreApplication::translate("Nota", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nota: public Ui_Nota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTA_H
