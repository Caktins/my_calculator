/********************************************************************************
** Form generated from reading UI file 'MIAO_calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIAO_CALCULATOR_H
#define UI_MIAO_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MIAO_calculatorClass
{
public:
    QWidget *centralWidget;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_8;
    QPushButton *button_7;
    QPushButton *button_9;
    QPushButton *button_0;
    QTextBrowser *show_ans;
    QPushButton *button_plus;
    QPushButton *button_minus;
    QPushButton *button_plot;
    QPushButton *button_equal;
    QPushButton *button_mul;
    QPushButton *button_div;
    QPushButton *button_del;
    QPushButton *button_clear;
    QRadioButton *button_binary;
    QRadioButton *button_octal;
    QRadioButton *button_decimal;
    QRadioButton *button_hex;
    QPushButton *button_menu;
    QPushButton *button_power;
    QPushButton *button_square;
    QPushButton *button_cube;
    QPushButton *button_e;
    QPushButton *button_pi;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MIAO_calculatorClass)
    {
        if (MIAO_calculatorClass->objectName().isEmpty())
            MIAO_calculatorClass->setObjectName(QStringLiteral("MIAO_calculatorClass"));
        MIAO_calculatorClass->resize(314, 392);
        centralWidget = new QWidget(MIAO_calculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button_1 = new QPushButton(centralWidget);
        button_1->setObjectName(QStringLiteral("button_1"));
        button_1->setGeometry(QRect(160, 140, 41, 41));
        button_1->setMouseTracking(false);
        button_2 = new QPushButton(centralWidget);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setGeometry(QRect(210, 140, 41, 41));
        button_2->setMouseTracking(false);
        button_3 = new QPushButton(centralWidget);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setGeometry(QRect(260, 140, 41, 41));
        button_3->setMouseTracking(false);
        button_4 = new QPushButton(centralWidget);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setGeometry(QRect(160, 190, 41, 41));
        button_4->setMouseTracking(false);
        button_5 = new QPushButton(centralWidget);
        button_5->setObjectName(QStringLiteral("button_5"));
        button_5->setGeometry(QRect(210, 190, 41, 41));
        button_5->setMouseTracking(false);
        button_6 = new QPushButton(centralWidget);
        button_6->setObjectName(QStringLiteral("button_6"));
        button_6->setGeometry(QRect(260, 190, 41, 41));
        button_6->setMouseTracking(false);
        button_8 = new QPushButton(centralWidget);
        button_8->setObjectName(QStringLiteral("button_8"));
        button_8->setGeometry(QRect(210, 240, 41, 41));
        button_8->setMouseTracking(false);
        button_7 = new QPushButton(centralWidget);
        button_7->setObjectName(QStringLiteral("button_7"));
        button_7->setGeometry(QRect(160, 240, 41, 41));
        button_7->setMouseTracking(false);
        button_9 = new QPushButton(centralWidget);
        button_9->setObjectName(QStringLiteral("button_9"));
        button_9->setGeometry(QRect(260, 240, 41, 41));
        button_9->setMouseTracking(false);
        button_0 = new QPushButton(centralWidget);
        button_0->setObjectName(QStringLiteral("button_0"));
        button_0->setGeometry(QRect(160, 290, 41, 41));
        button_0->setMouseTracking(false);
        show_ans = new QTextBrowser(centralWidget);
        show_ans->setObjectName(QStringLiteral("show_ans"));
        show_ans->setGeometry(QRect(10, 10, 291, 91));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        show_ans->setFont(font);
        show_ans->setLineWidth(1);
        button_plus = new QPushButton(centralWidget);
        button_plus->setObjectName(QStringLiteral("button_plus"));
        button_plus->setGeometry(QRect(110, 140, 41, 41));
        button_plus->setMouseTracking(false);
        button_minus = new QPushButton(centralWidget);
        button_minus->setObjectName(QStringLiteral("button_minus"));
        button_minus->setGeometry(QRect(110, 190, 41, 41));
        button_minus->setMouseTracking(false);
        button_plot = new QPushButton(centralWidget);
        button_plot->setObjectName(QStringLiteral("button_plot"));
        button_plot->setGeometry(QRect(210, 290, 41, 41));
        button_plot->setMouseTracking(false);
        button_equal = new QPushButton(centralWidget);
        button_equal->setObjectName(QStringLiteral("button_equal"));
        button_equal->setGeometry(QRect(260, 290, 41, 41));
        button_equal->setMouseTracking(false);
        button_mul = new QPushButton(centralWidget);
        button_mul->setObjectName(QStringLiteral("button_mul"));
        button_mul->setGeometry(QRect(110, 240, 41, 41));
        button_mul->setMouseTracking(false);
        button_div = new QPushButton(centralWidget);
        button_div->setObjectName(QStringLiteral("button_div"));
        button_div->setGeometry(QRect(110, 290, 41, 41));
        button_div->setMouseTracking(false);
        button_del = new QPushButton(centralWidget);
        button_del->setObjectName(QStringLiteral("button_del"));
        button_del->setGeometry(QRect(10, 140, 41, 41));
        button_del->setMouseTracking(false);
        button_clear = new QPushButton(centralWidget);
        button_clear->setObjectName(QStringLiteral("button_clear"));
        button_clear->setGeometry(QRect(10, 190, 41, 41));
        button_clear->setMouseTracking(false);
        button_binary = new QRadioButton(centralWidget);
        button_binary->setObjectName(QStringLiteral("button_binary"));
        button_binary->setGeometry(QRect(10, 110, 61, 16));
        button_octal = new QRadioButton(centralWidget);
        button_octal->setObjectName(QStringLiteral("button_octal"));
        button_octal->setGeometry(QRect(80, 110, 61, 16));
        button_decimal = new QRadioButton(centralWidget);
        button_decimal->setObjectName(QStringLiteral("button_decimal"));
        button_decimal->setGeometry(QRect(150, 110, 61, 16));
        button_decimal->setChecked(true);
        button_hex = new QRadioButton(centralWidget);
        button_hex->setObjectName(QStringLiteral("button_hex"));
        button_hex->setGeometry(QRect(220, 110, 71, 16));
        button_menu = new QPushButton(centralWidget);
        button_menu->setObjectName(QStringLiteral("button_menu"));
        button_menu->setGeometry(QRect(10, 290, 41, 41));
        button_menu->setMouseTracking(false);
        button_power = new QPushButton(centralWidget);
        button_power->setObjectName(QStringLiteral("button_power"));
        button_power->setGeometry(QRect(60, 240, 41, 41));
        button_power->setMouseTracking(false);
        button_square = new QPushButton(centralWidget);
        button_square->setObjectName(QStringLiteral("button_square"));
        button_square->setGeometry(QRect(60, 140, 41, 41));
        button_square->setMouseTracking(false);
        button_cube = new QPushButton(centralWidget);
        button_cube->setObjectName(QStringLiteral("button_cube"));
        button_cube->setGeometry(QRect(60, 190, 41, 41));
        button_cube->setMouseTracking(false);
        button_e = new QPushButton(centralWidget);
        button_e->setObjectName(QStringLiteral("button_e"));
        button_e->setGeometry(QRect(60, 290, 41, 41));
        button_e->setMouseTracking(false);
        button_pi = new QPushButton(centralWidget);
        button_pi->setObjectName(QStringLiteral("button_pi"));
        button_pi->setGeometry(QRect(10, 240, 41, 41));
        button_pi->setMouseTracking(false);
        MIAO_calculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MIAO_calculatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 314, 23));
        MIAO_calculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MIAO_calculatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MIAO_calculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MIAO_calculatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MIAO_calculatorClass->setStatusBar(statusBar);

        retranslateUi(MIAO_calculatorClass);

        QMetaObject::connectSlotsByName(MIAO_calculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *MIAO_calculatorClass)
    {
        MIAO_calculatorClass->setWindowTitle(QApplication::translate("MIAO_calculatorClass", "MIAO_calculator", nullptr));
        button_1->setText(QApplication::translate("MIAO_calculatorClass", "1", nullptr));
        button_2->setText(QApplication::translate("MIAO_calculatorClass", "2", nullptr));
        button_3->setText(QApplication::translate("MIAO_calculatorClass", "3", nullptr));
        button_4->setText(QApplication::translate("MIAO_calculatorClass", "4", nullptr));
        button_5->setText(QApplication::translate("MIAO_calculatorClass", "5", nullptr));
        button_6->setText(QApplication::translate("MIAO_calculatorClass", "6", nullptr));
        button_8->setText(QApplication::translate("MIAO_calculatorClass", "8", nullptr));
        button_7->setText(QApplication::translate("MIAO_calculatorClass", "7", nullptr));
        button_9->setText(QApplication::translate("MIAO_calculatorClass", "9", nullptr));
        button_0->setText(QApplication::translate("MIAO_calculatorClass", "0", nullptr));
        button_plus->setText(QApplication::translate("MIAO_calculatorClass", "+", nullptr));
        button_minus->setText(QApplication::translate("MIAO_calculatorClass", "-", nullptr));
        button_plot->setText(QApplication::translate("MIAO_calculatorClass", ".", nullptr));
        button_equal->setText(QApplication::translate("MIAO_calculatorClass", "=", nullptr));
        button_mul->setText(QApplication::translate("MIAO_calculatorClass", "\303\227", nullptr));
        button_div->setText(QApplication::translate("MIAO_calculatorClass", "\303\267", nullptr));
        button_del->setText(QApplication::translate("MIAO_calculatorClass", "\342\206\220", nullptr));
        button_clear->setText(QApplication::translate("MIAO_calculatorClass", "C", nullptr));
        button_binary->setText(QApplication::translate("MIAO_calculatorClass", "\344\272\214\350\277\233\345\210\266", nullptr));
        button_octal->setText(QApplication::translate("MIAO_calculatorClass", "\345\205\253\350\277\233\345\210\266", nullptr));
        button_decimal->setText(QApplication::translate("MIAO_calculatorClass", "\345\215\201\350\277\233\345\210\266", nullptr));
        button_hex->setText(QApplication::translate("MIAO_calculatorClass", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        button_menu->setText(QApplication::translate("MIAO_calculatorClass", "Menu1", nullptr));
        button_power->setText(QApplication::translate("MIAO_calculatorClass", "y^x", nullptr));
        button_square->setText(QApplication::translate("MIAO_calculatorClass", "x^2", nullptr));
        button_cube->setText(QApplication::translate("MIAO_calculatorClass", "x^3", nullptr));
        button_e->setText(QApplication::translate("MIAO_calculatorClass", "e", nullptr));
        button_pi->setText(QApplication::translate("MIAO_calculatorClass", "PI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MIAO_calculatorClass: public Ui_MIAO_calculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIAO_CALCULATOR_H
