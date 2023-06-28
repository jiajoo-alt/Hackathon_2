#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;

class Stack
{
	private:
		struct StackNode
		{
			int value;
			struct StackNode *next;
		};
			struct StackNode *top;
	public:
		Stack()
		{
			top = nullptr;
		}
		~Stack(){};
		
		void push(int);
		void pop(int &);
		bool isEmpty();
		void reverse();//to reverse the stack
		
};

#endif

