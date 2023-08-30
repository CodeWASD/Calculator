#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    while(true)
//    {
//        int *d = new int[200000000];
//        int g = d[5];
//        //qDebug()<<"amir ali";

//        delete[] d;
//    }
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Delete_B_clicked()
{
    myString.remove(myString.length()-1,1);
    finishedString();
}
//number
//________________________________________________________________________________
void MainWindow::on_num0_clicked()
{
    //    ui->lbl_input->setText("0");
    myString.append('0');
    last_char('0');
    finishedString();
}
void MainWindow::on_num1_clicked()
{
    //  ui->lbl_input->setText("1");
    myString.append('1');
    last_char('1');
    finishedString();

}
void MainWindow::on_num2_clicked()
{
    // ui->lbl_input->setText("2");
    myString.append('2');
    last_char('2');
    finishedString();

}
void MainWindow::on_num3_clicked()
{
    //   ui->lbl_input->setText("3");
    myString.append('3');
    last_char('3');
    finishedString();

}
void MainWindow::on_num4_clicked()
{
    //  ui->lbl_input->setText("4");
    myString.append('4');
    last_char('4');
    finishedString();
}
void MainWindow::on_num5_clicked()
{
    //  ui->lbl_input->setText("5");
    myString.append('5');
    last_char('5');
    finishedString();
}
void MainWindow::on_num6_clicked()
{
    // ui->lbl_input->setText("6");
    myString.append('6');
    last_char('6');
    finishedString();
}
void MainWindow::on_num7_clicked()
{
    // ui->lbl_input->setText("7");
    myString.append('7');
    last_char('7');
    finishedString();
}
void MainWindow::on_num8_clicked()
{
    // ui->lbl_input->setText("8");
    myString.append('8');
    last_char('8');
    finishedString();
}
void MainWindow::on_num9_clicked()
{
    // ui->lbl_input->setText("9");
    myString.append('9');
    last_char('9');
    finishedString();
}
//___________________________________________________________________________________________
//operator
void MainWindow::on_total_clicked()
{
    // ui->lbl_input->setText("+");
    myString.append('+');
    last_char('+');
    finishedString();
}
void MainWindow::on_Recreation_clicked()
{
    // ui->lbl_input->setText("-");
    myString.append('-');
    last_char('-');
    finishedString();
}
void MainWindow::on_multiplication_clicked()
{
    // ui->lbl_input->setText("×");
    myString.append('x');
    last_char('x');
    finishedString();
}
void MainWindow::on_Division_clicked()
{
    // ui->lbl_input->setText("÷");
    myString.append('/');
    last_char('/');
    finishedString();
}
void MainWindow::on_parantezbaz_clicked()
{
    myString.append('(');
    last_char('(');
    finishedString();
}
void MainWindow::on_parantezbaste_clicked()
{
    myString.append(')');
    last_char(')');
    finishedString();
}
void MainWindow::on_percent_clicked()
{
    myString.append('%');
    last_char('%');
    finishedString();
}

void MainWindow::on_point_clicked()
{
    myString.append('.');
    last_char('.');
    finishedString();
}
void MainWindow::on_pi_clicked()
{
    myString.append("Π");
    finishedString();
}
void MainWindow::last_char(char n)
{
    if(n=='0' ||n =='1'||n =='2'|| n =='3'|| n =='4'|| n =='5'|| n =='6' || n =='7'|| n =='8'|| n=='9')
    {
        if(i == 1)
        {
            Sdouble_2.append(n);
        }
        else
        {
            Sdouble_1.append(n);
        }
    }else if (n=='+'){
        op='+';
        i=1; }

    else if (n=='-'){
        op='-';
        i=1;}
    else if (n=='x'){
        op='x';
        i=1;}
    else if (n=='/'){
        op='/';
        i=1;
    }
    //    if (i==1){
    //        Sdouble_2=Sdouble_1;
    //    }
    if (op=='+'){
        result=Sdouble_1.toDouble() + Sdouble_2.toDouble();
    }else if(op=='-'){
        result=Sdouble_1.toDouble() - Sdouble_2.toDouble();
    }else if(op=='x'){
        result=Sdouble_1.toDouble() * Sdouble_2.toDouble();
    }else if(op== '/'){
        result=Sdouble_1.toDouble() / Sdouble_2.toDouble();}

    //ui->lbl_input->setText(Sdouble_1+op+Sdouble_2);
}
//mod
//radikal
//x2
//______________________________________________________________________________________________
void MainWindow::finishedString()
{
    ui->lbl_input->setText(myString);
}
void MainWindow::on_equal_clicked()
{
    ui->lbl_input->setText(QString::number(result));
    Sdouble_1.clear();
    Sdouble_2.clear();
    op = '\0';
    result = 0;
    myString.clear();
    i = 0;

}

