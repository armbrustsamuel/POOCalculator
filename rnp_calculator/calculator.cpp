#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculator)
{
    stk = new stack();
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}

stack * calculator::getStack(){
    return stk;
}

void calculator::printStack(){

    node *percorre;

    ui->textEdit->clear();

    percorre = stk->getHead();

    while(percorre != NULL){
        ui->textEdit->append(QString("%1").arg(percorre->Get()));
        percorre = percorre->GetNext();
    }

//    for(percorre=stk->getLast();(percorre->GetNext()->GetNext()) != NULL; percorre = percorre->GetNext() ){
//        ui->textEdit->append(QString("%1").arg(percorre->Get()));
//    }

}

void calculator::on_button_1_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"1"));
}

void calculator::on_button_2_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"2"));
}

void calculator::on_button_3_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"3"));
}

void calculator::on_button_4_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"4"));
}

void calculator::on_button_5_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"5"));
}

void calculator::on_button_6_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"6"));
}

void calculator::on_button_7_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"7"));
}

void calculator::on_button_8_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"8"));
}

void calculator::on_button_9_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"9"));
}

void calculator::on_button_0_clicked()
{
    QString t = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1").arg(t+"0"));
}

void calculator::on_button_clear_clicked()
{
    ui->lineEdit->clear();
}

void calculator::on_button_del_clicked()
{
//    QString t = ui->lineEdit->text();
//    t.chop(1);
//    ui->lineEdit->setText(t);
    stk->removeNew();
    printStack();
}

void calculator::on_button_down_clicked()
{
    // Adjust to correct position
    ui->textEdit->scroll(0,-1);
}

void calculator::on_button_up_clicked()
{
    // Adjust to correct position
//    ui->textEdit->scrollToAnchor("1");
    ui->textEdit->scroll(0,1);
}


void calculator::on_button_sum_clicked()
{
    //pega dois ultimos da fila e soma
    double a,b;
    a = stk->getLast()->Get();
    stk->removeNew();
    b = stk->getLast()->Get();
    stk->removeNew();

    ui->textEdit->setText(QString("%1").arg(a+b));
    //insere resultado na fila

    stk->insertNew(a+b);
    printStack();
}

void calculator::on_button_minus_clicked()
{
    //pega dois ultimos da fila e subtrai
    double a,b;
    a = stk->getLast()->Get();
    stk->removeNew();
    b = stk->getLast()->Get();
    stk->removeNew();

    ui->textEdit->setText(QString("%1").arg(a-b));
    //insere resultado na fila

    stk->insertNew(a-b);
    printStack();
}

void calculator::on_button_mult_clicked()
{
    //pega dois ultimos da fila e multiplica
    double a,b;
    a = stk->getLast()->Get();
    stk->removeNew();
    b = stk->getLast()->Get();
    stk->removeNew();

    ui->textEdit->setText(QString("%1").arg(a*b));
    //insere resultado na fila

    stk->insertNew(a*b);
    printStack();
}

void calculator::on_button_div_clicked()
{
    //pega dois ultimos da fila e divide
    double a,b;
    a = stk->getLast()->Get();
    stk->removeNew();
    b = stk->getLast()->Get();
    stk->removeNew();

    ui->textEdit->setText(QString("%1").arg(a/b));
    //insere resultado na fila

    stk->insertNew(a/b);
    printStack();
}

void calculator::on_button_rol_clicked()
{
    double a,b;
    a = stk->getLast()->Get();
    stk->removeNew();
    b = stk->getLast()->Get();
    stk->removeNew();

    stk->insertNew(a);
    stk->insertNew(b);
    printStack();
}

void calculator::on_button_enter_clicked()
{
    if (ui->lineEdit->text() != ""){
        int t = ui->lineEdit->text().toInt();

        stk->insertNew(t);

        ui->textEdit->append(QString("%1").arg(t));
    }

    ui->lineEdit->clear();
}
