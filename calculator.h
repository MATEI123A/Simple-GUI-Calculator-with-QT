#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    int value=0,ok=0;
    QString form_value="";
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_pushButton_14_customContextMenuRequested(const QPoint &pos);

private:
    Ui::Calculator *ui;

private slots:
    void on_Button8_clicked();
    void on_Button1_clicked();
    void on_Button_clear_clicked();
    void on_Button0_clicked();
    void on_Button2_clicked();
    void on_Button3_clicked();
    void on_Button4_clicked();
    void on_Button5_clicked();
    void on_Button6_clicked();
    void on_Button7_clicked();
    void on_Button9_clicked();
    void on_Button_plus_clicked();
    void on_Button_minus_clicked();
    void on_Button_divide_clicked();
    void on_Button_multiple_clicked();
    void on_Button_egal_clicked();
};
#endif // CALCULATOR_H
