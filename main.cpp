#include <QApplication>
#include <QWindow>
#include <QUiLoader>
#include <QFile>
#include <QMainWindow>

#define DYNAMIC //comment or uncomment this line for dynamic ui loading

import Libio;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

#ifdef DYNAMIC
    QUiLoader loader;
    QString file_path;
    file_path.append(libio::file::get_current_dir_name("main_window_design.ui"));

    QFile file(file_path);

    auto res = file.open(QFile::ReadOnly);
    if (res) {
        auto main_window = dynamic_cast<QMainWindow *>(loader.load(&file));
        file.close();
        main_window->show();
    } else {
        //
    }

#else
    auto window = new Ui::MainWindow();
    window.show();
#endif // DYNAMIC
    return QApplication::exec();
}
