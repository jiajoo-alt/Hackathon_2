#include "combineList.h"
#include "foodQty.h"
#include "typeQueue.h"
#include "Stack.h"
#include "initialise.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

//function header
void startGame(combineList c);
void enterGame(int l,int q, combineList c);
void continuGame(combineList c);
void displayMenu(int);
void gameMenu(int);
combineList levelMenu(int,int,combineList c);
void performSteps(int choice, Stack& stack);

//function header: Menu between Levels
combineList levelCont(int, int, combineList c);
combineList restartGame(combineList c);
combineList quitLvl(int, int, combineList c);
combineList replayGame(int, int, combineList c);
combineList option(int,int,int, combineList c);


int main()
{
	combineList c;
	
	startGame(c);
	return 0;
}


//main menu
void startGame(combineList c) 
{ 
string name;

cout << " /$$   /$$                                                         /$$      /$$" << endl;                              
cout << "| $$  | $$                                                        | $$$    /$$$" << endl;                              
cout << "| $$  | $$ /$$   /$$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$      | $$$$  /$$$$ /$$   /$$  /$$$$$$$  /$$$$$$" << endl; 
cout << "| $$$$$$$$| $$  | $$| $$__  $$ /$$__  $$ /$$__  $$| $$  | $$      | $$ $$/$$ $$| $$  | $$ /$$_____/ /$$__  $$" << endl;
cout << "| $$__  $$| $$  | $$| $$  \\ $$| $$  \\ $$| $$  \\__/| $$  | $$      | $$  $$$| $$| $$  | $$|  $$$$$$ | $$$$$$$$" << endl;
cout << "| $$  | $$| $$  | $$| $$  | $$| $$  | $$| $$      | $$  | $$      | $$\\  $ | $$| $$  | $$ \\____  $$| $$_____/" << endl;
cout << "| $$  | $$|  $$$$$$/| $$  | $$|  $$$$$$$| $$      |  $$$$$$$      | $$ \\/  | $$|  $$$$$$/ /$$$$$$$/|  $$$$$$$" << endl;
cout << "|__/  |__/ \\______/ |__/  |__/ \\____  $$|__/       \\____  $$      |__/     |__/ \\______/ |_______/  \\_______/" << endl;
cout << "                             /$$  \\ $$           /$$  | $$ " << endl;                                                
cout << "                             |  $$$$$$/          |  $$$$$$/" << endl;                                               
cout << "                              \\______/            \\______/ " << endl; 

cout << "-------------------------------------------------------------------------------------------------------------------" << endl;                                             
cout << "                                   WELCOME TO HUNGRY MUSE RESTAURANT "<<endl; 
cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
  
 //description about the game
cout << "What is your name?" << endl;;
getline(cin, name);
	
	cout << "__________________________________________________________________________________________________________________" << endl;
	cout << "| One day, after a tiring day from work you unexpectedly received a letter from your grandpa.                     |"<<endl ;
	cout << "| In the letter, he tells you that he was retiring soon and was hoping you would inherit his restaurant.          |"<< endl ;
	cout << "| After thinking hard about it for a few days, you decided that it was time you step away from your hectic        |"<< endl;
	cout << "| white-collar job and pick up your old passion, COOKING again at you grandpa's place and continue his legacy.    | "<<endl ;
	cout << "__________________________________________________________________________________________________________________" << endl;
	cout << "\nSo, let's get cooking! \n" << endl;

	cout << "Hi, " << name <<". "<<endl;
	cout << "You are now a chef embarking on a thrilling culinary adventure. Your mission is to run a successful\n";
	cout << "restaurant by preparing delicious dishes and meeting the quantity requirements for each level." <<endl ;

	cout << "As you progress through the game, the challenges will become more demanding.\n" <<endl;
	cout << "LET'S GET READY TO SATISFY HUNGRY CUSTOMERS AND SHOWCASE YOUR CULINARY PROWESS! \n";
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
  
 char ready; 
 
  //input validation before entering the game
 do 
 { 
 cout << endl;
 cout << "        ARE YOU READY TO PLAY ???"<< endl; 
 cout << "NEW GAME (N) or CONTINUE (C) or EXIT (E)"<<endl; 
 cin >> ready; 
  
 if(ready == 'N' || ready == 'n') 
 {
  	ofstream outputFile;
	outputFile.open("savedGame.txt", ios::out );
	outputFile << ""<< endl;
  
  enterGame(1,2,c);
 } 
 else if (ready == 'C' || ready == 'c') 
 { 
	continuGame(c);
 } 
 else if (ready == 'E' || ready == 'e') 
 { 
  cout <<"Game Exit..."; 
  exit(0);
 } 
 else 
  cout << "Invalid, Please Key In Again." <<endl; 
 }while(ready != 'N'|| ready != 'C'|| ready != 'E'||ready != 'n'||ready != 'c'||ready != 'e'); 
 
}

