#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_num6_clicked();


    void on_Delete_B_clicked();

    void on_num0_clicked();

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_total_clicked();

    void on_Recreation_clicked();

    void on_multiplication_clicked();
    void on_Division_clicked();

    void on_parantezbaz_clicked();

    void on_parantezbaste_clicked();

    void on_percent_clicked();

    void on_point_clicked();

    void on_pi_clicked();
    void last_char(char n);

    void on_equal_clicked();

private:
    Ui::MainWindow *ui;

    QString myString {""};

    void finishedString();

    QString Sdouble_1=NULL;
    QString Sdouble_2=NULL;
    double result =0.0;
    char op='\0';
    int i=0;
};
#endif // MAINWINDOW_H
