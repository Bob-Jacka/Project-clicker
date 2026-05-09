#ifndef FILE_CONTROLLER_HPP
#define FILE_CONTROLLER_HPP

#include <vector>
#include <string>
#include "../../exceptions/File_controller_exception.hpp"
#include "Save_file.hpp"

namespace Clicker {
    class File_controller {
    public:
        File_controller() = default;

        ~File_controller() = default;

        //static methods, open file and read data from it

        static std::vector<std::string> readlines(const std::string &, int);

        static std::vector<std::string> readlines(const std::string &);

        static std::vector<std::string> readlines(std::ifstream &, int);

        //static read one line from file and return it

        static std::string readline(const std::string &);

        static std::string readline(std::ifstream &);

        File_controller(const File_controller &) = delete;

        File_controller(File_controller &&) = delete;

        File_controller &operator=(const File_controller &) = delete;

        File_controller &operator=(File_controller &&) = delete;

        ///for test results output. @deprecated due to new file format

        static int check_file_extension(const std::string &);

        static bool check_file_existence(const std::string &);

        static void create_save_file(const std::string &);

        /**
        * Open file and return condition variable of open
        * @param file_name name of the file to open
        * @tparam T generic type (which type of file to create)
        * @return tuple with file handler and bool (true if file open or error)
        */
        template<typename T>
        requires std::is_same_v<T, std::fstream> || std::is_same_v<T, std::ifstream>
        static std::tuple<T, bool> open_file(const std::string &file_name) {
            if (auto file = T(file_name); file.is_open()) {
                return std::make_tuple<T, bool>(std::move(file), true);
            }
            return std::make_tuple(T(), false); //File not exist with name
        }
    };
}

#endif //FILE_CONTROLLER_HPP
