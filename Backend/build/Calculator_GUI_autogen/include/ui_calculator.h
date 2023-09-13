/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Calc;
    QLabel *Result_Label;
    QPushButton *Button_9;
    QPushButton *Button_Backspace;
    QPushButton *Button_Plus;
    QPushButton *Button_Reverse;
    QPushButton *Button_Mul;
    QPushButton *Button_Div;
    QPushButton *Button_8;
    QPushButton *Button_7;
    QPushButton *Button_Point;
    QPushButton *Button_2;
    QPushButton *Button_5;
    QPushButton *Button_Eq;
    QPushButton *Button_Minus;
    QPushButton *Button_4;
    QPushButton *Button_3;
    QPushButton *Button_6;
    QPushButton *Button_0;
    QPushButton *Button_1;
    QPushButton *Button_Clear;
    QPushButton *Button_Pow;
    QPushButton *Button_Mod;
    QPushButton *Button_Log;
    QPushButton *Button_Br_close;
    QPushButton *Button_Sqr;
    QPushButton *Button_Sin;
    QPushButton *Button_Cos;
    QPushButton *Button_Tg;
    QPushButton *Button_Acos;
    QPushButton *Button_Atg;
    QPushButton *Button_Asin;
    QPushButton *Button_Ln;
    QPushButton *Button_Br_open;
    QLabel *Prev_Result;
    QFrame *line_on_label;
    QPushButton *Button_x;
    QWidget *Cred;
    QLineEdit *SummCredit;
    QLabel *Text4;
    QLabel *Text5;
    QLineEdit *SrokCredita;
    QComboBox *Let_Mesyacev;
    QLabel *Text6;
    QLineEdit *StavkaProcent;
    QLabel *Text7;
    QRadioButton *RButton_Annuitet;
    QRadioButton *RButton_Different;
    QPushButton *Button_Count;
    QFrame *Line_Hor;
    QLabel *Text8;
    QLabel *Text9;
    QLabel *Text1;
    QLabel *Text2;
    QLabel *Label_MounthPayMin;
    QLabel *Label_Percent;
    QLabel *Label_TotalPay;
    QLabel *Text3;
    QLabel *Text13;
    QLabel *Label_MounthPayMax;
    QLabel *Text14;
    QLabel *Text10;
    QLabel *Text11;
    QLabel *Text12;
    QFrame *Line_Vert;
    QWidget *Dep;
    QLabel *Text1_2;
    QLabel *Text3_2;
    QLineEdit *Summ_Vklada;
    QLabel *Text2_5;
    QComboBox *ComboBox_LetMes;
    QLineEdit *Srok_Vklada;
    QLabel *Text5_2;
    QLineEdit *Proc_stavka;
    QLabel *Text6_2;
    QLabel *Text7_2;
    QLineEdit *Nalog_Stavka;
    QLabel *Text8_2;
    QLabel *Text9_2;
    QComboBox *ComboBox_Period;
    QCheckBox *ChBox_CapPerc;
    QLabel *Text2_8;
    QTableWidget *Table_Widget;
    QPushButton *Button_Add;
    QPushButton *Button_Take;
    QPushButton *Button_Count_Dep;
    QFrame *Line_vert;
    QLabel *Text5_7;
    QLabel *Label_NachProc;
    QLabel *Text5_8;
    QLabel *Text5_9;
    QLabel *Label_Nalog;
    QLabel *Label_SummaVKonce;
    QLabel *Text2_9;
    QLabel *Text2_10;
    QLabel *Text2_11;
    QLabel *Text2_6;
    QDateEdit *dateEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(552, 541);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 14, 531, 471));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
""));
        tabWidget->setTabShape(QTabWidget::Rounded);
        Calc = new QWidget();
        Calc->setObjectName(QString::fromUtf8("Calc"));
        Calc->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        Result_Label = new QLabel(Calc);
        Result_Label->setObjectName(QString::fromUtf8("Result_Label"));
        Result_Label->setGeometry(QRect(13, 19, 431, 61));
        Result_Label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVBottom | AlignRight';\n"
