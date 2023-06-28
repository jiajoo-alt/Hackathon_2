# Hackathon_2

The Hungry Muse Restaurant
------------------------------------------------------------
## Table of contents ## 
- [Game Description](#Game-Description)
- [Game Features](#Game-Features)
- [How to play the game](#How-to-play-the-game)
- [How object-oriented concepts were used to develop your game](#How-object-oriented-concepts-were-used-to-develop-your-game)
- [How linked lists/stacks/queues play a role in your game](#How-linked-lists/stacks/queues-play-a-role-in-your-game)
- [Screenshots of the game](#Screenshots-of-the-game)
- [Link to the game demo video](#Link-to-the-game-demo-video)

## Game Description
**`The Hungry Muse Restaurant`**

The Hungry Muse Restaurant is an interactive cooking game that allows players to step into the shoes of a chef. They have the freedom to choose the type and quantity of dishes they wish to prepare from a provided menu. Once the selection is made, the chef must skillfully prepare the food using the given ingredients. The key to success lies in entering the correct sequences of ingredients to create the desired dishes. Once a dish is completed, it can be served to a customer, resulting in both payment and satisfaction for the chef. Upon successfully completing all the dishes, the chef can progress to the next level, unlocking more exciting gameplay experiences. The Hungry Muse Restaurant consists of a total of five levels, each offering new challenges and opportunities for culinary enjoyment. This is because as the progress through the levels, the number of orders required by the customer will increase.

Each level presents a new challenge and culinary opportunity. For example, in Level 1, the scent of success fills the air as the tables quickly fill up. Your task is to prepare a total of 2 mouthwatering dishes to serve your eager customers. However, there's a twist - you won't be limited to a single dish. The menu boasts a delightful array of options, including Hamburger, Pizza, Taco, Bagel, and Pasta. Choose wisely to meet the quantity requirements for each customer, and remember that some of the ingredients can be repeated, allowing for creative combinations and flavors.

**`Storyline`**<br>
One day, after a tiring day at work, you unexpectedly received a letter from your grandpa. In the letter, he tells you that he is retiring soon and hopes that you will inherit his beloved restaurant. After thinking hard about it for a few days, you decide that it's time to step away from your hectic white-collar job and pick up your old passion: cooking. You return to your grandpa's place to continue his legacy and embark on an exciting culinary adventure. In The Hungry Muse Restaurant, you will take on the role of a budding chef, tasked with running and managing your grandpa's restaurant. Your goal is to create a thriving dining establishment and earn a reputation as a masterful chef.

Put on your apron, sharpen your knives, and let your culinary adventure begin! As you progress through the game, you'll unlock new levels and face increasing challenges. Manage your resources effectively to satisfy your customers and earn their loyalty.

Are you ready to embrace your cooking legacy, honor your grandpa's restaurant, and create a dining destination that will leave a lasting impression on customers? Step into the kitchen, fire up the stove and let your passion for cooking shine in The Hungry Muse Restaurant. Chef!


## Game Features

1. **Cooking Gameplay**<br>
   Prepare a variety of dishes from a menu including pizza, hamburger, pasta, bagel, and taco. The player needs to meet the quantity required for each level by 
   selecting the appropriate combination of dishes.

2. **Recipe Management**<br>
   Manage recipes for each dish, including ingredients and preparation steps. This is really crucial as it can add depth to the gameplay as players need to consider the correct sequence of steps to successfully prepare and serve the dish to the customer. If the players enter the incorrect step, we will offer hints to the player by telling them which step is incorrect.

3. **Financial Management**<br>
   The player is able to earn money based on the food they choose to prepare. The game can track the player's earnings. Throughout the game, all the money earned by the player in each level will be retained and saved into a `price.txt`. When the player decides to `quit` the game, a comprehensive summary will be presented, highlighting the player's highest earnings achieved in each level. This allows the player to see their best financial achievements in each level and serves as a record throughout their gameplay experience.

5. **Level Progression**<br>
   The game can feature multiple levels, each with increasing difficulty and quantity requirements. As players progress, they can unlock new levels to enhance their culinary abilities.

6. **Interactive descriptive text**<br>
   This text-based interaction creates a sense of immersion and allows the player to feel involved in the game's world.
   
7. **Save and Load Functionality**<br>
   This feature allows players to save their progress and resume their game at a later time. Every time the player completes the level their status will keep in the linked list and `savedGame.txt`. The game will also store the money earned in the `price.txt`. The player can seamlessly continue playing from where they left off. This feature is particularly useful when players need to take a break or simply want to return to the game at a later time without losing their achievements. There are a few options provided in the game.

   **Before enter the game**<br>   
      - **New Game**<br>
        Start a new game. Players can start a fresh game, beginning from the first level and progressing through the game's challenges and levels. If there is a game history, but the player wants to start a new game, the data in the linked list and the `savedGame.txt` will be erased.
      - **Continue**<br>
        The game will read the `savedGame.txt` that saved player status in order to let the player resume the highest level that the player left off last time. If there is no game history, but the player accidentally chooses the `Continue` game, the game will automatically start from level 1. 
      - **Exit**<br>
        Exit the game. Close the entire gameplay.<br>
        
   **After enter the game**<br>
   
      - **Restart Game**<br>
        Restart the game from the beginning which is Level 1. When we restart the game, the data in the linked list and the `savedGame.txt` will be erased.<br>
      - **Continue Game**<br>
        Proceed to the next level of the game from the current level. The money earned by the player in the current level will be saved in the `price.txt` while the status of the player will be saved in the linked list and `savedGame.txt`. 
      - **Replay**<br>
        Replay the same level to provide an opportunity to enhance player performance or allow the player to experiment with different strategies. The money earned by the player in the current level will be saved in the `price.txt` while the status of the player will be saved in the linked list and `savedGame.txt`. Although the player replays the game, the previous money earned by the player in the particular level will not be erased. 
      - **Quit**<br>
        Choose to quit the game after completing the current level. The money earned by the player in the current level will be saved in the `price.txt` while the status of the player will be saved in the linked list and `savedGame.txt`. The highest earning in each level will be displayed to the player.
   
By combining all these features, the text-based restaurant game offers an immersive experience where players can fulfill their culinary dreams, manage their own restaurant, and embark on an exciting culinary adventure. 

## How to play the game 
1. Launch the game and enter the main menu.
2. In the menu, the player will have options to choose from.
   - **New Game** ：Start a new game.
   - **Continue**： Resume the game from where the player left off last time without losing any of their accomplishments.
   - **Exit**： Exit the game and close the game entirely. 
3. Game starts, the player selects the **desired dishes** from the menu and **specify the quantity** required to fulfill the level's requirements.
4. Once players have made their selection, the game will provide a list of ingredients needed for the chosen dishes.
5. Player needs to enter the **correct sequence** of ingredients in order to successfully prepare the dishes
6. Pay close attention to the order and be precise. If the sequence entered is incorrect, players will need to re-enter it until it is correct.
7. When the player has completed a level and successfully prepared all the dishes, the player will earn revenue and **receive payment**.
8. After completing a level, you will have several options:
      - **Restart Game**: Start the whole game over again, starting from the initial level.
      - **Continue Game**: Proceed to the next level from the current level and face new culinary adventures.
      - **Replay Succeeded Game**: Replay the same level to improve your performance or try different strategies.
      - **Quit**: Exit the game and close the game entirely. <br>
      
   Note: The `Replay Succeeded Game` option is only available from Level **2**.


## How object-oriented concepts were used to develop your game 
We are using aggregation and inheritance of classes in our program.<br>
The `initialise` class has a `Stack` object as a member variable. The object is used as an attribute of the `initialise` object. The `initialise` is an aggregate class. In the `initialise` class, we need to use `Stack` to create a stack array object to keep the 5-default answers which are Hamburger, Pizza, Taco, Bagel, and Pasta.<br>
The `combineList` class has a `levelList` object as a member variable. This object is used as an attribute of the `combineList` object. The `combineList` is an aggregate class because it needs to create 2 objects which are `list` and `QtyList`. The 2 objects are 2 different linked lists to store level and targeted quantity. With that `combineList` can access to the functions in `levelList.cpp`.
`foodQty` and `typeQueue` are inheritance relationships. `foodQty` is a `typeQueue`. `foodQty` is the name of the class being declared and `typeQueue` is the name of the base class it inherits from. Members of the base class (`typeQueue`) in public are inherited by the derived class. Therefore, the base class can access the member functions in the derived class. The derived class’s constructor is linked to the base class constructor (`typeQueue`) as the base class constructor requires an argument. Thus, the value is passed explicitly when creating the `foodQty` class. A function, **enqueue()** from the base class will be called in `foodQty` in order to pass 2 parameters, level and setQty to the base class. <br>
Our objects and classes can be reused in other programs too if the program involves linked lists, stack, and queue as all the basic functions are included in the class.

## How linked list, stacks, queues play a role in the game 
- **Linked list**<br>
Linked list plays an important role in storing the game level and the targeted food quantity. There are 2 linked lists in this program. The linked list is used to update new levels and target quantity when the player continues the game. A new node will be inserted in the list. When the player replays any level of the game, the current level and target quantity will be saved and when he enters the replay value, the value and corresponding target quantity will be deleted from the lists. After finished playing the game, the value and its targeted quantity will be inserted in the list again. When the player chooses to restart or quit the game, both linked lists will be deleted. New linked lists are created whenever the player enters the game again after terminating it.

- **Stacks**<br>
Stack is used to storing player input steps of the game and the default steps of every type of food. Firstly, we initialize the food’s steps reversely into a stack. Since we have 5 types of food, we will also have 5 array stacks to store the steps in integer data type. There are also 5 stacks created corresponding to 5 types of food. When the player inputs the steps of a particular food, his inputs are also been pushed into its respective stack. The values in the player input stack, as well as the default stack, will then be popped out to be used to do comparison once the player is done entering the steps.

- **Queues**<br>
We have also involved queue in our game to store the food type entered by the player. We have a session where the player can choose the desired combination of types of food with different quantities as long as it hits the targeted quantity of the level. Every time the player enters the food type and its quantity, the values will be passed to functions in `foodQty`, then to the **enqueue()** function in `typeQueue` to enqueue into the queue. Thus, the values are stored in a sequence as how the user input. The game is started after the sum of quantity hits the targeted quantity. The values will be dequeued accordingly and be passed to the other function to continue the game.

## Screenshots of the game 
![1st screenshot](https://github.com/jiajoo-alt/Hackathon_2/assets/120643036/b4a50993-0ab5-4e85-8e7e-1473bee5c770)

![2nd screenshot](https://github.com/jiajoo-alt/Hackathon_2/assets/120643036/2e64fe1c-63fa-424f-b26e-b45528feafc8)

![3rd screenshot](https://github.com/jiajoo-alt/Hackathon_2/assets/120643036/7387d985-eee8-4f87-b9f0-546b3243d47e)

## Link to the game demo video
[The Hungry Muse Demo Video](https://youtu.be/mABC599WFpA) 
