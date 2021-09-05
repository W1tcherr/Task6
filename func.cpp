#include "func.h"

unsigned getValue()
{
    while(true)
    {
        unsigned value;
        std::cin >> value;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "\nWrong size, please re-enter: ";
        }
        else
        {
            return value;
        }
    }
}

void searchAbundantNumber(const unsigned& number)
{
    if(number < 945)
        for(unsigned i = 12; i <= number; i += 2)
        {
            printAbundantNumber(i);
        }
    else
    {
        for(unsigned i = 12; i <= 944; i += 2)
        {
            printAbundantNumber(i);
        }

        for(unsigned i = 945; i <= number; ++i)
        {
            printAbundantNumber(i);
        }
    }
}

void printAbundantNumber(const unsigned& number)
{
    unsigned abundant = 1;
    unsigned limit = number / 2;
    for(unsigned i = 2; i <= limit; ++i)
        if(number % i == 0)
            abundant+=i;
    if(number >= abundant)
        abundant = 1;
    else
        std::cout << "\nAbundant Number: " << number << " abundant: " << abundant - number;
}
