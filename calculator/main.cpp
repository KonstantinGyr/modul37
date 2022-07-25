#include <QApplication>
#include <QPushButton>
#include "./ui_calculatorUi.h"
#include "calcmainwindow.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //���������� ����� � �������� ��� ���������� window
    CalcMainWindow window( nullptr);//���� ������ ����������
    Ui::MainWindow calculator;//�������� ��������� ������ Ui, ��� ���������
    calculator.setupUi(&window);//������� �����, ��������� ����� ���� ������ ����������
    //  �������� ��� ���� ������ ������������ ����� ������ ����
    window.lineEdit = calculator.lineEdit;
    window.lineEdit_2 = calculator.lineEdit_2;
    window.lineEdit_3 = calculator.lineEdit_3;
    window.resize(640, 480);
    window.show();
    return QApplication::exec();
}
