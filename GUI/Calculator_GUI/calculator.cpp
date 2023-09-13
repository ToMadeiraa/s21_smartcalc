#include "calculator.h"
#include "ui_calculator.h"


#ifdef __cplusplus
extern "C" {
#endif
#include "../../Backend/s21_smartcalc.h"
#ifdef __cplusplus
}
#endif



//предыдущий результат
double previous_result = 0;
//счетчики скобок(условие, чтобы количество закрываемых скобок было <= количеству открываемых скобок)
int Open_brackets_count = 0;
int Close_brackets_count = 0;
//счетчик точки
int Point_count = 0;
//счетчик Х
int X_count = 0;
// массивы с координатами Y
int y_coord[2000001];


MainWindow::MainWindow(QWidget *parent):
      QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Подключаем кнопки

    //Подключаем цифры
    connect(ui->Button_1, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_2, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_3, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_4, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_5, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_6, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_7, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_8, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_9, SIGNAL(clicked()), this, SLOT(write_numbers()));
    connect(ui->Button_0, SIGNAL(clicked()), this, SLOT(write_numbers()));

    //Подключаем знаки и степень
    connect(ui->Button_Plus, SIGNAL(clicked()), this, SLOT(write_signs()));
    connect(ui->Button_Minus, SIGNAL(clicked()), this, SLOT(write_signs()));
    connect(ui->Button_Mul, SIGNAL(clicked()), this, SLOT(write_signs()));
    connect(ui->Button_Div, SIGNAL(clicked()), this, SLOT(write_signs()));
    connect(ui->Button_Pow, SIGNAL(clicked()), this, SLOT(write_signs()));
    connect(ui->Button_Mod, SIGNAL(clicked()), this, SLOT(write_signs()));

    //Подключаем скобки
    connect(ui->Button_Br_open, SIGNAL(clicked()), this, SLOT(write_bracket()));
    connect(ui->Button_Br_close, SIGNAL(clicked()), this, SLOT(write_bracket()));

    //Подключаем точку
    connect(ui->Button_Point, SIGNAL(clicked()), this, SLOT(write_point()));

    //Подключаем корень
    connect(ui->Button_Sqr, SIGNAL(clicked()), this, SLOT(write_sqrt()));

    //Подключаем тригонометрические и логарифмические функции
    connect(ui->Button_Log, SIGNAL(clicked()), this, SLOT(write_ln_trig()));
    connect(ui->Button_Ln, SIGNAL(clicked()), this, SLOT(write_ln_trig()));
    connect(ui->Button_Asin, SIGNAL(clicked()), this, SLOT(write_ln_trig()));
    connect(ui->Button_Sin, SIGNAL(clicked()), this, SLOT(write_ln_trig()));
    connect(ui->Button_Acos, SIGNAL(clicked()), this, SLOT(write_ln_trig()));
    connect(ui->Button_Cos, SIGNAL(clicked()), this, SLOT(write_ln_trig()));
    connect(ui->Button_Tg, SIGNAL(clicked()), this, SLOT(write_ln_trig()));
    connect(ui->Button_Atg, SIGNAL(clicked()), this, SLOT(write_ln_trig()));

    //Подключаем очистку
    connect(ui->Button_Backspace, SIGNAL(clicked()), this, SLOT(clear_one_letter()));
    connect(ui->Button_Clear, SIGNAL(clicked()), this, SLOT(clear_all()));

    //Подключаем Х
    connect(ui->Button_x, SIGNAL(clicked()), this, SLOT(write_x()));

    //Подключаем равно
    connect(ui->Button_Eq, SIGNAL(clicked()), this, SLOT(write_equal()));


    //КРЕДИТНЫЙ КАЛЬКУЛЯТОР
    connect(ui->Button_Count, SIGNAL(clicked()), this, SLOT(calc_credit()));

    //ДЕПОЗИТНЫЙ КАЛЬКУЛЯТОР
    connect(ui->Button_Add, SIGNAL(clicked()), this, SLOT(add_popolnenie()));
    connect(ui->Button_Take, SIGNAL(clicked()), this, SLOT(add_snyatie()));
    connect(ui->Button_Count_Dep, SIGNAL(clicked()), this, SLOT(calc_deposit()));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::write_numbers() {
    QPushButton *btn = (QPushButton *)sender();
    QString New_Label;
    if (ui->Result_Label->text().length() == 1 && ui->Result_Label->text().back() == '0') {
        New_Label = btn->text();
    } else if (ui->Result_Label->text().back() != ')') {
        New_Label = ui->Result_Label->text() + btn->text();
    }
    ui->Result_Label->setText(New_Label);
}


void MainWindow::write_signs() {
    QPushButton *btn = (QPushButton *)sender();
    QString Old_Label = ui->Result_Label->text();
    if (Old_Label.back() == '+' || Old_Label.back() == '-' || Old_Label.back() == '*' || Old_Label.back() == '/' || Old_Label.back() == '^') {
        Old_Label.chop(1);
        ui->Result_Label->setText(Old_Label+ btn->text());
    } else {
        Old_Label = ui->Result_Label->text() + btn->text();
        ui->Result_Label->setText(Old_Label);
    }
    Point_count = 0;
}


