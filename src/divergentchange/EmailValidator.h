#pragma once

#include <string>

namespace refactoring::divergentchange {

class EmailValidator 
{
public:
    bool isValidEmail(const char* email) const;
};

}