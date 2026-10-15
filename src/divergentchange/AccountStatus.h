#pragma once

#include <string>

namespace refactoring::divergentchange
{
    class AccountStatus
    {
        public:
            std::string determine(int daysSinceLastLogin) const;
    };
}
