#include "c_Staff_Dice.h"

std::ostream& operator<<(std::ostream& out, const c_Staff_Dice& staff)
{
	for (int i = 0;i < staff.size;i++)
	{
		out << staff.mas[i]<<"\t";
	}
	return out;
}
c_Staff_Dice::c_Staff_Dice(int size)
{
	this->size = size;
	mas = new c_Dice[size];
}

c_Dice& c_Staff_Dice::operator[](const int index)
{
	if (index < size)
	{
		return this->mas[index];
	}
}
int c_Staff_Dice::getSize()
{
	return this->size;
}

c_Dice c_Staff_Dice::Sum(c_Dice)
{
	int sum =0;
	for (int i = 0;i < size;i++)
	{
		sum += mas[i].getNom();
	}
	return sum;
}
