#include "calculator.h"
#include "ui_calculator.h"
#include<QDebug>
#include <QCoreApplication>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    this->value=0;
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_pushButton_14_customContextMenuRequested(const QPoint &pos)
{
    QPushButton* numbers[10];

}

void Calculator::on_Button8_clicked()
{
    this->form_value+='8';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button1_clicked()
{
    this->form_value+='1';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button_clear_clicked()
{
    this->form_value.clear();
    ui->Display->setText(this->form_value);
    value=0;
}


void Calculator::on_Button0_clicked()
{
    this->form_value+='0';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button2_clicked()
{
    this->form_value+='2';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button3_clicked()
{
    this->form_value+='3';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button4_clicked()
{
    this->form_value+='4';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button5_clicked()
{
    this->form_value+='5';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button6_clicked()
{
    this->form_value+='6';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button7_clicked()
{
    this->form_value+='7';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button9_clicked()
{
    this->form_value+='9';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button_plus_clicked()
{
    this->form_value+='+';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button_minus_clicked()
{
    this->form_value+='-';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button_divide_clicked()
{
    this->form_value+='/';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button_multiple_clicked()
{
    this->form_value+='*';
    ui->Display->setText(this->form_value);
}


void Calculator::on_Button_egal_clicked()
{
    this->form_value+='=';
    ui->Display->setText(this->form_value);
    int i,j,calc=0;

    for(i=0;i<form_value.size();i++)
        if(form_value[i].isDigit())
            value=value*10+form_value[i].digitValue();
        else
            break;

    for(j=i;j<form_value.size();j++)
        if(form_value[j]=='+')
        {
            j++;

            while(form_value[j].isDigit())
            {
                calc=calc*10+form_value[j].digitValue();
                j++;
            }

            value+=calc;
            calc=0;
            j--;
        }
        else
            if(form_value[j]=='-')
            {
                j++;

                while(form_value[j].isDigit())
                {
                    calc=calc*10+form_value[j].digitValue();
                    j++;
                }

                value-=calc;
                calc=0;
                j--;
            }
        else
            if(form_value[j]=='*')
            {
                j++;

                while(form_value[j].isDigit())
                {
                    calc=calc*10+form_value[j].digitValue();
                    j++;
                }

                value*=calc;
                calc=0;
                j--;
            }
            else
                if(form_value[j]=='/')
                {
                    j++;

                    while(form_value[j].isDigit())
                    {
                        calc=calc*10+form_value[j].digitValue();
                        j++;
                    }

                    value/=calc;
                    calc=0;
                    j--;
                }


    form_value+=QString::number(value);
    ui->Display->setText(form_value);
    form_value.clear();
    value=0;
}

