#include "divergentchange/CustomerService.h"
#include "divergentchange/EmailValidator.h"
#include "divergentchange/DisplayNameFormatter.h"
#include <algorithm>
#include <cctype>
#include <regex>

namespace refactoring::divergentchange {

namespace {

std::string trim(const std::string& s) {
    auto start = s.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos) {
        return "";
    }
    auto end = s.find_last_not_of(" \t\n\r\f\v");
    return s.substr(start, end - start + 1);
}

std::string toUpper(const std::string& s) {
    std::string result = s;
    std::transform(result.begin(), result.end(), result.begin(),
            [](unsigned char c) { return static_cast<char>(std::toupper(c)); });
    return result;
}

} // namespace

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
