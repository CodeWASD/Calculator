/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdvance;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLineEdit *lbl_input;
    QLabel *calculator;
    QGridLayout *gridLayout;
    QPushButton *num2;
    QPushButton *parantezbaz;
    QPushButton *mod;
    QPushButton *radikal;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *equal;
    QPushButton *point;
    QPushButton *multiplication;
    QPushButton *Division;
    QPushButton *num5;
    QPushButton *pi;
    QPushButton *percent;
    QPushButton *total;
    QPushButton *num3;
    QPushButton *num6;
    QPushButton *parantezbaste;
    QPushButton *power;
    QPushButton *Recreation;
    QPushButton *Delete_B;
    QPushButton *num7;
    QPushButton *num4;
    QPushButton *num1;
    QPushButton *num0;
    QFrame *line_2;
    QFrame *line_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(764, 515);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
" background-color: rgb( 53, 50, 47);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"border:1px solid gray;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:red;\n"
"	background-color: yellow;\n"
"}"));
        actionAdvance = new QAction(MainWindow);
        actionAdvance->setObjectName(QString::fromUtf8("actionAdvance"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lbl_input = new QLineEdit(centralwidget);
        lbl_input->setObjectName(QString::fromUtf8("lbl_input"));
        lbl_input->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(lbl_input, 2, 0, 1, 3);

        calculator = new QLabel(centralwidget);
        calculator->setObjectName(QString::fromUtf8("calculator"));
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setWeight(75);
        calculator->setFont(font);
        calculator->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        calculator->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(calculator, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        num2 = new QPushButton(centralwidget);
        num2->setObjectName(QString::fromUtf8("num2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(num2->sizePolicy().hasHeightForWidth());
        num2->setSizePolicy(sizePolicy);
        num2->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num2, 3, 1, 1, 1);

        parantezbaz = new QPushButton(centralwidget);
        parantezbaz->setObjectName(QString::fromUtf8("parantezbaz"));
        sizePolicy.setHeightForWidth(parantezbaz->sizePolicy().hasHeightForWidth());
        parantezbaz->setSizePolicy(sizePolicy);
        parantezbaz->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(parantezbaz, 0, 1, 1, 1);

        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mod->sizePolicy().hasHeightForWidth());
        mod->setSizePolicy(sizePolicy1);
        mod->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(mod, 0, 3, 1, 1);

        radikal = new QPushButton(centralwidget);
        radikal->setObjectName(QString::fromUtf8("radikal"));
        sizePolicy1.setHeightForWidth(radikal->sizePolicy().hasHeightForWidth());
        radikal->setSizePolicy(sizePolicy1);
        radikal->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(radikal, 1, 4, 1, 1);

        num8 = new QPushButton(centralwidget);
        num8->setObjectName(QString::fromUtf8("num8"));
        sizePolicy.setHeightForWidth(num8->sizePolicy().hasHeightForWidth());
        num8->setSizePolicy(sizePolicy);
        num8->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num8, 1, 1, 1, 1);

        num9 = new QPushButton(centralwidget);
        num9->setObjectName(QString::fromUtf8("num9"));
        sizePolicy.setHeightForWidth(num9->sizePolicy().hasHeightForWidth());
        num9->setSizePolicy(sizePolicy);
        num9->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num9, 1, 2, 1, 1);

        equal = new QPushButton(centralwidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        sizePolicy1.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy1);
        equal->setStyleSheet(QString::fromUtf8(" background-color: rgb( 50, 137, 48);"));

        gridLayout->addWidget(equal, 3, 4, 2, 1);

        point = new QPushButton(centralwidget);
        point->setObjectName(QString::fromUtf8("point"));
        sizePolicy.setHeightForWidth(point->sizePolicy().hasHeightForWidth());
        point->setSizePolicy(sizePolicy);
        point->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(point, 4, 1, 1, 1);

        multiplication = new QPushButton(centralwidget);
        multiplication->setObjectName(QString::fromUtf8("multiplication"));
        sizePolicy1.setHeightForWidth(multiplication->sizePolicy().hasHeightForWidth());
        multiplication->setSizePolicy(sizePolicy1);
        multiplication->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(multiplication, 2, 3, 1, 1);

        Division = new QPushButton(centralwidget);
        Division->setObjectName(QString::fromUtf8("Division"));
        sizePolicy1.setHeightForWidth(Division->sizePolicy().hasHeightForWidth());
        Division->setSizePolicy(sizePolicy1);
        Division->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(Division, 1, 3, 1, 1);

        num5 = new QPushButton(centralwidget);
        num5->setObjectName(QString::fromUtf8("num5"));
        sizePolicy.setHeightForWidth(num5->sizePolicy().hasHeightForWidth());
        num5->setSizePolicy(sizePolicy);
        num5->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num5, 2, 1, 1, 1);

        pi = new QPushButton(centralwidget);
        pi->setObjectName(QString::fromUtf8("pi"));
        sizePolicy1.setHeightForWidth(pi->sizePolicy().hasHeightForWidth());
        pi->setSizePolicy(sizePolicy1);
        pi->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(pi, 0, 4, 1, 1);

        percent = new QPushButton(centralwidget);
        percent->setObjectName(QString::fromUtf8("percent"));
        sizePolicy.setHeightForWidth(percent->sizePolicy().hasHeightForWidth());
        percent->setSizePolicy(sizePolicy);
        percent->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(percent, 4, 2, 1, 1);

        total = new QPushButton(centralwidget);
        total->setObjectName(QString::fromUtf8("total"));
        sizePolicy1.setHeightForWidth(total->sizePolicy().hasHeightForWidth());
        total->setSizePolicy(sizePolicy1);
        total->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(total, 4, 3, 1, 1);

        num3 = new QPushButton(centralwidget);
        num3->setObjectName(QString::fromUtf8("num3"));
        sizePolicy.setHeightForWidth(num3->sizePolicy().hasHeightForWidth());
        num3->setSizePolicy(sizePolicy);
        num3->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num3, 3, 2, 1, 1);

        num6 = new QPushButton(centralwidget);
        num6->setObjectName(QString::fromUtf8("num6"));
        sizePolicy.setHeightForWidth(num6->sizePolicy().hasHeightForWidth());
        num6->setSizePolicy(sizePolicy);
        num6->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num6, 2, 2, 1, 1);

        parantezbaste = new QPushButton(centralwidget);
        parantezbaste->setObjectName(QString::fromUtf8("parantezbaste"));
        sizePolicy.setHeightForWidth(parantezbaste->sizePolicy().hasHeightForWidth());
        parantezbaste->setSizePolicy(sizePolicy);
        parantezbaste->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(parantezbaste, 0, 2, 1, 1);

        power = new QPushButton(centralwidget);
        power->setObjectName(QString::fromUtf8("power"));
        sizePolicy1.setHeightForWidth(power->sizePolicy().hasHeightForWidth());
        power->setSizePolicy(sizePolicy1);
        power->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(power, 2, 4, 1, 1);

        Recreation = new QPushButton(centralwidget);
        Recreation->setObjectName(QString::fromUtf8("Recreation"));
        sizePolicy1.setHeightForWidth(Recreation->sizePolicy().hasHeightForWidth());
        Recreation->setSizePolicy(sizePolicy1);
        Recreation->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(Recreation, 3, 3, 1, 1);

        Delete_B = new QPushButton(centralwidget);
        Delete_B->setObjectName(QString::fromUtf8("Delete_B"));
        sizePolicy.setHeightForWidth(Delete_B->sizePolicy().hasHeightForWidth());
        Delete_B->setSizePolicy(sizePolicy);
        Delete_B->setStyleSheet(QString::fromUtf8(" background-color: rgb(   180, 0, 0);"));

        gridLayout->addWidget(Delete_B, 0, 0, 1, 1);

        num7 = new QPushButton(centralwidget);
        num7->setObjectName(QString::fromUtf8("num7"));
        sizePolicy.setHeightForWidth(num7->sizePolicy().hasHeightForWidth());
        num7->setSizePolicy(sizePolicy);
        num7->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num7, 1, 0, 1, 1);

        num4 = new QPushButton(centralwidget);
        num4->setObjectName(QString::fromUtf8("num4"));
        sizePolicy.setHeightForWidth(num4->sizePolicy().hasHeightForWidth());
        num4->setSizePolicy(sizePolicy);
        num4->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num4, 2, 0, 1, 1);

        num1 = new QPushButton(centralwidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        sizePolicy.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy);
        num1->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num1, 3, 0, 1, 1);

        num0 = new QPushButton(centralwidget);
        num0->setObjectName(QString::fromUtf8("num0"));
        sizePolicy.setHeightForWidth(num0->sizePolicy().hasHeightForWidth());
        num0->setSizePolicy(sizePolicy);
        num0->setStyleSheet(QString::fromUtf8(" background-color: rgb( 53, 50, 47);"));

        gridLayout->addWidget(num0, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 3);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 3, 3, 1);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        sizePolicy.setHeightForWidth(line_5->sizePolicy().hasHeightForWidth());
        line_5->setSizePolicy(sizePolicy);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_5, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdvance->setText(QCoreApplication::translate("MainWindow", "Advance", nullptr));
        calculator->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        num2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        parantezbaz->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        radikal->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        num8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        num9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        multiplication->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        Division->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        num5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pi->setText(QCoreApplication::translate("MainWindow", "\316\240", nullptr));
        percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        total->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        num3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        num6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        parantezbaste->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        power->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        Recreation->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Delete_B->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        num7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        num4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        num1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        num0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
