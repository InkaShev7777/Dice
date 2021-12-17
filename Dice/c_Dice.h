#pragma once
#include<iostream>
class c_Dice
{
	int nom_dice;
public:
	c_Dice(int nom);
	c_Dice();
	int getNom();
	friend std::ostream& operator<<(std::ostream& out,const c_Dice& dice);
};