"	border : 1px solid gray;\n"
"	border-color: rgb(12, 12, 12);\n"
"}\n"
"\n"
"background-color : white;"));
        Result_Label->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        Result_Label->setMargin(10);
        Button_9 = new QPushButton(Calc);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(323, 151, 61, 61));
        Button_9->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Backspace = new QPushButton(Calc);
        Button_Backspace->setObjectName(QString::fromUtf8("Button_Backspace"));
        Button_Backspace->setGeometry(QRect(261, 88, 61, 61));
        Button_Backspace->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);"));
        Button_Plus = new QPushButton(Calc);
        Button_Plus->setObjectName(QString::fromUtf8("Button_Plus"));
        Button_Plus->setGeometry(QRect(386, 277, 61, 61));
        Button_Plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"}"));
        Button_Reverse = new QPushButton(Calc);
        Button_Reverse->setObjectName(QString::fromUtf8("Button_Reverse"));
        Button_Reverse->setGeometry(QRect(198, 88, 61, 61));
        Button_Reverse->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);"));
        Button_Mul = new QPushButton(Calc);
        Button_Mul->setObjectName(QString::fromUtf8("Button_Mul"));
        Button_Mul->setGeometry(QRect(386, 151, 61, 61));
        Button_Mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"}"));
        Button_Div = new QPushButton(Calc);
        Button_Div->setObjectName(QString::fromUtf8("Button_Div"));
        Button_Div->setGeometry(QRect(386, 88, 61, 61));
        Button_Div->setTabletTracking(false);
        Button_Div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"}"));
        Button_8 = new QPushButton(Calc);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(261, 151, 61, 61));
        Button_8->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_7 = new QPushButton(Calc);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(198, 151, 61, 61));
        Button_7->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Point = new QPushButton(Calc);
        Button_Point->setObjectName(QString::fromUtf8("Button_Point"));
        Button_Point->setGeometry(QRect(322, 340, 61, 61));
        Button_Point->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);"));
        Button_2 = new QPushButton(Calc);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(260, 277, 61, 61));
        Button_2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_5 = new QPushButton(Calc);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(260, 214, 61, 61));
        Button_5->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Eq = new QPushButton(Calc);
        Button_Eq->setObjectName(QString::fromUtf8("Button_Eq"));
        Button_Eq->setGeometry(QRect(386, 340, 61, 61));
        Button_Eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"}"));
        Button_Minus = new QPushButton(Calc);
        Button_Minus->setObjectName(QString::fromUtf8("Button_Minus"));
        Button_Minus->setGeometry(QRect(386, 214, 61, 61));
        Button_Minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"}"));
        Button_4 = new QPushButton(Calc);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(198, 214, 61, 61));
        Button_4->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_3 = new QPushButton(Calc);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(323, 277, 61, 61));
        Button_3->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_6 = new QPushButton(Calc);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(323, 214, 61, 61));
        Button_6->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_0 = new QPushButton(Calc);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(260, 340, 61, 61));
        Button_0->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_1 = new QPushButton(Calc);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(198, 277, 61, 61));
        Button_1->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Clear = new QPushButton(Calc);
        Button_Clear->setObjectName(QString::fromUtf8("Button_Clear"));
        Button_Clear->setGeometry(QRect(323, 88, 61, 61));
        Button_Clear->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);"));
        Button_Pow = new QPushButton(Calc);
        Button_Pow->setObjectName(QString::fromUtf8("Button_Pow"));
        Button_Pow->setGeometry(QRect(135, 277, 61, 61));
        Button_Pow->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Mod = new QPushButton(Calc);
        Button_Mod->setObjectName(QString::fromUtf8("Button_Mod"));
        Button_Mod->setGeometry(QRect(9, 88, 187, 61));
        Button_Mod->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Log = new QPushButton(Calc);
        Button_Log->setObjectName(QString::fromUtf8("Button_Log"));
        Button_Log->setGeometry(QRect(72, 151, 61, 61));
        Button_Log->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Br_close = new QPushButton(Calc);
        Button_Br_close->setObjectName(QString::fromUtf8("Button_Br_close"));
        Button_Br_close->setGeometry(QRect(135, 214, 61, 61));
        Button_Br_close->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Sqr = new QPushButton(Calc);
        Button_Sqr->setObjectName(QString::fromUtf8("Button_Sqr"));
        Button_Sqr->setGeometry(QRect(135, 340, 61, 61));
        Button_Sqr->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Sin = new QPushButton(Calc);
        Button_Sin->setObjectName(QString::fromUtf8("Button_Sin"));
        Button_Sin->setGeometry(QRect(72, 277, 61, 61));
        Button_Sin->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Cos = new QPushButton(Calc);
        Button_Cos->setObjectName(QString::fromUtf8("Button_Cos"));
        Button_Cos->setGeometry(QRect(72, 214, 61, 61));
        Button_Cos->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Tg = new QPushButton(Calc);
        Button_Tg->setObjectName(QString::fromUtf8("Button_Tg"));
        Button_Tg->setGeometry(QRect(72, 340, 61, 61));
        Button_Tg->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Acos = new QPushButton(Calc);
        Button_Acos->setObjectName(QString::fromUtf8("Button_Acos"));
        Button_Acos->setGeometry(QRect(9, 214, 61, 61));
        Button_Acos->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Atg = new QPushButton(Calc);
        Button_Atg->setObjectName(QString::fromUtf8("Button_Atg"));
        Button_Atg->setGeometry(QRect(9, 340, 61, 61));
        Button_Atg->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Asin = new QPushButton(Calc);
        Button_Asin->setObjectName(QString::fromUtf8("Button_Asin"));
        Button_Asin->setGeometry(QRect(9, 277, 61, 61));
        Button_Asin->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Ln = new QPushButton(Calc);
        Button_Ln->setObjectName(QString::fromUtf8("Button_Ln"));
        Button_Ln->setGeometry(QRect(9, 151, 61, 61));
        Button_Ln->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Button_Br_open = new QPushButton(Calc);
        Button_Br_open->setObjectName(QString::fromUtf8("Button_Br_open"));
        Button_Br_open->setGeometry(QRect(135, 151, 61, 61));
        Button_Br_open->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        Prev_Result = new QLabel(Calc);
        Prev_Result->setObjectName(QString::fromUtf8("Prev_Result"));
        Prev_Result->setGeometry(QRect(11, 21, 421, 21));
        Prev_Result->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: rgb(91, 91, 91);"));
        Prev_Result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_on_label = new QFrame(Calc);
        line_on_label->setObjectName(QString::fromUtf8("line_on_label"));
        line_on_label->setGeometry(QRect(23, 37, 411, 20));
        line_on_label->setFrameShape(QFrame::HLine);
        line_on_label->setFrameShadow(QFrame::Sunken);
        Button_x = new QPushButton(Calc);
        Button_x->setObjectName(QString::fromUtf8("Button_x"));
        Button_x->setGeometry(QRect(198, 340, 61, 61));
        Button_x->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        tabWidget->addTab(Calc, QString());
        Cred = new QWidget();
        Cred->setObjectName(QString::fromUtf8("Cred"));
        Cred->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        SummCredit = new QLineEdit(Cred);
        SummCredit->setObjectName(QString::fromUtf8("SummCredit"));
        SummCredit->setGeometry(QRect(163, 25, 321, 22));
        SummCredit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Text4 = new QLabel(Cred);
        Text4->setObjectName(QString::fromUtf8("Text4"));
        Text4->setGeometry(QRect(10, 24, 121, 21));
        Text5 = new QLabel(Cred);
        Text5->setObjectName(QString::fromUtf8("Text5"));
        Text5->setGeometry(QRect(10, 62, 211, 31));
        SrokCredita = new QLineEdit(Cred);
        SrokCredita->setObjectName(QString::fromUtf8("SrokCredita"));
        SrokCredita->setGeometry(QRect(163, 67, 250, 22));
        SrokCredita->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Let_Mesyacev = new QComboBox(Cred);
        Let_Mesyacev->addItem(QString());
        Let_Mesyacev->addItem(QString());
        Let_Mesyacev->setObjectName(QString::fromUtf8("Let_Mesyacev"));
        Let_Mesyacev->setGeometry(QRect(420, 67, 61, 22));
        Text6 = new QLabel(Cred);
        Text6->setObjectName(QString::fromUtf8("Text6"));
        Text6->setGeometry(QRect(10, 109, 181, 21));
        StavkaProcent = new QLineEdit(Cred);
        StavkaProcent->setObjectName(QString::fromUtf8("StavkaProcent"));
        StavkaProcent->setGeometry(QRect(163, 110, 320, 22));
        StavkaProcent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Text7 = new QLabel(Cred);
        Text7->setObjectName(QString::fromUtf8("Text7"));
        Text7->setGeometry(QRect(10, 153, 211, 21));
        RButton_Annuitet = new QRadioButton(Cred);
        RButton_Annuitet->setObjectName(QString::fromUtf8("RButton_Annuitet"));
        RButton_Annuitet->setGeometry(QRect(220, 155, 191, 20));
        RButton_Annuitet->setChecked(true);
        RButton_Different = new QRadioButton(Cred);
        RButton_Different->setObjectName(QString::fromUtf8("RButton_Different"));
        RButton_Different->setGeometry(QRect(338, 155, 231, 20));
        Button_Count = new QPushButton(Cred);
        Button_Count->setObjectName(QString::fromUtf8("Button_Count"));
        Button_Count->setGeometry(QRect(10, 191, 470, 51));
        Button_Count->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 18pt \"Segoe UI\";"));
        Line_Hor = new QFrame(Cred);
        Line_Hor->setObjectName(QString::fromUtf8("Line_Hor"));
        Line_Hor->setGeometry(QRect(10, 248, 431, 16));
        Line_Hor->setFrameShape(QFrame::HLine);
        Line_Hor->setFrameShadow(QFrame::Sunken);
        Text8 = new QLabel(Cred);
        Text8->setObjectName(QString::fromUtf8("Text8"));
        Text8->setGeometry(QRect(10, 285, 211, 21));
        Text9 = new QLabel(Cred);
        Text9->setObjectName(QString::fromUtf8("Text9"));
        Text9->setGeometry(QRect(10, 331, 211, 21));
        Text1 = new QLabel(Cred);
        Text1->setObjectName(QString::fromUtf8("Text1"));
        Text1->setGeometry(QRect(10, 374, 211, 21));
        Text2 = new QLabel(Cred);
        Text2->setObjectName(QString::fromUtf8("Text2"));
        Text2->setGeometry(QRect(500, 28, 16, 16));
        Label_MounthPayMin = new QLabel(Cred);
        Label_MounthPayMin->setObjectName(QString::fromUtf8("Label_MounthPayMin"));
        Label_MounthPayMin->setGeometry(QRect(260, 278, 90, 36));
        Label_MounthPayMin->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border : 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Label_MounthPayMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Label_MounthPayMin->setMargin(10);
        Label_Percent = new QLabel(Cred);
        Label_Percent->setObjectName(QString::fromUtf8("Label_Percent"));
        Label_Percent->setGeometry(QRect(230, 326, 261, 37));
        Label_Percent->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border : 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Label_Percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Label_Percent->setMargin(10);
        Label_TotalPay = new QLabel(Cred);
        Label_TotalPay->setObjectName(QString::fromUtf8("Label_TotalPay"));
        Label_TotalPay->setGeometry(QRect(230, 370, 261, 36));
        Label_TotalPay->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border : 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Label_TotalPay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Label_TotalPay->setMargin(10);
        Text3 = new QLabel(Cred);
        Text3->setObjectName(QString::fromUtf8("Text3"));
        Text3->setGeometry(QRect(500, 113, 16, 16));
        Text13 = new QLabel(Cred);
        Text13->setObjectName(QString::fromUtf8("Text13"));
        Text13->setGeometry(QRect(230, 288, 49, 16));
        Label_MounthPayMax = new QLabel(Cred);
        Label_MounthPayMax->setObjectName(QString::fromUtf8("Label_MounthPayMax"));
        Label_MounthPayMax->setGeometry(QRect(400, 278, 90, 36));
        Label_MounthPayMax->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border : 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Label_MounthPayMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Label_MounthPayMax->setMargin(10);
        Text14 = new QLabel(Cred);
        Text14->setObjectName(QString::fromUtf8("Text14"));
        Text14->setGeometry(QRect(364, 288, 49, 16));
        Text10 = new QLabel(Cred);
        Text10->setObjectName(QString::fromUtf8("Text10"));
        Text10->setGeometry(QRect(499, 289, 16, 16));
        Text11 = new QLabel(Cred);
        Text11->setObjectName(QString::fromUtf8("Text11"));
        Text11->setGeometry(QRect(499, 336, 16, 16));
        Text12 = new QLabel(Cred);
        Text12->setObjectName(QString::fromUtf8("Text12"));
        Text12->setGeometry(QRect(499, 380, 16, 16));
        Line_Vert = new QFrame(Cred);
        Line_Vert->setObjectName(QString::fromUtf8("Line_Vert"));
        Line_Vert->setGeometry(QRect(190, 267, 20, 141));
        Line_Vert->setFrameShape(QFrame::VLine);
        Line_Vert->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(Cred, QString());
        Dep = new QWidget();
        Dep->setObjectName(QString::fromUtf8("Dep"));
        Text1_2 = new QLabel(Dep);
        Text1_2->setObjectName(QString::fromUtf8("Text1_2"));
        Text1_2->setGeometry(QRect(19, 9, 121, 21));
        Text3_2 = new QLabel(Dep);
        Text3_2->setObjectName(QString::fromUtf8("Text3_2"));
        Text3_2->setGeometry(QRect(510, 13, 16, 16));
        Summ_Vklada = new QLineEdit(Dep);
        Summ_Vklada->setObjectName(QString::fromUtf8("Summ_Vklada"));
        Summ_Vklada->setGeometry(QRect(160, 10, 341, 22));
        Summ_Vklada->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Text2_5 = new QLabel(Dep);
        Text2_5->setObjectName(QString::fromUtf8("Text2_5"));
        Text2_5->setGeometry(QRect(19, 31, 211, 31));
        ComboBox_LetMes = new QComboBox(Dep);
        ComboBox_LetMes->addItem(QString());
        ComboBox_LetMes->addItem(QString());
        ComboBox_LetMes->addItem(QString());
        ComboBox_LetMes->setObjectName(QString::fromUtf8("ComboBox_LetMes"));
        ComboBox_LetMes->setGeometry(QRect(420, 36, 81, 22));
        Srok_Vklada = new QLineEdit(Dep);
        Srok_Vklada->setObjectName(QString::fromUtf8("Srok_Vklada"));
        Srok_Vklada->setGeometry(QRect(160, 36, 251, 22));
        Srok_Vklada->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Text5_2 = new QLabel(Dep);
        Text5_2->setObjectName(QString::fromUtf8("Text5_2"));
        Text5_2->setGeometry(QRect(19, 84, 211, 31));
        Proc_stavka = new QLineEdit(Dep);
        Proc_stavka->setObjectName(QString::fromUtf8("Proc_stavka"));
        Proc_stavka->setGeometry(QRect(160, 89, 271, 22));
        Proc_stavka->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Text6_2 = new QLabel(Dep);
        Text6_2->setObjectName(QString::fromUtf8("Text6_2"));
        Text6_2->setGeometry(QRect(440, 92, 101, 16));
        Text7_2 = new QLabel(Dep);
        Text7_2->setObjectName(QString::fromUtf8("Text7_2"));
        Text7_2->setGeometry(QRect(19, 110, 211, 31));
        Nalog_Stavka = new QLineEdit(Dep);
        Nalog_Stavka->setObjectName(QString::fromUtf8("Nalog_Stavka"));
        Nalog_Stavka->setGeometry(QRect(160, 115, 271, 22));
        Nalog_Stavka->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Text8_2 = new QLabel(Dep);
        Text8_2->setObjectName(QString::fromUtf8("Text8_2"));
        Text8_2->setGeometry(QRect(440, 118, 101, 16));
        Text9_2 = new QLabel(Dep);
        Text9_2->setObjectName(QString::fromUtf8("Text9_2"));
        Text9_2->setGeometry(QRect(19, 136, 211, 31));
        ComboBox_Period = new QComboBox(Dep);
        ComboBox_Period->addItem(QString());
        ComboBox_Period->addItem(QString());
        ComboBox_Period->addItem(QString());
        ComboBox_Period->addItem(QString());
        ComboBox_Period->setObjectName(QString::fromUtf8("ComboBox_Period"));
        ComboBox_Period->setGeometry(QRect(195, 141, 311, 22));
        ChBox_CapPerc = new QCheckBox(Dep);
        ChBox_CapPerc->setObjectName(QString::fromUtf8("ChBox_CapPerc"));
        ChBox_CapPerc->setGeometry(QRect(20, 167, 401, 20));
        Text2_8 = new QLabel(Dep);
        Text2_8->setObjectName(QString::fromUtf8("Text2_8"));
        Text2_8->setGeometry(QRect(230, 166, 21, 21));
        Text2_8->setStyleSheet(QString::fromUtf8("color: rgb(80, 80, 255);\n"
"\n"
"font: 11pt \"Segoe UI\";\n"
"text-decoration: underline;"));
        Table_Widget = new QTableWidget(Dep);
        if (Table_Widget->columnCount() < 3)
            Table_Widget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Table_Widget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Table_Widget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Table_Widget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        Table_Widget->setObjectName(QString::fromUtf8("Table_Widget"));
        Table_Widget->setGeometry(QRect(20, 224, 481, 121));
        Table_Widget->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
