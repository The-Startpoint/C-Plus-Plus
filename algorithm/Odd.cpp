#include <iostream>

// Returns the number if it's OFF which means it cannot be divided by 2 with 0 reminder
uint32_t Odd(int number) {
    return (number % 2 != 0) ? number : 0;
}