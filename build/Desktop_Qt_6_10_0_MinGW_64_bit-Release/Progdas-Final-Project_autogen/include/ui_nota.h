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
    QLabel *label_Nota;
    QLabel *label_FN;
    QLabel *label_FN2;
    QLabel *label_FNInsta;
    QPushButton *pushButton_Print;

    void setupUi(QWidget *Nota)
    {
        if (Nota->objectName().isEmpty())
            Nota->setObjectName("Nota");
        Nota->resize(317, 344);
        verticalLayoutWidget_2 = new QWidget(Nota);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(30, 30, 261, 281));
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

        label_Nota = new QLabel(verticalLayoutWidget_2);
        label_Nota->setObjectName("label_Nota");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Nota->sizePolicy().hasHeightForWidth());
        label_Nota->setSizePolicy(sizePolicy1);
        label_Nota->setFont(font1);

        verticalLayout_2->addWidget(label_Nota);

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
        label_Nota->setText(QString());
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
