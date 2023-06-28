#ifndef TYPEQUEUE_H
#define TYPEQUEUE_H
#include <iostream>

class typeQueue
{
	private:
		int *qtyArray;
		int size;
		int front;
		int rear;
		int numItems;
		
	public:
		typeQueue(int); //receiving value from foodQty constructor
		~typeQueue();
		bool isEmpty() const;		
		void enqueue(int, int);
		int dequeue();
		
		void displayQueue();
};
#endif

