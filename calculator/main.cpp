#include <QApplication>
#include <QPushButton>
#include "./ui_calculatorUi.h"
#include "calcmainwindow.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //подключили хедер и помен€ем тип переменной window
    CalcMainWindow window( nullptr);//окно нашего приложени€
    Ui::MainWindow calculator;//создадим экземпл€р класса Ui, наш интерфейс
    calculator.setupUi(&window);//вызовем метод, передова€ адрес окна нашего приложени€
    //  присвоим три пол€ нашего калькул€тора пол€м нашего окна
    window.lineEdit = calculator.lineEdit;
    window.lineEdit_2 = calculator.lineEdit_2;
    window.lineEdit_3 = calculator.lineEdit_3;
    window.resize(640, 480);
    window.show();
    return QApplication::exec();
}
