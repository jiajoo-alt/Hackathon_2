#ifndef LEVELLIST_H
#define LEVELLIST_H

class levelList
{
		struct ListNode
		{
			int value;
			ListNode *next;
		};
		ListNode *head;
		
		int largestValue;
		
	public:
		levelList() {head = nullptr;}
		~levelList(){}
		void clearList(); //restart the whole game
		void appendNode(int); //update level
		void insertNode(int); //update replayed level
		void deleteNode(int); //replay level
		void displayList() const; //display played levels
		
};
# endif

