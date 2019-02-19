#include "Animal.h"

#include<iostream>
#include<string>

using namespace std;

int main()
{
	Animal dog,cat;

	dog.setName("solo");
	dog.setSound("bark");
	dog.setSpeed(20);
	dog.setHeight(2);
	dog.setWeight(30);
	dog.setFavFood("pedigree");


	cat.setName("soiki");
	cat.setSound("meaow");
	cat.setSpeed(25);
	cat.setHeight(1);
	cat.setWeight(25);
	cat.setFavFood("soup");

	dog.display();
	cat.display();
	return 0;

}