//continue game after replaying one of the level
void continuGame(combineList c)
{
	int level, qty; 
 	ifstream file;
 	
	int input; 
	file.open("savedGame.txt"); 
	int maxLvl=0;
	int maxQty=0;
	
	//find the max level played
	while(file >> level >> qty) 
	{ 
		if(level>maxLvl)
		{		
			maxLvl = level;
			maxQty = qty;
		}
	}
	
	//pass the next level info
	enterGame(maxLvl+1, maxQty+2,c);
	   
	file.close(); 
}


void enterGame (int l, int q, combineList c)
{
	
	int setQty,level;
	level = l;
	setQty = q;
	
		cout << endl;
		cout << "*******************************************************************************************************************" <<endl;
		cout << "                              		  	 LEVEL	" << level <<endl; 
		cout << "*******************************************************************************************************************" <<endl;
		
		if (level == 1)
		{
			cout<< "The scent of success is in the air, and the tables are filling up fast. Your task is to prepare a " <<endl;
			cout<< "total of 2 mouthwatering dishes to serve your eager customers. But here's the twist, you " <<endl;
			cout<< "won't be limited to a single dish! The menu boasts a delightful array of options which is " <<endl;
			cout<< "Hamburger, Pizza, Taco, Bagel and Pasta. Choose wisely to meet the quantity requirement for the customer" <<endl;
			cout<< "Note: Some of the ingredients can be repeated." << endl;
			cout<< "\nFor example, you may go for a classic crowd-pleaser, like 2 sizzling hamburgers? Or perhaps " <<endl;
			cout<< "you'll venture into unccoharted flavour territories by crafting 1 hamburger and 1 pasta." <<endl;
			cout<< "So put on your apron, sharpen your knives, and let your culinary adventure begin!" <<endl;
		}
		else
		{
				cout<< "Congratulations! You have successfully completing Level "<< (level-1) << " and made it to Level " << level << "! This is "<<endl;
				cout<< "an exciting milestone. Keep up the fantastic work, and may Level " << level << " bring you even more " <<endl;
				cout<< "excitement, challenges, and opportunities for growth. Best of luck, and enjoy the game!\n" <<endl;
				cout<< "Your task today is to prepare a total of "<< setQty << " mouthwatering dishes to serve your eager customers." <<endl;
				cout<< "Choose wisely to meet the quantity requirement for the customer" <<endl;
				cout<< "Note: Some of the ingredients can be repeated." << endl;
		}
		
		cout<< "-------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "The set quantity is " << setQty << endl;
		cout << "You can choose any of the food to reach " << setQty << " quantity."<<endl;
	
		//display food menu
		displayMenu(setQty);
		
		//menu between levels
		c= levelMenu(level, setQty,c);

}

//continue option in level menu
combineList levelCont(int currentL, int setQty, combineList c) 
{
	
	//update linked list
	c.insertLevel(currentL);
	c.insertQty(setQty);
	
	//read in txt file
	ofstream outputFile;
	outputFile.open("savedGame.txt", ios::out | ios::app);
	outputFile << currentL << " " << setQty << endl;
	cout << "Game is saved." << endl;
	outputFile.close();
	
	c.displayLevel();
	cout << endl; 
	
	//to make sure find the highest level+1
	continuGame(c);
	
	return c;
}

//restart option on level menu
combineList restartGame(combineList c)
{	
	//clear the linked list
	c.restartLevel();
	c.restartQty();
	
	//clear level and setQty(no. of order to achieved) in txt file
	ofstream outputFile;
	outputFile.open("savedGame.txt", ios::out );
	outputFile << ""<< endl;
	
	//passing default argument as restarted level is always 1
	enterGame(1,2,c);
	
	c.displayLevel();
	
	return c;
}

