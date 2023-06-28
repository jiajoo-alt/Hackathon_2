#include "Stack.h"

void Stack:: push(int order)
{
	StackNode *newNode = nullptr;
	StackNode *nodePtr = nullptr;
	
	newNode = new StackNode;
	newNode -> value = order;
	
	if(isEmpty())
	{
		top = newNode;
		newNode -> next =nullptr;
	}
	else
	{
		nodePtr = top;
		newNode -> next = nodePtr;
		top = newNode;
	}
}

void Stack :: pop(int &num)
{
  StackNode *temp = nullptr;

  if(isEmpty())
  {
    return;
  }
  else
  {
    num = top->value;
    temp = top->next;
    delete top;
    top = temp;
  }
}

bool Stack :: isEmpty()
{
  bool status;

  if(!top)
  {
    status = true;
  }
  else
  {
    status = false;
  }
  return status;
}

void Stack::reverse() {
    if (isEmpty()) {
        return; // Nothing to reverse
    }

    StackNode *prevNode = nullptr;
    StackNode *nodePtr = top;
    StackNode *nextNode = nullptr;

    while (nodePtr != nullptr) {
        nextNode = nodePtr->next;
        nodePtr->next = prevNode;
        prevNode = nodePtr;
        nodePtr = nextNode;
    }

    top = prevNode;
}


