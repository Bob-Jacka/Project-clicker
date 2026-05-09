#ifndef GAME_CONTROLLER_HPP
#define GAME_CONTROLLER_HPP

#include <string>
#include "File_controller.hpp"

import Libio;

/**
 * Main namespace in clicker project
 */
namespace Clicker {

    /**
     * Struct that representing one block in interface;
     */
    struct Game_block {
    private:
        std::string proceed_lcd; ///how many will add to balance
        std::string next_upgrade_lcd; ///how many will cost next upgrade

        std::string buy_btn; ///upgrade block
        std::string proceed_btn; ///action on block
        std::string is_auto_checkbox; ///is apply auto bet (only before buying office worker)

    public:
        explicit Game_block(int block_number) {
            const std::string stringify_bn = std::to_string(block_number);
            proceed_lcd = "proceed_lcd_" + stringify_bn;
            next_upgrade_lcd = "next_lcd_" + stringify_bn;

            buy_btn = "buy_" + stringify_bn;
            proceed_btn = "proceed_" + stringify_bn;
            is_auto_checkbox = "is_auto_" + stringify_bn;
        }

        ~Game_block() = default;

        Game_block(Game_block &block) = delete;

        Game_block(Game_block &&block);
    };

    /**
     * Menus in interface
     */
    struct Menus {
    public:
        const std::string achievements_btn = "achievements_btn";
        const std::string about_btn = "about_btn";
        const std::string managers_btn = "office_workers_btn";
        const std::string sell_galaxy_btn = "sellgalaxy_btn";
        const std::string save_progress_btn = "save_btn";
        const std::string settings_btn = "settings_btn";

        const std::string quit_btn = "quit_btn"; ///exit button in ui

    public:
        Menus() = default;

        ~Menus() = default;
    };

    /**
     * Office worker for auto play in game
     */
    struct Office_worker {
    private:
        std::string name;
        double up_coef;

    public:
        [[nodiscard]] std::string get_name();

        [[nodiscard]] double get_up_coef();
    };

    /**
     * Main entity to control game
     */
    class Game_controller {
    private:
        Menus menus;
        std::vector<Game_block> game_blocks;
        File_controller f_controller;

    public:
        Game_controller();

        ~Game_controller();

        void init_game();

        void exit_game();

        void buy();

        void sell_galaxy();

    public:
        [[nodiscard]] Menus get_menus();
    };
}

#endif