//Quit function
combineList quitLvl(int lvl, int qty, combineList c) 
{ 
	//insert current node into linked list before quit
	c.insertLevel(lvl);
	c.insertQty(qty);

	c.displayLevel();
	
	//save level and setQty into txt file (history game)
	ofstream outputFile;
	outputFile.open("savedGame.txt", ios::out | ios::app);
	outputFile << endl << lvl << " " << qty << endl;
	outputFile.close();
 	
 	//read price.txt to display the highest price of each level
 	ifstream file;
  	file.open("price.txt"); 
	int maxLvl=0;
	int maxP =0;
	int price, level;
	
	while(file >> level >> price) 
	{ 
		if(level>maxLvl)
		{		
			maxLvl = level;
		}
	}
	
	//use array to store highest price of each level
  	int *highestPrice= new int(maxLvl);
  	
  	ifstream file2;
  	file2.open("price.txt");
  	
  	for(int i=0;i<maxLvl;i++)
	{
			highestPrice[i]=0;
	}
		
  		for(int i=0; i<maxLvl;i++)
  		{	
  			file2.clear(); // Reset the error state of the file
        	file2.seekg(0, ios::beg);
  			while(file2 >> level >> price)
			{
				if(level==(i+1))
				{
					if(price>highestPrice[i])
					{
						highestPrice[i]=price;
					}
				}
			}	
		}
		//display highest prices
		cout << " ----------------------------------" << endl;
 		cout << "  The Highest Earning for Each Level" << endl;
 		cout << " ----------------------------------" << endl;
		for(int i=0; i<maxLvl;i++)
		{
			cout << "Level " << i+1 << " : RM " << highestPrice[i] << endl;
		}
		
		cout << endl;			 		  	
		   		
		 delete [] highestPrice;  		
		file.close();  
		cout << "Exitting Game.";
		exit(0);

 	}

//replay option in level menu
combineList replayGame(int currentL, int setQty, combineList c)
{
	int replayL;
	
	c.insertLevel(currentL);
	c.insertQty(setQty);
	
	//read in txt file
	ofstream outputFile;
	outputFile.open("savedGame.txt", ios::out | ios::app);
	outputFile << currentL << " " << setQty << endl;
	cout << "Game is saved." << endl;
	outputFile.close();
	
	c.displayLevel();
	
	//user input the level to replay (must be played level)
	cout << "Enter the level you would like to replay: "<<endl;
	cin >> replayL;
	
	//delete the replay level in linked list
	c.deleteLevel(replayL);
	c.deleteQty(replayL*2);
	
	c.displayLevel();
	
	enterGame(replayL, replayL*2,c);
	
	//insert replay level after replayed
	c.insertLevel(replayL);
	c.insertQty(replayL*2);

	c.displayLevel();
	
	return c;
}

//to direct user to specific functions after choosing level menu
combineList option(int d, int lvl, int qty, combineList c)
{	
	switch(d)
	{
		case 1:
			c=levelCont(lvl,qty,c);
			break;
		case 2:
			c=restartGame(c);
			break;
		case 3:
			c=quitLvl(lvl,qty,c);
			break;
		case 4:	
			c=replayGame(lvl,qty,c);
			break;
	}
	c.displayLevel();
	return c;
}

//level menu (menu between levels)
combineList levelMenu(int level, int qty, combineList c)
{
	int decide;
	
	if (level==1)
	{
		cout << endl;
		cout << "##### OPTIONS #####" <<endl;
		cout << "#1 Continue Game " <<endl;
		cout << "#2 Restart Game " <<endl;
		cout << "#3 Quit" <<endl;
		
		cin >> decide; 
		while (decide <1 || decide >3)
		{
			cout << "Enter Again." <<endl;
			cin >> decide;
		}
			c=option(decide, level, qty,c);
	}
	
	else
	{
		cout << endl;
		cout << "##### OPTIONS #####" <<endl;
		cout << "#1 Continue Game " <<endl;
		cout << "#2 Restart Game " <<endl;
		cout << "#3 Quit" <<endl;
		cout << "#4 Replay Succeeded Game" <<endl;
		
		cin >> decide;
		while (decide <1 || decide >4)
		{
			cout << "Enter Again." <<endl;
			cin >> decide;
		}
	
	c=option(decide, level, qty,c);
	}
	
	switch(decide)
	{
		case 1:
			c=restartGame(c);
			break;
		case 2:
			c=quitLvl(level,qty,c);
			break;
		case 3:
			c=replayGame(level,qty,c);
			break;
	}
	
	
	return c;
}

