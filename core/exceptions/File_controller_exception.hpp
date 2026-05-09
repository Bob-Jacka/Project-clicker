#ifndef FILECONTROLLEREXCEPTION_HPP
#define FILECONTROLLEREXCEPTION_HPP

#include "Base_exception.hpp"

namespace Clicker {
    class File_controller_exception final : public Base_exception {
    public:
        explicit File_controller_exception(int, const char *, const char *);
    };

    inline File_controller_exception::File_controller_exception(const int line, const char *msg,
                                                                const char *filename) {
        std::cout << "Error: " << msg << " at line " << line << " at file " << filename << std::endl;
    }
}

#endif