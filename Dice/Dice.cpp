#include <iostream>
#include "c_Dice.h";
#include "c_Staff_Dice.h";
#include<time.h>
int main()
{
    srand(time(0));
    c_Dice dice;
    c_Staff_Dice staff(4);
    std::cout << "ALL DICE\n";
    std::cout <<"\t"<< staff;
    std::cout << "\n\nDICE BY INDEX\n";
    std::cout <<"\t"<< staff[2];
    std::cout << "\n\nSUMA DICE\n";
    std::cout<<"\t"<<staff.Sum(dice);
    std::cout << "\n\n";
}