//food menu
void displayMenu(int set)
{	
	int type;
	int qty;
	int setQty = set;
	
	typeQueue q(setQty);
	foodQty f(setQty);
	
	cout << endl << "-------------------------------------" << endl;
	cout.width(20); cout << left << "Items";
	cout.width(10); cout << left << "Price(RM)";
	cout << endl << "-------------------------------------" << endl;
	cout.width(20); cout << left << "#1 Hamburger";
	cout.width(10); cout << left << "6";
	cout << endl;
	cout.width(20); cout << left << "#2 Pizza";
	cout.width(10); cout << left << "15";
	cout << endl;
	cout.width(20); cout << left << "#3 Taco";
	cout.width(10); cout << left << "8";
	cout << endl;
	cout.width(20); cout << left << "#4 Bagel";
	cout.width(10); cout << left << "7";
	cout << endl;
	cout.width(20); cout << left << "#5 Pasta";
	cout.width(10); cout << left << "12";
	cout << endl;
	cout << "-------------------------------------"<<endl;
	
	//input validation: calculate quantity
	do{
		cout << "Enter the food type: ";
  		cin >> type;
  			while (type < 1 || type > 5) 
			{
  	        	cout << "Oh so sorry! It appears that the dish you entered is not available on our menu. " 
			  			"Kindly choose a dish from the options provided in the menu.\n";
            	cout << "Enter the dishes that you wish to prepare: ";
				cin >> type;
			}
 	 	f.setFoodType(type);
 	 	
  		cout  << "Enter food quantity: ";
  		cin >> qty;
  			while (f.sumQuantity()+qty > setQty)
  			{
  				cout << "Oh No! The total quantity exceeds the target. Please revise the quantity you entered?\n";
	            cin >> qty;
			}
		f.setFoodQuantity(qty);
		
		if (f.sumQuantity() == setQty)
			break;
			
		cout << endl;
	} while (f.sumQuantity() < setQty);
	
    cout << endl;
    cout << "Target quantity reached!"; 
    cout << endl;
	 
    
    for (int i=0; i<setQty; i++)
    {
    	gameMenu(f.dequeue());
	}
		//display total price
		cout << endl;
		cout << "$$$Total Earnings: RM " << f.getPrice() << endl;
		
		ofstream outputFile;
		outputFile.open("price.txt", ios::out | ios::app);
		outputFile << (setQty/2) << " " << f.getPrice() << endl;
		cout << "Price is saved." << endl;
		outputFile.close();
}

//menu of the food type
void gameMenu(int choice)
{
	initialise init;
	init.initialiseOrder();
	
	Stack hamburger, pizza, taco, bagel, pasta;
	
	switch(choice)
	{
		case 1:
			cout << endl;
			cout << "----- HAMBURGER -----"<<endl;
			cout << "------ 8 STEPS ------" << endl;
			cout << "1. Patty\n"
				<< "2. Lettuce\n"
				<< "3. Cheddar cheese\n"
				<< "4. Egg\n"
				<< "5. Bread\n"
				<< "6. Tomato\n"
				<< "7. Sauce\n"
				<< endl;
				//stack function
				performSteps(choice, hamburger);
				break;
		case 2:
			cout << endl;
			cout << "-------- PIZZA --------"<<endl;
			cout << "------- 8 STEPS -------" << endl;
			cout << "1. Sauce\n"
				<< "2. Mozzarella Cheese\n"
				<< "3. Olive\n"
				<< "4. Pizza dough\n"
				<< "5. Pineapple\n"
				<< "6. Pepperoni\n"
				<< "7. Preheat oven\n"
				<< "8. Bake the Pizza\n"
				<< endl;
				//stack function
				performSteps(choice, pizza);
				break;
		case 3:
			cout << endl;
			cout << "--------- TACO ---------"<<endl;
			cout << "-------- 8 STEPS --------" << endl;
			cout << "1. Shredded Cheese\n"
				<< "2. Grilled Chicken\n"
				<< "3. Lettuce\n"
				<< "4. Guacamole\n"
				<< "5. Sour Cream\n"
				<< "6. Tortillas\n"
				<< "7. Taco Seasoning\n"
				<< "8. Tomatoes\n"
				<< endl;
				//stack function
				performSteps(choice, taco);
				break;
		case 4:
			cout << endl;
			cout << "---------- BAGEL ----------"<<endl;
			cout << "--------- 5 STEPS ---------" << endl;
			cout << "1. Bagel\n"
				<< "2. Almonds\n"
				<< "3. BlueBerry Cream Cheese\n"
				<< "4. Blueberry\n"
				<< endl;
				//stack function
				performSteps(choice, bagel);
				break;
		case 5:
			cout << endl;
			cout << "----------- PASTA -----------"<<endl;
			cout << "---------- 5 STEPS ----------" << endl;
			cout << "1. Meatball\n"
				<< "2. Spaghetti\n"
				<< "3. Marinara sauce\n"
				<< "4. Italian sausage\n"
				<< "5. Freshly grated Parmesan\n"
				<< endl;
				//stack function
				performSteps(choice, pasta);
				break;
		default:
            cout << "Invalid choice!" << endl;
            break;
				
	}
	
}

