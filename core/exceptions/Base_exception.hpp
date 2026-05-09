#ifndef BASE_EXCEPTION_HPP
#define BASE_EXCEPTION_HPP

#include <exception>
#include <iostream>

/**
 * Namespace for exceptions in check runner
 */
namespace Clicker {
    class Base_exception : public std::exception {
    public:
        [[nodiscard]] const char *what() const noexcept override;

        Base_exception() = default;

        ~Base_exception() override = default;
    };

    inline const char *Base_exception::what() const noexcept {
        return exception::what();
    }
}

#endif