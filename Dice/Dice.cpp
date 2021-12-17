#include <iostream>
#include "c_Dice.h";
#include "c_Staff_Dice.h";
#include<time.h>
int main()
{
    
    
    int nom = 0;
    srand(time(0));
    nom = 1 + rand() % 6;
    c_Dice dice;
   //std::cout << dice;
   // std::cout << nom;
    c_Staff_Dice staff(4);
    std::cout << staff;
    std::cout << "\n\n";
    std::cout << staff[2];
}