//compare steps entered by user with to correct answer
void performSteps(int choice, Stack &stack)
{
	initialise init;
	
	Stack hamburger, pizza, taco, bagel, pasta;
	
	int ans;
	int input;
	bool status;
	
	switch(choice)
{
case 1:
	{	
	bool allCorrect = false;
	
do
{
	init.initialiseOrder();	
	allCorrect = true;
	
	for(int i=1; i<=8; i++)
	{
		cout << "Step " << i << ": ";
		cin >> input; 
		hamburger.push(input);	
	}
	
	hamburger.reverse();

	
	for(int i=1; i<=8; i++)
	{
		init.popNum(0,ans);
		hamburger.pop(input);
		
		if(ans!= input)
		{
			cout << "Step " << i << " is wrong" << endl;
			allCorrect = false;
		}
	}
	
	if(allCorrect)
	{
		cout << "The hamburger is done! " << endl;
	}
	
}while(!allCorrect);

	break;
}

case 2:
{
	bool allCorrect = false;
	
do
{
	init.initialiseOrder();
	allCorrect = true;
	
	for(int i=1; i<=8; i++)
	{
		cout << "Step " << i << ": ";
		cin >> input; 
		pizza.push(input);	
	}
	
	pizza.reverse();

	
	for(int i=1; i<=8; i++)
	{
		init.popNum(1,ans);
		pizza.pop(input);
		
		if(ans!= input)
		{
			cout << "Step " << i << " is wrong" << endl;
			allCorrect = false;
		}
	}
	
	if(allCorrect)
	{
		cout << "The pizza is done! " << endl;
	}
	
}while(!allCorrect);

	break;
}

case 3:
{	
	bool allCorrect = false;
	
	
do
{	
	init.initialiseOrder();
	allCorrect = true;
	
	for(int i=1; i<=8; i++)
	{
		cout << "Step " << i << ": ";
		cin >> input; 
		taco.push(input);	
	}
	
	taco.reverse();

	for(int i=1; i<=8; i++)
	{
		init.popNum(2,ans);
		taco.pop(input);
		
		if(ans!= input)
		{
			cout << "Step " << i << " is wrong" << endl;
			allCorrect = false;
		}
	}
	if(allCorrect)
	{
		cout << "The taco is done! " << endl;
	}
}while(!allCorrect);

	break;
}

case 4:
{	
	bool allCorrect = false;
	
do
{	
	init.initialiseOrder();
	allCorrect = true;
	
	for(int i=1; i<=5; i++)
	{
		cout << "Step " << i << ": ";
		cin >> input; 
		bagel.push(input);	
	}
	
	bagel.reverse();

	
	for(int i=1; i<=5; i++)
	{
		init.popNum(3,ans);
		bagel.pop(input);
		
		if(ans!= input)
		{
			cout << "Step " << i << " is wrong" << endl;
			allCorrect = false;
		}
	}
	if(allCorrect)
	{
		cout << "The bagel is done! " << endl;
	}
}while(!allCorrect);

	break;	
}

case 5:
{	
	bool allCorrect = false;
	
do
{
	init.initialiseOrder();
	Stack pasta;

	allCorrect = true;

	for(int i=1; i<=5; i++)
	{
		cout << "Step " << i << ": ";
		cin >> input; 
		pasta.push(input);	
	}
	
	pasta.reverse();
	
	for(int i=1; i<=5; i++)
	{
		pasta.pop(input);
		init.popNum(4,ans);
	
		if(ans!= input)
		{
			cout << "Step " << i << " is wrong" << endl;
			allCorrect = false;
		}
	}
	
	if(allCorrect)
	{
		cout << "The pasta is done! " << endl;
	}
	
}while(!allCorrect);
	
	break;	
}
}
}
