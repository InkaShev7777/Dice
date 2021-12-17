#include <iostream>
#include "c_Dice.h";
#include "c_Staff_Dice.h";
#include<time.h>
int main()
{
    srand(time(0));
    c_Dice dice;
    c_Staff_Dice staff(4);
    std::cout << staff;
    std::cout << "\n\n";
   // std::cout << staff[2];
    std::cout << "\n\n";
    std::cout<<staff.Sum(dice);
}


