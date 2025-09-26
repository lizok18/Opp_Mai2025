#include <iostream>
#include <string>
#include "../include/palindrome.h"

int main() {
    std::string input;
    
    std::cout << "Введите строку для проверки на палиндром: ";
    std::getline(std::cin, input);
    
    if (isPalindrome(input)) {
        std::cout << "Строка является палиндромом!" << std::endl;
    } else {
        std::cout << "Строка НЕ является палиндромом." << std::endl;
    }
    
    return 0;
}
