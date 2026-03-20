#include <QApplication>
#include <QPushButton>
#include <QWindow>

#include <QFile>
#include <QMainWindow>
#include <QMessageBox>
#include <QtUiTools/QUiLoader>

import Libio;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QUiLoader loader;
    QFile     file("C:/Users/user/Downloads/untitled/main_window_design.ui"); //absolute path to file with ui
    auto      res = file.open(QFile::ReadOnly);
    if (not res) {
        QMessageBox(QMessageBox::Icon::Critical, "Error", "An error occurred during loading UI file").exec();
    }
    file.close();
    QWidget *main_window = dynamic_cast<QMainWindow *>(loader.load(&file));
    if (main_window) {
        main_window->show();
    }
    return QApplication::exec();
}
