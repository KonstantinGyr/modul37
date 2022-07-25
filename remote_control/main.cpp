#include <QApplication>
#include <QPushButton>
#include "./ui_remoteUi.h"
#include "remotemainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    RemoteMainWindow window( nullptr);
    Ui::MainWindow remoteControl;
    remoteControl.setupUi(&window);
    window.lineEdit = remoteControl.lineEdit;
    window.lineEdit_2 = remoteControl.lineEdit_2;
    window.resize(260, 680);
    window.show();
    return QApplication::exec();
}
