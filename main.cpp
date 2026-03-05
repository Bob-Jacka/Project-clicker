#include <QApplication>
#include <QPushButton>
#include <QWindow>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWindow     window;
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}
