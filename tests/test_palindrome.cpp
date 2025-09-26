#include <gtest/gtest.h>
#include "../include/palindrome.h"

TEST(PalindromeTest, EmptyString) {
    EXPECT_FALSE(isPalindrome(""));
}

TEST(PalindromeTest, SingleCharacter) {
    EXPECT_TRUE(isPalindrome("a"));
    EXPECT_TRUE(isPalindrome("A"));
}

TEST(PalindromeTest, SimplePalindrome) {
    EXPECT_TRUE(isPalindrome("radar"));
    EXPECT_TRUE(isPalindrome("Racecar"));
    EXPECT_TRUE(isPalindrome("A man a plan a canal Panama"));
}

TEST(PalindromeTest, NotPalindrome) {
    EXPECT_FALSE(isPalindrome("hello"));
    EXPECT_FALSE(isPalindrome("world"));
}

TEST(PalindromeTest, WithSpacesAndCase) {
    EXPECT_TRUE(isPalindrome("A Santa at NASA"));
    EXPECT_TRUE(isPalindrome("Was it a car or a cat I saw"));
}

TEST(PalindromeTest, NumbersAndSpecialChars) {
    EXPECT_TRUE(isPalindrome("12321"));
    EXPECT_FALSE(isPalindrome("12345"));
}
