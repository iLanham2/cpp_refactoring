#include <gtest/gtest.h>

#include "comments/X1.h"

using refactoring::comments::X1;

TEST(X1Test, sumOfSquaresOverRange) {
    int lowerBound = 7;
    int b = 12;

    // Expected: sum of squares from 7 to 12
    int expected = 0;
    for (int i = lowerBound; i <= b; i++) {
        expected += i * i;
    }

    int actual = X1::sumOfSquaresOverRange(lowerBound, b);

    EXPECT_EQ(expected, actual);
}
