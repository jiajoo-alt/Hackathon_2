#ifndef FOODQTY_H
#define FOODQTY_H
#include "typeQueue.h"
#include <iostream>

//inheritance relationship with typeQueue class
class foodQty : public typeQueue
{
	private:
		int foodType;
		int foodQuantity;
		int sumQ=0; //sum of food quantity
		
		//calculate price
		int totalPrice=0;
		int p;
		
	public:
		foodQty(int s) : typeQueue(s){} //passing value to typeQueue constructor
		~foodQty(){}
		void setFoodType(int);
		void setFoodQuantity(int);
		int getFoodType() const;
		int getFoodQuantity() const;
		int sumQuantity() const;
		
		void setPrice(int, int);
		int getPrice () const;
		
};
#endif