void MainWindow::write_bracket() {
    QPushButton *btn = (QPushButton *)sender();
    if (btn->text() == '(') {
        if (is_sign(ui->Result_Label->text())) {
        QString New_Label = ui->Result_Label->text() + btn->text();
        ui->Result_Label->setText(New_Label);
        Open_brackets_count++;
        }
    } else if (btn->text() == ')') {
        if (ui->Result_Label->text().back() == '(') {
            ;
        } else if (Close_brackets_count < Open_brackets_count) {
            QString New_Label = ui->Result_Label->text() + btn->text();
            ui->Result_Label->setText(New_Label);
            Close_brackets_count++;
        }
    }
}


void MainWindow::write_point() {
    QPushButton *btn = (QPushButton *)sender();
    if (Point_count == 0) {
        if (is_digit(ui->Result_Label->text())) {
            QString New_Label = ui->Result_Label->text() + btn->text();
            ui->Result_Label->setText(New_Label);
            Point_count = 1;
        }
    }
}


void MainWindow::write_sqrt() {
    QPushButton *btn = (QPushButton *)sender();
    QString Old_Label = ui->Result_Label->text();
    if (is_sign(Old_Label) || Old_Label.back() == '(' ) {
        QString New_Label = Old_Label + "sqrt(";
        ui->Result_Label->setText(New_Label);
        Open_brackets_count++;
    }
}


void MainWindow::write_ln_trig() {
    QPushButton *btn = (QPushButton *)sender();
    QString Old_Label = ui->Result_Label->text();
    if (is_sign(Old_Label) || Old_Label.back() == '(' ) {
        QString New_Label = ui->Result_Label->text() + btn->text();
        New_Label.chop(2);
        ui->Result_Label->setText(New_Label );
        Open_brackets_count++;
    }
}

void MainWindow::write_x() {
    QPushButton *btn = (QPushButton *)sender();
    X_count++;
    QString Old_Label = ui->Result_Label->text();
    if (Old_Label.length() == 1 && (Old_Label[0] == '0')) {
        ui->Result_Label->setText("x");
    } else {
        if (Old_Label.back() == '*' || Old_Label.back() == '/' || Old_Label.back() == '+' ||
        Old_Label.back() == '-' || Old_Label.back() == '^' || Old_Label.back() == '(' || 
        Old_Label.back() == 'd') {
            ui->Result_Label->setText(ui->Result_Label->text() + "x");
        }
    }
}


void MainWindow::clear_one_letter() {
    QString Old_Label = ui->Result_Label->text();
    if (Old_Label.length() > 1) {
        Old_Label.chop(1);
        ui->Result_Label->setText(Old_Label);
    } else {
        ui->Result_Label->setText("0");
    }
}

void MainWindow::clear_all() {
    ui->Result_Label->setText("0");
}


void MainWindow::write_equal() {
    QPushButton *btn = (QPushButton *)sender();
    ui->Prev_Result->setText(ui->Result_Label->text());
    QString str_tmp = ui->Result_Label->text();
    QByteArray arr = str_tmp.toLocal8Bit();
    char* input_raw = arr.data();
    double result = s21_smartcalc(input_raw, X_count, y_coord);
    QString res = QString::number(result);
    ui->Result_Label->setText(res);
    X_count = 0;

}



//sup functions
int is_digit(QString strng) {
    if     (strng.back() == '0' || strng.back() == '1' ||
            strng.back() == '2' || strng.back() == '3' ||
            strng.back() == '4' || strng.back() == '5' ||
            strng.back() == '6' || strng.back() == '7' ||
            strng.back() == '8' || strng.back() == '9') {
        return 1;
    } else {
        return 0;
    }
}

int is_sign(QString strng) {
    if     (strng.back() == '+' || strng.back() == '-' ||
            strng.back() == '/' || strng.back() == '*' ||
            strng.back() == '^')
    {
        return 1;
    } else {
        return 0;
    }
}

//КРЕДИТНЫЙ КАЛЬКУЛЯТОР
void MainWindow::calc_credit() {
    QPushButton *btn = (QPushButton *)sender();
    double Summa_Credita = ui->SummCredit->text().toDouble();
    int Srok_Credita = ui->SrokCredita->text().toInt();
    float Procentnaya_Stavka = ui->StavkaProcent->text().toInt();

    double percents_payment = 0;
    double *ptr_percents_payment = &percents_payment;

    double total_payment = 0;
    double *ptr_total_payment = &total_payment;

    double min_month_payment = 0;
    double *ptr_min = &min_month_payment;

    double max_month_payment = 0;
    double *ptr_max = &max_month_payment;

    if (ui->Let_Mesyacev->currentText() == "Лет") {
        Srok_Credita*=12;
    }
    if (ui->RButton_Annuitet->isChecked()) {
        Annuitet_Count(Summa_Credita, Procentnaya_Stavka, Srok_Credita, ptr_min, ptr_max, ptr_percents_payment, ptr_total_payment);
    } else {
        Different_Count(Summa_Credita, Procentnaya_Stavka, Srok_Credita, ptr_min, ptr_max, ptr_percents_payment, ptr_total_payment);
    }
    ui->Label_MounthPayMin->setText(QString::number(min_month_payment));
    ui->Label_MounthPayMax->setText(QString::number(max_month_payment));
    ui->Label_Percent->setText(QString::number(percents_payment));
    ui->Label_TotalPay->setText(QString::number(total_payment));
}


