#include "divergentchange/CustomerService.h"
#include "divergentchange/EmailValidator.h"
#include "divergentchange/DisplayNameFormatter.h"
#include <algorithm>
#include <cctype>
#include <regex>

namespace refactoring::divergentchange {

bool CustomerService::isValidEmail(const char* email) const {
    return EmailValidator().isValidEmail(email);
}

std::string CustomerService::formatDisplayName(const std::string& firstName, const std::string& lastName) const {
    return DisplayNameFormatter().formatDisplayName(firstName, lastName);
}

int CustomerService::calculateLoyaltyPoints(int numberOfPurchases) const {
    return numberOfPurchases * 10;
}

std::string CustomerService::determineAccountStatus(int daysSinceLastLogin) const {
    if (daysSinceLastLogin > 365) {
        return "INACTIVE";
    } else if (daysSinceLastLogin > 30) {
        return "DORMANT";
    }
    return "ACTIVE";
}

} // namespace refactoring::divergentchange
