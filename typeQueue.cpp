#include "typeQueue.h"
#include <iostream>
using namespace std;

typeQueue::typeQueue(int s)
{
	qtyArray = new int [s];
	size = s;
	front = 0;
	rear = -1;
	numItems = 0;
}

bool typeQueue::isEmpty()const
{
	if (numItems)
		return false;
	else
		return true;
}

void typeQueue::enqueue(int type, int qty)
{
	for (int i=0; i<qty; i++)
	{
		rear = (rear+1)%size;
		qtyArray[rear] = type;
		numItems ++;
	}
	displayQueue();
	
}
int typeQueue::dequeue()
{
		int element = qtyArray[front];
        front = (front + 1) % size;
        numItems--;
        return element;
}

typeQueue::~typeQueue()
{
	front = 0;
    rear = -1;
	size = 0;
}

void typeQueue::displayQueue()
{
	int current = front;
    for (int count = 0; count < numItems; count++) {
        cout << "| " << qtyArray[current] <<" |"<< " ";
        current = (current + 1) % size;
    }
    cout << endl;
}

