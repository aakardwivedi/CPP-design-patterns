#ifndef ANIMAL_H
#define ANIMAL_H
#include<string>
using namespace std;


class Animal{
	string name;
	int height,weight;
	string favFood;
	double speed;
	string sound;
public:
	void setName(string newName);
	string getName();

	void setSound(string newSound);
	string getSound();

	void setFavFood(string newFavFood);
	string getFavFood();

	void setHeight(int newHeight);
	int getHeight();

	void setWeight(int newWeight);
	int getWeight();

	void setSpeed(double newSpeed);
	double getSpeed();

	void display();
};

#endif
