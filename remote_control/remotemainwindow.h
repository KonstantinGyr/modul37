//
// Created by Kot on 20.07.2022.
//

#ifndef REMOTE_CONTROL_REMOTEMAINWINDOW_H
#define REMOTE_CONTROL_REMOTEMAINWINDOW_H

#include <QMainWindow>

#include <QtWidgets/QLineEdit>

#endif //REMOTE_CONTROL_REMOTEMAINWINDOW_H

class RemoteMainWindow : public QMainWindow{
    Q_OBJECT
public:
    QLineEdit* lineEdit = nullptr;
    QLineEdit* lineEdit_2 = nullptr;
    RemoteMainWindow(QWidget* parent = nullptr): QMainWindow(parent) {}

public slots:
    void set0(){
        lineEdit_2->setText(lineEdit_2->text()+"0");
    };
    void set1(){
        lineEdit_2->setText("1");
    };
    void set2(){
        lineEdit_2->setText("2");
    };
    void set3(){
        lineEdit_2->setText("3");
    };
    void set4(){
        lineEdit_2->setText("4");
    };
    void set5(){
        lineEdit_2->setText("5");
    };
    void set6(){
        lineEdit_2->setText("6");
    };
    void set7(){
        lineEdit_2->setText("7");
    };
    void set8(){
        lineEdit_2->setText("8");
    };
    void set9(){
        lineEdit_2->setText("9");
    };
    void volUp(){
        int a = lineEdit->text().toInt();
        if(a == 100){
            lineEdit->setText("100");
        } else{
            lineEdit->setText(QString::number(a+10));
            }
    };
    void volDown(){
        int a = lineEdit->text().toInt();
        if(a == 0){
            lineEdit->setText("0");
        }
        else{
            lineEdit->setText(QString::number(a-10));
            }
    };
    void progUp(){
        lineEdit_2->setText(QString::number(lineEdit_2->text().toInt()+1));
    };
    void progDown(){
        int a = lineEdit_2->text().toInt();
        if(a == 0){
            lineEdit_2->setText("0");
        } else{
            lineEdit_2->setText(QString::number(a-1));
        }
    };
};
