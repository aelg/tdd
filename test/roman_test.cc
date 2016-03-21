/*
=====================================================================
Created on : 2016-03-16
Author     : Linus Mellberg
=====================================================================
*/

#include <gtest/gtest.h>

extern "C" {
#include "../roman.h"
}

const int BUFFER_LENGTH = 20;
char numeral[BUFFER_LENGTH];

using namespace std;
using namespace testing;

TEST(RomanNumeral, canConvert1){
    number_to_roman_numeral(1, numeral);
    EXPECT_STREQ(numeral, "I");
}