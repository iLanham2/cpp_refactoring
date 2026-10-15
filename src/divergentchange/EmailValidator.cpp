#include "divergentchange/EmailValidator.h"
#include <regex>

namespace refactoring::divergentchange {

bool EmailValidator::isValidEmail(const char* email) const
{
    if (email == nullptr) {
        return false;
    }
    static const std::regex pattern("^[A-Za-z0-9+_.-]+@[A-Za-z0-9.-]+$");
    return std::regex_match(email, pattern);
}

}
