  //
// Created by Kot on 19.07.2022.
//

#ifndef CALCULATOR_CALCMAINWINDOW_H
#define CALCULATOR_CALCMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <string>

  class CalcMainWindow : public QMainWindow
{
    Q_OBJECT

  public:
                //создадим три поля
      QLineEdit* lineEdit= nullptr;
      QLineEdit* lineEdit_2= nullptr;
      QLineEdit* lineEdit_3= nullptr;
    //объявляем конструктор(аргумент родительского виджета)
    //инициализируем базовый класс
    CalcMainWindow(QWidget* parent=nullptr):QMainWindow(parent)
    {
    }
public slots:
    void slotPlus() {
        float a = lineEdit->text().toFloat();
        float b = lineEdit_2->text().toFloat();
        lineEdit_3->setText(QString::number(a+b));
    };
    void slotMinus()
    {
        float a = lineEdit->text().toFloat();
        float b = lineEdit_2->text().toFloat();
        lineEdit_3->setText(QString::number(a-b));
    };
    void slotMultip()
    {
        float a = lineEdit->text().toFloat();
        float b = lineEdit_2->text().toFloat();
        lineEdit_3->setText(QString::number(a*b));
    };
    void slotDivision()
    {
        float a = lineEdit->text().toFloat();
        float b = lineEdit_2->text().toFloat();
        if(b==0){
            lineEdit_3->setText("ERROR");
        }
        else{
            lineEdit_3->setText(QString::number(a/b));
        }
    };
};
#endif //CALCULATOR_CALCMAINWINDOW_H
