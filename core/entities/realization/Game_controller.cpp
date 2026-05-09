#include "../declaration/Game_controller.hpp"

Clicker::Game_controller::Game_controller() {
    for (int i = 0; i < 6; ++i) {
        game_blocks.emplace_back(i);
    }
}

Clicker::Game_controller::~Game_controller() {
    game_blocks.clear();
}

/**
 * Initialize game buy checking save file
 */
void Clicker::Game_controller::init_game() {
    if (Clicker::File_controller::check_file_existence("save.txt")) {
        auto file_data = File_controller::readlines("save.txt");
    } else {
        libio::output::println("Save file does not exist");
    }
}

/**
 * Exit from game, check for save file
 */
void Clicker::Game_controller::exit_game() {
    libio::output::println("Exit game");
}

void Clicker::Game_controller::buy() {

}

void Clicker::Game_controller::sell_galaxy() {

}

Clicker::Menus Clicker::Game_controller::get_menus() {
    return {};
}

double Clicker::Office_worker::get_up_coef() {
    return 0;
}

std::string Clicker::Office_worker::get_name() {
    return std::string();
}

Clicker::Game_block::Game_block(Clicker::Game_block &&block) {
    //
}
