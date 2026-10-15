#include "divergentchange/CustomerService.h"
#include "divergentchange/EmailValidator.h"
#include "divergentchange/DisplayNameFormatter.h"
#include "divergentchange/LoyaltyPoints.h"
#include "divergentchange/AccountStatus.h"

namespace refactoring::divergentchange {

bool CustomerService::isValidEmail(const char* email) const {
    return EmailValidator().isValidEmail(email);
}

std::string CustomerService::formatDisplayName(const std::string& firstName, const std::string& lastName) const {
    return DisplayNameFormatter().formatDisplayName(firstName, lastName);
}

int CustomerService::calculateLoyaltyPoints(int numberOfPurchases) const {
    return LoyaltyPoints().calculate(numberOfPurchases);
}

std::string CustomerService::determineAccountStatus(int daysSinceLastLogin) const {
    return AccountStatus().determine(daysSinceLastLogin);
}

} // namespace refactoring::divergentchange
