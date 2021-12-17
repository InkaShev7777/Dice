#pragma once
#include "c_Dice.h";
class c_Staff_Dice
{
	c_Dice* mas;
	int size;
public:

	c_Staff_Dice(int size);
	int getSize();
	friend std::ostream& operator<<(std::ostream& out, const c_Staff_Dice& staff);
	c_Dice& operator[](const int index);
	c_Dice Sum(c_Dice);

};

