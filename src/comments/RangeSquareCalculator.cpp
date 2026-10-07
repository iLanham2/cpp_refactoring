#include "comments/RangeSquareCalculator.h"

namespace refactoring::comments {

    int RangeSquareCalculator::sumOfSquaresOverRange(int lowerBound, int upperBound) {
        int sum = 0;

        for (int i = lowerBound; i <= upperBound; i++) {
            sum += square(i);
        }

        return sum;
    }

    int RangeSquareCalculator::square(int number) {
        return number * number;
    }

}