""));
        Table_Widget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Table_Widget->setDragEnabled(false);
        Table_Widget->setAlternatingRowColors(false);
        Table_Widget->setGridStyle(Qt::SolidLine);
        Table_Widget->setSortingEnabled(false);
        Table_Widget->setWordWrap(true);
        Table_Widget->setColumnCount(3);
        Table_Widget->horizontalHeader()->setCascadingSectionResizes(true);
        Table_Widget->horizontalHeader()->setDefaultSectionSize(120);
        Table_Widget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Table_Widget->horizontalHeader()->setStretchLastSection(false);
        Table_Widget->verticalHeader()->setDefaultSectionSize(30);
        Button_Add = new QPushButton(Dep);
        Button_Add->setObjectName(QString::fromUtf8("Button_Add"));
        Button_Add->setGeometry(QRect(19, 192, 241, 21));
        Button_Add->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);"));
        Button_Take = new QPushButton(Dep);
        Button_Take->setObjectName(QString::fromUtf8("Button_Take"));
        Button_Take->setGeometry(QRect(270, 192, 231, 21));
        Button_Take->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 116, 118);"));
        Button_Count_Dep = new QPushButton(Dep);
        Button_Count_Dep->setObjectName(QString::fromUtf8("Button_Count_Dep"));
        Button_Count_Dep->setGeometry(QRect(20, 350, 121, 71));
        Button_Count_Dep->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(98, 106, 255);"));
        Line_vert = new QFrame(Dep);
        Line_vert->setObjectName(QString::fromUtf8("Line_vert"));
        Line_vert->setGeometry(QRect(140, 352, 20, 71));
        Line_vert->setFrameShape(QFrame::VLine);
        Line_vert->setFrameShadow(QFrame::Sunken);
        Text5_7 = new QLabel(Dep);
        Text5_7->setObjectName(QString::fromUtf8("Text5_7"));
        Text5_7->setGeometry(QRect(158, 348, 211, 31));
        Label_NachProc = new QLabel(Dep);
        Label_NachProc->setObjectName(QString::fromUtf8("Label_NachProc"));
        Label_NachProc->setGeometry(QRect(390, 353, 111, 21));
        Label_NachProc->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border : 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Label_NachProc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Label_NachProc->setMargin(0);
        Text5_8 = new QLabel(Dep);
        Text5_8->setObjectName(QString::fromUtf8("Text5_8"));
        Text5_8->setGeometry(QRect(158, 372, 211, 31));
        Text5_9 = new QLabel(Dep);
        Text5_9->setObjectName(QString::fromUtf8("Text5_9"));
        Text5_9->setGeometry(QRect(158, 395, 211, 31));
        Label_Nalog = new QLabel(Dep);
        Label_Nalog->setObjectName(QString::fromUtf8("Label_Nalog"));
        Label_Nalog->setGeometry(QRect(390, 376, 111, 21));
        Label_Nalog->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border : 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Label_Nalog->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Label_Nalog->setMargin(0);
        Label_SummaVKonce = new QLabel(Dep);
        Label_SummaVKonce->setObjectName(QString::fromUtf8("Label_SummaVKonce"));
        Label_SummaVKonce->setGeometry(QRect(390, 399, 111, 21));
        Label_SummaVKonce->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border : 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Label_SummaVKonce->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Label_SummaVKonce->setMargin(0);
        Text2_9 = new QLabel(Dep);
        Text2_9->setObjectName(QString::fromUtf8("Text2_9"));
        Text2_9->setGeometry(QRect(510, 356, 16, 16));
        Text2_10 = new QLabel(Dep);
        Text2_10->setObjectName(QString::fromUtf8("Text2_10"));
        Text2_10->setGeometry(QRect(510, 378, 16, 16));
        Text2_11 = new QLabel(Dep);
        Text2_11->setObjectName(QString::fromUtf8("Text2_11"));
        Text2_11->setGeometry(QRect(510, 402, 16, 16));
        Text2_6 = new QLabel(Dep);
        Text2_6->setObjectName(QString::fromUtf8("Text2_6"));
        Text2_6->setGeometry(QRect(19, 57, 211, 31));
        dateEdit = new QDateEdit(Dep);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(160, 62, 341, 22));
        dateEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(Dep, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Result_Label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_Backspace->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        Button_Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(tooltip)
        Button_Reverse->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\241\321\202\320\265\321\200\320\265\321\202\321\214</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Button_Reverse->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Button_Mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Button_Div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_Point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_Eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button_Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_Clear->setText(QCoreApplication::translate("MainWindow", "\320\241", nullptr));
        Button_Pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        Button_Mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        Button_Log->setText(QCoreApplication::translate("MainWindow", "log(x)", nullptr));
        Button_Br_close->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        Button_Sqr->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        Button_Sin->setText(QCoreApplication::translate("MainWindow", "sin(x)", nullptr));
        Button_Cos->setText(QCoreApplication::translate("MainWindow", "cos(x)", nullptr));
        Button_Tg->setText(QCoreApplication::translate("MainWindow", "tg(x)", nullptr));
        Button_Acos->setText(QCoreApplication::translate("MainWindow", "acos(x)", nullptr));
        Button_Atg->setText(QCoreApplication::translate("MainWindow", "atg(x)", nullptr));
        Button_Asin->setText(QCoreApplication::translate("MainWindow", "asin(x)", nullptr));
        Button_Ln->setText(QCoreApplication::translate("MainWindow", "ln(x)", nullptr));
        Button_Br_open->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        Prev_Result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Calc), QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        Text4->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        Text5->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        Let_Mesyacev->setItemText(0, QCoreApplication::translate("MainWindow", "\320\233\320\265\321\202", nullptr));
        Let_Mesyacev->setItemText(1, QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        Text6->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        Text7->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        RButton_Annuitet->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        RButton_Different->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        Button_Count->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        Text8->setText(QCoreApplication::translate("MainWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        Text9->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        Text1->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\273\320\263 + \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        Text2->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        Label_MounthPayMin->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Label_Percent->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Label_TotalPay->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Text3->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        Text13->setText(QCoreApplication::translate("MainWindow", "Min:", nullptr));
        Label_MounthPayMax->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Text14->setText(QCoreApplication::translate("MainWindow", "Max:", nullptr));
        Text10->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        Text11->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        Text12->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Cred), QCoreApplication::translate("MainWindow", " \320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 ", nullptr));
        Text1_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        Text3_2->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        Text2_5->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        ComboBox_LetMes->setItemText(0, QCoreApplication::translate("MainWindow", "\320\233\320\265\321\202", nullptr));
        ComboBox_LetMes->setItemText(1, QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        ComboBox_LetMes->setItemText(2, QCoreApplication::translate("MainWindow", "\320\224\320\275\320\265\320\271", nullptr));

        Text5_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        Text6_2->setText(QCoreApplication::translate("MainWindow", "% \320\263\320\276\320\264\320\276\320\262\321\213\321\205", nullptr));
        Text7_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        Nalog_Stavka->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
        Text8_2->setText(QCoreApplication::translate("MainWindow", "% \320\263\320\276\320\264\320\276\320\262\321\213\321\205", nullptr));
        Text9_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        ComboBox_Period->setItemText(0, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267 \320\262 \320\264\320\265\320\275\321\214", nullptr));
        ComboBox_Period->setItemText(1, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267 \320\262 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        ComboBox_Period->setItemText(2, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        ComboBox_Period->setItemText(3, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        ChBox_CapPerc->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
#if QT_CONFIG(tooltip)
        Text2_8->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration:none;\">\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 - \321\201\320\262\320\276\320\271\321\201\321\202\320\262\320\276 \320\262\320\272\320\273\320\260\320\264\320\260, \320\277\321\200\320\270 \320\272\320\276\321\202\320\276\321\200\320\276\320\274 \320\275\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213 \320\275\320\265 \320\276\321\202\320\264\320\260\321\216\321\202\321\201\321\217 \320\275\320\260 \321\200\321\203\320\272\320\270 \320\264\320\265\321\200\320\266\320\260\321\202\320\265\320\273\321\216, \320\260 \320\277\321\200\320\270\320\261\320\260\320\262\320\273\321\217\321\216\321\202\321\201\321\217 \320\272 \320\262\320\272\320\273\320\260\320\264\321\203. \320\242\320\260\320\272\320\270\320\274 \320\276\320\261\321\200\320\260\320\267\320\276\320\274 \321\201\321\203\320\274\320\274\320\260"
                        " \320\262\320\272\320\273\320\260\320\264\320\260 \321\200\320\260\321\201\321\202\320\265\321\202 \321\201 \320\272\320\260\320\266\320\264\320\276\320\271 \320\262\321\213\320\277\320\273\320\260\321\202\320\276\320\271 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Text2_8->setText(QCoreApplication::translate("MainWindow", "(?)", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Table_Widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "   \320\242\320\270\320\277 \320\277\320\273\320\260\321\202\320\265\320\266\320\260   ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Table_Widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Table_Widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260, \321\200\321\203\320\261", nullptr));
        Button_Add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265", nullptr));
        Button_Take->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\275\321\217\321\202\320\270\320\265", nullptr));
        Button_Count_Dep->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        Text5_7->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213:", nullptr));
        Label_NachProc->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Text5_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\276\320\263:", nullptr));
        Text5_9->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260:", nullptr));
        Label_Nalog->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Label_SummaVKonce->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Text2_9->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        Text2_10->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        Text2_11->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        Text2_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\201\321\200\320\276\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Dep), QCoreApplication::translate("MainWindow", " \320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
