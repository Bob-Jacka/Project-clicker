#include <QApplication>
#include <QWindow>
#include <QUiLoader>
#include <QFile>
#include <QMainWindow>
#include "core/entities/declaration/Game_controller.hpp"

#define DYNAMIC //comment or uncomment this line for dynamic ui loading

import Libio;
#include <QPushButton>

QT_BEGIN_NAMESPACE

using namespace Clicker;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    auto game_controller = std::make_unique<Game_controller>();

#ifdef DYNAMIC
    QUiLoader loader;
    QString file_path;
    file_path.append(libio::file::get_current_dir_name("main_window_design.ui"));

    QFile file(file_path);

    auto res = file.open(QFile::ReadOnly);
    if (res) {
        auto main_window = dynamic_cast<QMainWindow *>(loader.load(&file));
        main_window->setWindowTitle("Clicker");

        auto menus = game_controller->get_menus();
        auto quit_btn = main_window->findChild<QPushButton *>(menus.quit_btn);

        //Callbacks:
        {
            QPushButton::connect(quit_btn, &QPushButton::clicked, [&game_controller]() -> void {
                game_controller->exit_game();
            });
        }

        file.close();
        main_window->show();

        if (main_window) {
            game_controller->init_game();
        }
    } else {
        throw;
    }

#else
    auto window = new Ui::MainWindow();
    window.show();
#endif

    auto qt_res = QApplication::exec();
    game_controller->exit_game();
    return qt_res;
}

QT_END_NAMESPACE