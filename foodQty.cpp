#include "foodQty.h"
#include "typeQueue.h"
#include <iostream>
using namespace std;

void foodQty::setFoodType(int t)
{
	foodType = t;
}

void foodQty::setFoodQuantity(int q)
{
	foodQuantity = q;
	
	cout << "*** Chosen food: ";
	sumQ += foodQuantity;
	
	enqueue(foodType, foodQuantity); //pass type of food and its quantity to func in typeQueue
	setPrice(foodType, foodQuantity); //calculate price of the quantity
}

int foodQty::getFoodType() const
{
	return foodType;
}

int foodQty::getFoodQuantity() const
{
	return foodQuantity;
}

int foodQty::sumQuantity() const
{
	return sumQ;
}

void foodQty::setPrice(int t, int q)
{
	if (t == 1)
		p = 6*q;
	else if (t == 2)
		p = 15*q;
	else if (t == 3)
		p = 8*q;
	else if (t == 4)
		p = 7*q;
	else
		p = 12*q;
	
	totalPrice += p;
}

int foodQty::getPrice() const
{
	return totalPrice;
}

