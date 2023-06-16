#include <iostream>

// Returns the number if it's Even which means it can be divided by 2 with 0 reminder (2, 4, 6 , 8 , 10)
uint32_t Even(int num) {
    return (num % 2 == 0) ? num : 0;
}