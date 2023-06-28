#ifndef COMBINELIST_H
#define COMBINELIST_H
#include "levelList.h"

class combineList{
	public:
		//class composition of 2 objects
		levelList list; //linked list to store level
		levelList QtyList; //linked list to store setQty (order to achieve)
		
		combineList(){}
		~combineList(){}
		
		void appendLevel(int level)
		{list.appendNode(level);}
		
		void deleteLevel(int level)
		{list.deleteNode(level);}
		
		void insertLevel(int level)
		{list.insertNode(level);}
		
		void displayLevel() const
		{list.displayList();}
		
		void restartLevel()
		{list.clearList();}
		
		void restartQty()
		{QtyList.clearList();}
		
		void appendQty(int qty)
		{QtyList.appendNode(qty);}
		
		void deleteQty(int qty)
		{QtyList.deleteNode(qty);}
		
		void insertQty(int qty)
		{QtyList.insertNode(qty);}
		
		void displayQty() const
		{QtyList.displayList();}

		
};
#endif

