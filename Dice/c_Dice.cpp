#include "c_Dice.h"

c_Dice::c_Dice(int nom)
{
	
	this->nom_dice = nom;
}
c_Dice::c_Dice()
{
	int a = 1+rand() % 6;
	this->nom_dice = a;
}
std::ostream& operator<<(std::ostream& out, const c_Dice& dice)
{
	out << "Nom_dice: " << dice.nom_dice<<"\t";
	return out;
}
