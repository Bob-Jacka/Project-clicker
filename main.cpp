#include <QApplication>
#include <QWindow>
#include <QUiLoader>
#include <QFile>
#include <QMainWindow>
#include "core/entities/declaration/Game_controller.hpp"

#define DYNAMIC //comment or uncomment this line for dynamic ui loading

#include <QPushButton>
#include <QGridLayout>
#include <QFormLayout>

import Libio;

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

        auto lay = main_window->findChild<QGridLayout *>("Mainlayout");
        auto elements_menu = lay->findChild<QHBoxLayout *>("Elements_grid");
        auto footer_menu = lay->findChild<QFormLayout *>("Footer_menu");

        auto balance_layout = footer_menu->findChild<QHBoxLayout *>("Current_balance");

        auto ach_btn = footer_menu->findChild<QPushButton *>("achievements_btn");
        auto about_btn = footer_menu->findChild<QPushButton *>("about_btn");
        auto managers_btn = footer_menu->findChild<QPushButton *>("office_workers_btn");
        auto sell_galaxy_btn = footer_menu->findChild<QPushButton *>("sellgalaxy_btn");
        auto save_btn = footer_menu->findChild<QPushButton *>("save_btn");
        auto settings_btn = footer_menu->findChild<QPushButton *>("settings_btn");
        auto quit_btn = footer_menu->findChild<QPushButton *>("quit_btn");

        //Callbacks block:
        {
            //achievements
            QPushButton::connect(ach_btn, &QPushButton::clicked, [&game_controller]() -> void {
                game_controller->exit_game();
            });

            //about game
            QPushButton::connect(about_btn, &QPushButton::clicked, [&game_controller]() -> void {
                game_controller->exit_game();
            });

            //office workers menu
            QPushButton::connect(managers_btn, &QPushButton::clicked, [&game_controller]() -> void {
                game_controller->exit_game();
            });

            //sell galaxy
            QPushButton::connect(sell_galaxy_btn, &QPushButton::clicked, [&game_controller]() -> void {
                game_controller->exit_game();
            });

            //save game state
            QPushButton::connect(save_btn, &QPushButton::clicked, [&game_controller]() -> void {
                game_controller->exit_game();
            });

            //settings menu
            QPushButton::connect(settings_btn, &QPushButton::clicked, [&game_controller]() -> void {
                game_controller->exit_game();
            });

            //exit from game
            QPushButton::connect(quit_btn, &QPushButton::clicked, [&game_controller]() -> void {
                game_controller->exit_game();
            });
        }

        file.close();
        main_window->show();

        game_controller->init_game();
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