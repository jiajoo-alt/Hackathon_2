#include "initialise.h"
#include "Stack.h"
#include<iostream>
using namespace std;

void initialise :: initialiseOrder()
{
        //1
        stacks[0].push(5); 
        stacks[0].push(6); 
        stacks[0].push(3);
        stacks[0].push(1); 
        stacks[0].push(4);
		stacks[0].push(2);
        stacks[0].push(7);
        stacks[0].push(5);
        
		//2
        stacks[1].push(8);
        stacks[1].push(3);
        stacks[1].push(5);
        stacks[1].push(6);
        stacks[1].push(2);
        stacks[1].push(1);
        stacks[1].push(4);
        stacks[1].push(7);
        
		//3
        stacks[2].push(7);
        stacks[2].push(5);
        stacks[2].push(4);
        stacks[2].push(1);
        stacks[2].push(8);
        stacks[2].push(3);
        stacks[2].push(2);
        stacks[2].push(6);
		
		//4
        stacks[3].push(1);
        stacks[3].push(2);
        stacks[3].push(4);
        stacks[3].push(3);
        stacks[3].push(1);

		//5
        stacks[4].push(5);
        stacks[4].push(4);
        stacks[4].push(1);
        stacks[4].push(3);
        stacks[4].push(2);
        
}

void initialise :: popNum(int i, int &num)
{
	stacks[i].pop(num);
}

