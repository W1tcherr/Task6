#include <iostream>
#include "func.h"

int main() {
    std::cout << "Please enter unsigned number >= 12: ";
    unsigned num;
    while(true)
    {
        num = getValue();
        if(num < 12)
            std::cout << "\nDoes not exist Abundant Number < 12, please try again: ";
        else
            break;
    }

    searchAbundantNumber(num);
    return 0;
}