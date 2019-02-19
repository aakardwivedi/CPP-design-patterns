#include "Animal.h"
#include<iostream>
using namespace std;


void Animal::setName(string newName){name = newName;}
string Animal::getName(){return name;}


void Animal::setSound(string newSound){sound = newSound;}
string Animal::getSound(){return sound;}

void Animal::setFavFood(string newFavFood){favFood = newFavFood;}
string Animal::getFavFood(){return favFood;}

void Animal::setHeight(int newHeight)
{
		if(newHeight>0)
			height = newHeight;
		else
			cout<<"\nNegative(or zero) height not valid!!";
}
int Animal::getHeight(){return height;}

void Animal::setWeight(int newWeight)
{
		if(newWeight>0)
			weight = newWeight;
		else
			cout<<"\nNegative(or zero) weight not valid!!";
}
int Animal::getWeight(){return weight;}


void Animal::setSpeed(double newSpeed){
	if(newSpeed>0)
		speed = newSpeed;
	else
		cout<<"\nNegative(or zero) speed not valid!!";
}
double Animal::getSpeed(){return speed;}

void Animal::display()
{
		cout<<"\nHi, I am"<<name<<"\nI am "<<height<<"inches tall and weigh "
		<<weight<<"pounds \n I eat "<<favFood<<endl;
}
