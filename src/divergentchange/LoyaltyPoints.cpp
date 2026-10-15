#include "divergentchange/LoyaltyPoints.h"

namespace refactoring::divergentchange {

    int LoyaltyPoints::calculate(int numberOfPurchases) const {
        return numberOfPurchases * 10;
}

}