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

TEST(RomanNumeral, canConvert2){
    number_to_roman_numeral(2, numeral);
    EXPECT_STREQ(numeral, "II");
}

TEST(RomanNumeral, canConvert3){
    number_to_roman_numeral(3, numeral);
    EXPECT_STREQ(numeral, "III");
}

TEST(RomanNumeral, canConvert4){
    number_to_roman_numeral(4, numeral);
    EXPECT_STREQ(numeral, "IV");
}

TEST(RomanNumeral, canConvert5){
    number_to_roman_numeral(5, numeral);
    EXPECT_STREQ(numeral, "V");
}

TEST(RomanNumeral, canConvert9){
    number_to_roman_numeral(9, numeral);
    EXPECT_STREQ(numeral, "IX");
}

TEST(RomanNumeral, canConvert10){
    number_to_roman_numeral(10, numeral);
    EXPECT_STREQ(numeral, "X");
}

TEST(RomanNumeral, canConvert11){
    number_to_roman_numeral(11, numeral);
    EXPECT_STREQ(numeral, "XI");
}

TEST(RomanNumeral, canConvert24){
    number_to_roman_numeral(24, numeral);
    EXPECT_STREQ(numeral, "XXIV");
}

TEST(RomanNumeral, canConvert41){
    number_to_roman_numeral(41, numeral);
    EXPECT_STREQ(numeral, "XLI");
}

TEST(RomanNumeral, canConvert49){
    number_to_roman_numeral(49, numeral);
    EXPECT_STREQ(numeral, "XLIX");
}

TEST(RomanNumeral, canConvert50){
    number_to_roman_numeral(50, numeral);
    EXPECT_STREQ(numeral, "L");
}

TEST(RomanNumeral, canConvert99){
    number_to_roman_numeral(99, numeral);
    EXPECT_STREQ(numeral, "XCIX");
}

TEST(RomanNumeral, canConvert100){
    number_to_roman_numeral(100, numeral);
    EXPECT_STREQ(numeral, "C");
}

TEST(RomanNumeral, canConvert101){
    number_to_roman_numeral(101, numeral);
    EXPECT_STREQ(numeral, "CI");
}

TEST(RomanNumeral, canConvert109){
    number_to_roman_numeral(109, numeral);
    EXPECT_STREQ(numeral, "CIX");
}

TEST(RomanNumeral, canConvert349){
    number_to_roman_numeral(349, numeral);
    EXPECT_STREQ(numeral, "CCCXLIX");
}

TEST(RomanNumeral, canConvert449){
    number_to_roman_numeral(449, numeral);
    EXPECT_STREQ(numeral, "CDXLIX");
}

TEST(RomanNumeral, canConvert500){
    number_to_roman_numeral(500, numeral);
    EXPECT_STREQ(numeral, "D");
}

TEST(RomanNumeral, canConvert509){
    number_to_roman_numeral(509, numeral);
    EXPECT_STREQ(numeral, "DIX");
}

TEST(RomanNumeral, canConvert944){
    number_to_roman_numeral(944, numeral);
    EXPECT_STREQ(numeral, "CMXLIV");
}

TEST(RomanNumeral, canConvert999){
    number_to_roman_numeral(999, numeral);
    EXPECT_STREQ(numeral, "CMXCIX");
}

TEST(RomanNumeral, canConvert1999){
    number_to_roman_numeral(1999, numeral);
    EXPECT_STREQ(numeral, "MCMXCIX");
}

TEST(RomanNumeral, canConvert2016){
    number_to_roman_numeral(2016, numeral);
    EXPECT_STREQ(numeral, "MMXVI");
}

TEST(RomanNumeral, canConvert3999){
    number_to_roman_numeral(3999, numeral);
    EXPECT_STREQ(numeral, "MMMCMXCIX");
}

TEST(RomanNumeral, canConvert4000){
    number_to_roman_numeral(4000, numeral);
    EXPECT_STREQ(numeral, "MMMM");
}