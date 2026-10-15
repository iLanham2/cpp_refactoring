#include "divergentchange/AccountStatus.h"

namespace refactoring::divergentchange {
    std::string AccountStatus::determine(int daysSinceLastLogin) const
    {
        if (daysSinceLastLogin > 365)
        {
            return "INACTIVE";
        }
        else if (daysSinceLastLogin > 30)
        {
            return "DORMANT";
        }
        return "ACTIVE";
    }
}
