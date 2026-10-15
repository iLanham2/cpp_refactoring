#pragma once

#include <string>

namespace refactoring::divergentchange {

    class DisplayNameFormatter
    {
        public:
            std::string formatDisplayName(const std::string& firstName, const std::string& lastName) const;

    };

}
