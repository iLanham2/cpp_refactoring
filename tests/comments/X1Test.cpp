#include <gtest/gtest.h>

#include "comments/X1.h"

using refactoring::comments::RangeSquareCalculator;

TEST(RangeSquareCalculatorTest, sumOfSquaresOverRange) {
    int lowerBound = 7;
    int upperBound = 12;

    // Expected: sum of squares from 7 to 12
    int expected = 0;
    for (int i = lowerBound; i <= upperBound; i++) {
        expected += i * i;
    }

    int actual = RangeSquareCalculator::sumOfSquaresOverRange(lowerBound, upperBound);

    EXPECT_EQ(expected, actual);
}
