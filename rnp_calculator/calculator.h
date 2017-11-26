#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include "stack.h"

namespace Ui {
class calculator;
}

class calculator : public QWidget
{
    Q_OBJECT

private:
    // FILA
    stack * stk;

public:
    explicit calculator(QWidget *parent = 0);
    ~calculator();

private slots:
    stack * getStack();

    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_0_clicked();

    void on_button_clear_clicked();

    void on_button_enter_clicked();

    void on_button_del_clicked();

    void on_button_sum_clicked();

    void on_button_minus_clicked();

    void on_button_mult_clicked();

    void on_button_div_clicked();

    void on_button_rol_clicked();

    void on_button_down_clicked();

    void on_button_up_clicked();

    void printStack();

private:
    Ui::calculator *ui;
};

#endif // CALCULATOR_H
