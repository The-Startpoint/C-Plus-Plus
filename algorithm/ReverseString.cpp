#include <iostream>
#include <string>

// Takes a string and reverses the string and returns the reversed string
std::string reverseString(const std::string& str) {
    std::string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}