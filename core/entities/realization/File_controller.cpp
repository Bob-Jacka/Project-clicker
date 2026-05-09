#include "../declaration/File_controller.hpp"
#include <fstream>

/**
 * Static read lines file, open another file and read strings (lines).
 * @throw File_controller_exception - input file not opened
 * @return vector with strings (lines)
 */
std::vector<std::string> Clicker::File_controller::readlines(const std::string &file_name, const int line_count) {
    auto [file, cond] = open_file<std::ifstream>(file_name);
    if (cond) {
        auto lines = std::vector<std::string>(line_count);
        for (int i = 0; i < line_count; ++i) {
            std::string line;
            getline(file, line);
            lines.push_back(line);
        }
        file.close();
        return lines;
    }
    throw Clicker::File_controller_exception(__LINE__,
                                             ("Input file not opened with name with name " + file_name).c_str(),
                                             __FILE_NAME__);
}

/**
 * Static function for reading file.
 * Read file till end of the file.
 * @param file_name file name
 * @throws File_controller_exception - input file not opened or File_controller_exception - wrong file extension
 * @return vector with lines (strings)
 */
std::vector<std::string> Clicker::File_controller::readlines(const std::string &file_name) {
    if (check_file_extension(file_name) == 1) {
        auto [file, cond] = open_file<std::ifstream>(file_name);
        if (cond) {
            auto lines = std::vector<std::string>();
            std::string line;
            while (getline(file, line)) {
                lines.push_back(line);
            }
            file.close();
            return lines;
        }
        throw Clicker::File_controller_exception(__LINE__,
                                                 ("Input file not opened with name " + file_name).c_str(),
                                                 __FILE_NAME__);
    }
    if (check_file_extension(file_name) == 2) {
        const auto fake_string = file_name + ".txt";
        return readlines(fake_string);
    }
    throw Clicker::File_controller_exception(__LINE__, ("Wrong file extension " + file_name).c_str(),
                                             __FILE_NAME__);
}

/**
 * Static file operation for reading multiple lines.
 * @throw File_controller_exception input file not opened.
 * @return vector with strings
 */
std::vector<std::string>
Clicker::File_controller::readlines(std::ifstream &file_descriptor, const int line_count) {
    if (file_descriptor.is_open()) {
        auto lines = std::vector<std::string>(line_count);
        for (int i = 0; i < line_count; ++i) {
            std::string line;
            getline(file_descriptor, line);
            lines.push_back(line);
        }
        file_descriptor.close();
        return lines;
    }
    throw Clicker::File_controller_exception(__LINE__, "Input file not opened with file descriptor",
                                             __FILE_NAME__);
}

/**
 * Static file operation for reading line.
 * @param file_descriptor name of the file to open.
 * @throw File_controller_exception input file not opened.
 * @return line from file.
 */
std::string Clicker::File_controller::readline(const std::string &file_descriptor) {
    auto [file, cond] = open_file<std::ifstream>(file_descriptor);
    if (cond) {
        std::string line;
        getline(file, line);
        file.close();
        return line;
    }
    throw Clicker::File_controller_exception(__LINE__, ("Input file not opened with string file descriptor " +
                                                        file_descriptor).c_str(), __FILE_NAME__);
}

/**
 * Static file operation for reading line.
 * @param file_descriptor file object to read from file.
 * @throw File_controller_exception input file not opened.
 * @return line from file.
 */
std::string Clicker::File_controller::readline(std::ifstream &file_descriptor) {
    if (file_descriptor.is_open()) {
        std::string line;
        getline(file_descriptor, line);
        file_descriptor.close();
        return line;
    }
    throw Clicker::File_controller_exception(__LINE__, "Input file not opened with ifstream file descrtiptor",
                                             __FILE_NAME__);
}

/**
* Check for file extension.
* @param file_name name of the file to check.
* @return bool value of checking state (1 - if txt file, 2 - empty ext, 3 - tf or rsf, otherwise 0).
*/
int Clicker::File_controller::check_file_extension(const std::string &file_name) {
    if (file_name.ends_with(".txt") and not file_name.ends_with(".")) {
        return 1;
    }
    return 0;
}

/**
* Function for checking if file exists in filesystem.
* @param file_name name of the file to check.
* @return bool value of file existance
*/
bool Clicker::File_controller::check_file_existence(const std::string &file_name) {
    //check for file extension existence
    auto [file, cond] = open_file<std::ifstream>(file_name);
    if (cond) {
        file.close();
        return true;
    }
    file.close();
    return false;
}

void Clicker::File_controller::create_save_file(const std::string &) {
    //
}
