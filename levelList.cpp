#include "levelList.h"
#include <iostream>
using namespace std;

void levelList::clearList()
{
	ListNode *nodePtr=nullptr;
	ListNode *nextNode=nullptr;
	
	nodePtr = head;
	while (nodePtr!=nullptr)
	{
		nextNode = nodePtr -> next;
		delete nodePtr;
		nodePtr = nextNode;
	}
	head = nullptr;
}

void levelList::appendNode(int level)
{
	ListNode *newNode;
	ListNode *nodePtr;
	newNode = new ListNode;
	newNode -> value = level;
	newNode -> next = nullptr;

	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;
		while (nodePtr -> next)
			nodePtr = nodePtr -> next;
		nodePtr -> next = newNode;	
	}
}

void levelList::insertNode(int level)
{
	ListNode *nodePtr=nullptr;
	ListNode *prevNode=nullptr;
	ListNode *newNode=nullptr;
	
	newNode = new ListNode;
	newNode -> value = level;
	newNode -> next = nullptr;
	
	if(!head)
	{
		head = newNode;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr -> value < level)
		{
			prevNode = nodePtr;
			nodePtr = nodePtr -> next;
		}
		if (prevNode == nullptr) //pass level 1,2,3; replayed lev 2
		{
			head = newNode;
			newNode -> next = nodePtr;
		}
		else
		{
		prevNode -> next = newNode;
		newNode -> next = nodePtr;
		}
	}
}

void levelList::deleteNode(int level)
{
	ListNode *nodePtr;
	ListNode *prevNode;
	
	if (head -> value == level)
	{
		nodePtr = head -> next;
		delete head;
		head = nullptr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr -> value != level)
		{
			prevNode = nodePtr;
			nodePtr = nodePtr -> next;
		}
		if (nodePtr)
		{
			prevNode -> next = nodePtr -> next;
			delete nodePtr;
			cout << endl<<"Going to "<<level<<" ..."<<endl;
		}
	}
}

void levelList::displayList()const
{
	ListNode *nodePtr;
	nodePtr = head;
	if (head == nullptr)
		return;
		
	cout << "Succeeded Level: ";
	while (nodePtr)
	{
		cout << "<" << nodePtr -> value << "> ";
		nodePtr = nodePtr -> next;
	}
	cout << endl;
}

