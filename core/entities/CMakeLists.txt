cmake_minimum_required(VERSION 3.10)
project(Entities)

add_library(Entities
        realization/File_controller.cpp
        declaration/File_controller.hpp

        realization/Game_controller.cpp
        declaration/Game_controller.hpp

        realization/Save_file.cpp
        declaration/Save_file.hpp

        realization/Ui_fabric.cpp
        declaration/Ui_fabric.hpp
)