#ifndef INITIALISE_H
#define INITIALISE_H
#include<iostream>
#include"Stack.h"
using namespace std;

//set default stack for comparison
class initialise
{
private:
	Stack stacks[5];
	
public:
	void initialiseOrder();
	void popNum(int, int&);
};


#endif

