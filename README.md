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

The Hungry Muse Restaurant is an interactive cooking game that allows players to step into the shoes of a chef. They have the freedom to choose the type and quantity of dishes they wish to prepare from a provided menu. Once the selection is made, the chef must skillfully prepare the food using the given ingredients. The key to success lies in entering the correct sequences of ingredients to create the desired dishes. Once a dish is completed, it can be served to a customer, resulting in both payment and satisfaction for the chef. Upon successfully completing all the dishes, the chef can progress to the next level, unlocking more exciting gameplay experiences. The Hungry Muse Restaurant consists of a total of five levels, each offering new challenges and opportunities for culinary enjoyment. This is because as progress through the levels, the number of order required by the customer will increase.

Each level presents a new challenge and culinary opportunity. For example, in Level 1, the scent of success fills the air as the tables quickly fill up. Your task is to prepare a total of 2 mouthwatering dishes to serve your eager customers. However, there's a twist - you won't be limited to a single dish. The menu boasts a delightful array of options, including Hamburger, Pizza, Taco, Bagel, and Pasta. Choose wisely to meet the quantity requirements for each customer, and remember that some of the ingredients can be repeated, allowing for creative combinations and flavors.

**`Storyline`**<br>
One day, after a tiring day from work, you unexpectedly received a letter from your grandpa. In the letter, he tells you that he is retiring soon and hopes that you will inherit his beloved restaurant. After thinking hard about it for a few days, you decide that it's time to step away from your hectic white-collar job and pick up your old passion: cooking. You return to your grandpa's place to continue his legacy and embark on an exciting culinary adventure. In The Hungry Muse Restaurant, you will take on the role of a budding chef, tasked with running and managing your grandpa's restaurant. Your goal is to create a thriving dining establishment and earn a reputation as a masterful chef.

Put on your apron, sharpen your knives, and let your culinary adventure begin! As you progress through the game, you'll unlock new levels and face increasing challenges. Manage your resources effectively to satisfy your customers and earn their loyalty.

Are you ready to embrace your cooking legacy, honor your grandpa's restaurant, and create a dining destination that will leave a lasting impression on customers? Step into the kitchen, fire up the stove, and let your passion for cooking shine in The Hungry Muse Restaurant. Chef!


## Game Features

1. **Cooking Gameplay**<br>
   Prepare a variety of dishes from a menu including pizza, hamburger, pasta, bagel, and taco. The player need to meet the quantity requirement for each level by 
   selecting the appropriate combination of dishes.

2. **Recipe Management**<br>
   Manage recipes for each dish, including ingredients and preparation steps. This is really crucial as it can adds depth to the gameplay as players need to      consider the correct sequence of steps to successfully prepare and serve the dish to the customer.

3. **Financial Management**<br>
   The player able to earn money based on the food they choose to prepared.The game can track the player's earnings. Throughout the game, all the money earned by the player in each level will be retained and saved into a txt file. When the player decides to `quit` the game, a comprehensive summary will be presented, highlighting the player's highest earnings achieved in each level. This summary provides a clear overview of the maximum amount of money obtained by the player at various stages throughout their gameplay. This allows the player to see their financial achievements and serves as a record of their success in accumulating wealth throughout their gameplay experience.

4. **Level Progression**<br>
   The game can feature multiple levels, each with increasing difficulty and quantity requirements. As players progress, they can unlock new level to enhance their culinary abilities.

5. **Interactive descriptive text**<br>
   This text-based interaction creates a sense of immersion and allows the player to feel involved in the game's world.
   
6. **Save and Load Functionality**<br>
   This features allows players to save their progress and resume their game at a later time. When players quit or exit the game their status will be saved. The game will store some relevant information such as completed levels and moeny earned. The player can seamlessly continue playing from where they left off. This feature is particularly useful when players need to take a break or simply want to return to the game at a later time without losing their achievements. There are few options provided in the game.

   **Before enter the game**<br>   
      - **New Game**<br>
        Start a new game. Player can start a fresh game, beginning from the first level and progressing through the game's challenges and levels.
      - **Continue**<br>
        Save progress and resume the game from where you left off. The game will read the txt file that saved player status in order to let the player resume the game that the player left off last time.
      - **Exit**<br>
        Exit the game. Close the entire gameplay.<br>
   **After enter the game**<br>
      - **Restart Game**<br>
        Restart the game from the beginning which is Level 1.<br>
      - **Continue Game**<br>
        Proceed to the next level of the game from the current level. The money earned by the player in the current level wil be saved.
      - **Replay**<br>
        Replay the same level to provide an opportunity to enhance player performance or allow player experiment with different strategies. Although the player replay the game the the p
      - **Quit**<br>
        Option to quit the game after completing the current level. The current progress and the status of the player, and the money earned by the player will be saved to the txt file.Players can also choose to quit the game after completing the current level.
   
By combining all these features, the text-based restaurant game offers an immersive experience where players can fulfil their culinary dreams, manage their own restaurant, and embark on an exciting culinary adventure.

## How to play the game 
1. Launch the game and enter the main menu.
2. In the menu, the player will have options to choose from.
   - **New Game** ：Start a new game.
   - **Continue** ：Resume the game from where the player left off last time without losing any of their accomplishments.
   - **Exit** ：Exit the game and close the game entirely. 
3. Game start, player select the **desired dishes** from the menu and **specify the quantity** required to fulfil the level's requirements.
4. Once player have made your selection, the game will provide a list of ingredients needed for the chosen dishes.
5. Player need to enter the **correct sequence** of ingredients in order to successfully prepare the dishes
6. Pay close attention to the order and be precise. If the sequence entered is incorrect, players will need to re-enter it until it is correct.
7. When player have completed a level and successfully prepared all the dishes, the player will earn revenue and **receive payment**.
8. After completing a level, you will have several options:
      - **Restart Game** : Start the whole game over again, starting from the initial level.
      - **Continue Game** : Proceed to the next level from the current level and face new culinary adventures.
      - **Replay Succeeded Game** : Replay the same level to improve your performance or try different strategies.
      - **Quit** : Exit the game and close the game entirely. <br>
      
   Note 1: The `Replay Succeeded Game` option only available in Level **2** to **5**. <br>
   Note 2: The `Continue Game` option only available in Level **1** to **4**. <br>

## How object-oriented concepts were used to develop your game 


## How linked list,stacks,queues play a role in the game 
- **Linked list**<br>
We used linked list to store 
- **Stacks**<br>
We used stacks in
- **Queues**<br>
We use Queues to save the type of dishes and the amount of each type of the dishes in to a queue. When the pl
## Screenshots of the game 

![1st screenshot](https://github.com/jiajoo-alt/Hackathon_2/assets/120643036/5b230315-2717-4d6b-a531-2fcb75bddf7f)

![2nd screenshot](https://github.com/jiajoo-alt/Hackathon_2/assets/120643036/a799a67b-f566-497b-ac31-775a2762a345)

![3rd screenshot](https://github.com/jiajoo-alt/Hackathon_2/assets/120643036/d3868a90-d906-4340-bae7-adb9465cdd2d)

## Link to the game demo video
[The Hungry Muse Demo Video](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#uploading-assets) 