//ДЕПОЗИТНЫЙ КАЛЬКУЛЯТОР
void MainWindow::add_popolnenie() {
    QPushButton *btn = (QPushButton *)sender();
    ui->Table_Widget->insertRow(0);

    QTableWidgetItem *item_type = new QTableWidgetItem;
    QTableWidgetItem *item_date = new QTableWidgetItem;
    QTableWidgetItem *item_summ = new QTableWidgetItem;

    item_type->setText("Пополнение");
    item_type->setBackground(Qt::green);
    item_date->setText("01.01.2020");
    item_date->setBackground(Qt::green);
    item_summ->setText("0");
    item_summ->setBackground(Qt::green);

    ui->Table_Widget->setItem(0,0,item_type);

    ui->Table_Widget->setItem(0,1,item_date);
    ui->Table_Widget->setItem(0,2,item_summ);
}

void MainWindow::add_snyatie() {
    QPushButton *btn = (QPushButton *)sender();
    ui->Table_Widget->insertRow(0);

    QTableWidgetItem *item_type = new QTableWidgetItem;
    QTableWidgetItem *item_date = new QTableWidgetItem;
    QTableWidgetItem *item_summ = new QTableWidgetItem;

    item_type->setText("Снятие");
    item_type->setBackground(Qt::magenta);
    item_date->setText("01.01.2020");
    item_date->setBackground(Qt::magenta);
    item_summ->setText("0");
    item_summ->setBackground(Qt::magenta);

    ui->Table_Widget->setItem(0,0,item_type);
    ui->Table_Widget->setItem(0,1,item_date);
    ui->Table_Widget->setItem(0,2,item_summ);
}

void MainWindow::calc_deposit() {
    QPushButton *btn = (QPushButton *)sender();
    double Summa_Vklada = ui->Summ_Vklada->text().toDouble();

    int Srok_Vklada = ui->Srok_Vklada->text().toInt();
    QString Vklad_type = ui->ComboBox_LetMes->currentText();
    if (Vklad_type == "Лет") {
        Srok_Vklada *=365.25;
    } else if (Vklad_type == "Месяцев") {
        Srok_Vklada *=30.42;
    }

    int Nachalo_sroka = str_to_int(ui->dateEdit->text());


    float Proc_Stavka = ui->Proc_stavka->text().toFloat();
    float Nalog_Stavka = ui->Nalog_Stavka->text().toFloat();


    QString period_type = ui->ComboBox_Period->currentText();
    double dbl_period_type = 0;
    if (period_type == "Раз в день") {
        dbl_period_type = 1;
    } else if (period_type == "Раз в неделю") {
        dbl_period_type = 7;
    } else if (period_type == "Раз в месяц") {
        dbl_period_type = 30.42;
    } else if (period_type == "Раз в год") {
        dbl_period_type = 365.25;
    }

    int Cap = ui->ChBox_CapPerc->isChecked();

    double nach_perc = 0;
    double *ptr_nach_perc = &nach_perc;
    double nalog = 0;
    double *ptr_nalog = &nalog;
    double sum_k_koncu = 0;
    double *ptr_sum_k_koncu = &sum_k_koncu;

    std::map<int, double> mp_popolnenie;
    std::map<int, double> mp_snyatie;

    int row_count = ui->Table_Widget->rowCount();
    for (int i = 0; i < row_count; i++) {
        int date_in_days = str_to_int(ui->Table_Widget->item(i,1)->text());
        double sum = ui->Table_Widget->item(i,2)->text().toDouble();
        if (ui->Table_Widget->item(i,0)->text() == "Пополнение") {
            mp_popolnenie[date_in_days] = sum;
        } else {
            mp_snyatie[date_in_days] = sum;
        }
    }

    Dep_Count(Summa_Vklada, Srok_Vklada, Nachalo_sroka, Proc_Stavka, Nalog_Stavka, dbl_period_type,
              Cap, mp_popolnenie, mp_snyatie, ptr_nach_perc, ptr_nalog, ptr_sum_k_koncu);

    ui->Label_NachProc->setText(QString::number(nach_perc, 'g', 10));
    ui->Label_Nalog->setText(QString::number(nalog, 'g', 10));
    ui->Label_SummaVKonce->setText(QString::number(sum_k_koncu, 'g', 10));
}

int str_to_int(QString str) {
    QStringList strList = str.split(QRegularExpression("\\."));
    int result = strList[0].toInt() + (strList[1].toInt()-1)*30.42 + strList[2].toInt()*365.25;
    return result;
}
