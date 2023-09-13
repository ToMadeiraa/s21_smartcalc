#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <cmath>
#include <vector>
#include <map>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


private slots:
    void write_numbers();
    void write_signs();
    void write_bracket();
    void write_point();
    void write_sqrt();
    void write_ln_trig();
    void write_x();
    void clear_one_letter();
    void clear_all();
    void write_equal();

    //КРЕДИТНЫЙ КАЛЬКУЛЯТОР
    void calc_credit();

    //ДЕПОЗИТНЫЙ КАЛЬКУЛЯТОР
    void add_popolnenie();
    void add_snyatie();
    void calc_deposit();


};


//ОБЫЧНЫЙ КАЛЬКУЛЯТОР
double count_all(QString strng);
int is_digit(QString strng);
int is_sign(QString strng);

//КРЕДИТНЫЙ КАЛЬКУЛЯТОР
void Annuitet_Count(double summa, float stavka, int srok, double *month_min, double *month_max, double *pereplata, double *vsego);
void Different_Count(double summa, float stavka, int srok, double *month_min, double *month_max, double *pereplata, double *vsego);

//ДЕПОЗИТНЫЙ КАЛЬКУЛЯТОР
void Dep_Count(double sum_vklada, int srok_vklada, int nachalo,
               float proc_stavka, float nalog_stavka, double period,
               int capitalization, std::map<int, double> popolnenie,
               std::map<int, double> snyatie, double *nachislennie_proc,
               double *ptr_nalog, double *summa_k_koncu);
int str_to_int(QString str);


#endif // MAINWINDOW_H
