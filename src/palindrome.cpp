#include "../include/palindrome.h"
#include <algorithm>
#include <cctype>

bool isPalindrome(const std::string &str) {
  if (str.empty())
    return false;

  std::string cleaned;
  for (char c : str) {
    if (!std::isspace(static_cast<unsigned char>(c))) {
      cleaned += static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    }
  }

  if (cleaned.empty())
    return false;

  size_t left = 0, right = cleaned.length() - 1;
  while (left < right) {
    if (cleaned[left] != cleaned[right])
      return false;
    ++left;
    --right;
  }
  return true;
}

