#include "Building.h"

int CBuilding::RSHash(string str)
{
	int b    = 378551; //Ramdom Ranges I've chosen (can be modified)
	int a    = 63689;
	int hash = 0;  //Output hash

	//i is a temp number that scrolls through the string array
	for(unsigned int i = 0; i < str.length(); i++) //Loop to convert each character
	{
		hash = hash * a + str[i];  //Algorithm that hashs
		a    = a * b;
	}

	return (hash & 0x7FFFFFFF); //Returns the hashed string
}

int CBuilding::getID()
{
	return id;
}

void CBuilding::setID(int id)
{
	this->id=id;
}