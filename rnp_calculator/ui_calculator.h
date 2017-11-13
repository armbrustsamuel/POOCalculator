/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_clear;
    QPushButton *button_sum;
    QPushButton *button_minus;
    QPushButton *button_mult;
    QPushButton *button_div;
    QPushButton *button_up;
    QPushButton *button_down;
    QPushButton *button_0;
    QPushButton *button_del;
    QPushButton *button_rol;
    QPushButton *button_enter;

    void setupUi(QWidget *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QStringLiteral("calculator"));
        calculator->resize(210, 381);
        textEdit = new QTextEdit(calculator);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 191, 81));
        lineEdit = new QLineEdit(calculator);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 100, 141, 21));
        button_1 = new QPushButton(calculator);
        button_1->setObjectName(QStringLiteral("button_1"));
        button_1->setGeometry(QRect(10, 130, 41, 41));
        button_2 = new QPushButton(calculator);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setGeometry(QRect(60, 130, 41, 41));
        button_3 = new QPushButton(calculator);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setGeometry(QRect(110, 130, 41, 41));
        button_4 = new QPushButton(calculator);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setGeometry(QRect(10, 180, 41, 41));
        button_5 = new QPushButton(calculator);
        button_5->setObjectName(QStringLiteral("button_5"));
        button_5->setGeometry(QRect(60, 180, 41, 41));
        button_6 = new QPushButton(calculator);
        button_6->setObjectName(QStringLiteral("button_6"));
        button_6->setGeometry(QRect(110, 180, 41, 41));
        button_7 = new QPushButton(calculator);
        button_7->setObjectName(QStringLiteral("button_7"));
        button_7->setGeometry(QRect(10, 230, 41, 41));
        button_8 = new QPushButton(calculator);
        button_8->setObjectName(QStringLiteral("button_8"));
        button_8->setGeometry(QRect(60, 230, 41, 41));
        button_9 = new QPushButton(calculator);
        button_9->setObjectName(QStringLiteral("button_9"));
        button_9->setGeometry(QRect(110, 230, 41, 41));
        button_clear = new QPushButton(calculator);
        button_clear->setObjectName(QStringLiteral("button_clear"));
        button_clear->setGeometry(QRect(160, 100, 41, 21));
        QFont font;
        font.setPointSize(10);
        button_clear->setFont(font);
        button_sum = new QPushButton(calculator);
        button_sum->setObjectName(QStringLiteral("button_sum"));
        button_sum->setGeometry(QRect(160, 130, 41, 41));
        button_minus = new QPushButton(calculator);
        button_minus->setObjectName(QStringLiteral("button_minus"));
        button_minus->setGeometry(QRect(160, 180, 41, 41));
        button_mult = new QPushButton(calculator);
        button_mult->setObjectName(QStringLiteral("button_mult"));
        button_mult->setGeometry(QRect(160, 230, 41, 41));
        button_div = new QPushButton(calculator);
        button_div->setObjectName(QStringLiteral("button_div"));
        button_div->setGeometry(QRect(160, 280, 41, 41));
        button_up = new QPushButton(calculator);
        button_up->setObjectName(QStringLiteral("button_up"));
        button_up->setGeometry(QRect(10, 280, 41, 41));
        button_down = new QPushButton(calculator);
        button_down->setObjectName(QStringLiteral("button_down"));
        button_down->setGeometry(QRect(110, 280, 41, 41));
        button_0 = new QPushButton(calculator);
        button_0->setObjectName(QStringLiteral("button_0"));
        button_0->setGeometry(QRect(60, 280, 41, 41));
        button_del = new QPushButton(calculator);
        button_del->setObjectName(QStringLiteral("button_del"));
        button_del->setGeometry(QRect(10, 330, 41, 41));
        button_rol = new QPushButton(calculator);
        button_rol->setObjectName(QStringLiteral("button_rol"));
        button_rol->setGeometry(QRect(60, 330, 41, 41));
        button_enter = new QPushButton(calculator);
        button_enter->setObjectName(QStringLiteral("button_enter"));
        button_enter->setGeometry(QRect(100, 320, 111, 61));

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QWidget *calculator)
    {
        calculator->setWindowTitle(QApplication::translate("calculator", "calculator", Q_NULLPTR));
        button_1->setText(QApplication::translate("calculator", "1", Q_NULLPTR));
        button_2->setText(QApplication::translate("calculator", "2", Q_NULLPTR));
        button_3->setText(QApplication::translate("calculator", "3", Q_NULLPTR));
        button_4->setText(QApplication::translate("calculator", "4", Q_NULLPTR));
        button_5->setText(QApplication::translate("calculator", "5", Q_NULLPTR));
        button_6->setText(QApplication::translate("calculator", "6", Q_NULLPTR));
        button_7->setText(QApplication::translate("calculator", "7", Q_NULLPTR));
        button_8->setText(QApplication::translate("calculator", "8", Q_NULLPTR));
        button_9->setText(QApplication::translate("calculator", "9", Q_NULLPTR));
        button_clear->setText(QApplication::translate("calculator", "CLEAR", Q_NULLPTR));
        button_sum->setText(QApplication::translate("calculator", "+", Q_NULLPTR));
        button_minus->setText(QApplication::translate("calculator", "-", Q_NULLPTR));
        button_mult->setText(QApplication::translate("calculator", "x", Q_NULLPTR));
        button_div->setText(QApplication::translate("calculator", "\303\267", Q_NULLPTR));
        button_up->setText(QApplication::translate("calculator", "\342\206\221", Q_NULLPTR));
        button_down->setText(QApplication::translate("calculator", "\342\206\223", Q_NULLPTR));
        button_0->setText(QApplication::translate("calculator", "0", Q_NULLPTR));
        button_del->setText(QApplication::translate("calculator", "DEL", Q_NULLPTR));
        button_rol->setText(QApplication::translate("calculator", "ROL", Q_NULLPTR));
        button_enter->setText(QApplication::translate("calculator", "ENTER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
