
# Maze Game Game

This is a simple maze game implemented in C.

## About this game 
There is a random number generated in matrix and after you you arrange in ascending order with using space and you can move U,D,L,R
atlast you want to complete this game in 25 moves and at every pressing key count as one.

## Description

The maze game allows players to navigate through a maze represented by a 3x3 grid. The objective of the game is to arrange the numbers in the grid in ascending order from 1 to 8, with an empty space (represented by 0) at the bottom right corner. Players can move the numbers around by swapping the empty space with adjacent numbers using the arrow keys (U for Up, D for Down, L for Left, R for Right). The game provides a limited number of moves, and the player must solve the maze within those moves to win.

## Features

- Random generation of the initial maze configuration
- Player name input for personalized gaming experience
- Basic ASCII art for aesthetics
- Clear instructions on how to play the game

## Instructions

1. Clone the repository: `git clone https://github.com/karan17092004/karan`
2. Navigate to the project directory: `cd maze-game`
3. Compile the code: `gcc main.c -o maze`
4. Run the executable: `./maze`

## Usage

- Upon running the executable, the player is prompted to enter their name.
- The game board will be displayed along with the number of moves remaining.
- Players can input their moves using the arrow keys (U/D/L/R) to navigate through the maze.
- If the player successfully arranges the numbers in ascending order within the given number of moves, they win. Otherwise, the game ends when the moves are exhausted.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

- ASCII art generated using [ASCII Art Studio](https://patorjk.com/software/taag/#p=display&f=Big%20Money-ne&t=Maze%20master)
- Inspired by classic maze puzzle games
## Some input and output and overlook of my game
 /$$      /$$                                                                         /$$                        
| $$$    /$$$                                                                        | $$                        
| $$$$  /$$$$  /$$$$$$  /$$$$$$$$  /$$$$$$        /$$$$$$/$$$$   /$$$$$$   /$$$$$$$ /$$$$$$    /$$$$$$   /$$$$$$ 
| $$ $$/$$ $$ |____  $$|____ /$$/ /$$__  $$      | $$_  $$_  $$ |____  $$ /$$_____/|_  $$_/   /$$__  $$ /$$__  $$
| $$  $$$| $$  /$$$$$$$   /$$$$/ | $$$$$$$$      | $$ \ $$ \ $$  /$$$$$$$|  $$$$$$   | $$    | $$$$$$$$| $$  \__/
| $$\  $ | $$ /$$__  $$  /$$__/  | $$_____/      | $$ | $$ | $$ /$$__  $$ \____  $$  | $$ /$$| $$_____/| $$      
| $$ \/  | $$|  $$$$$$$ /$$$$$$$$|  $$$$$$$      | $$ | $$ | $$|  $$$$$$$ /$$$$$$$/  |  $$$$/|  $$$$$$$| $$      
|__/     |__/ \_______/|________/ \_______/      |__/ |__/ |__/ \_______/|_______/    \___/   \_______/|__/      

************RULE OF THIS GAME************

1. You can move only 1 step at a time by arrow key 
Move Up   : U
Move Left : L
Move Down : D
Move Right: R
You can exit the game at any time by pressing 'F'

Enter Your Name: Karan

Welcome Alice, Moves remaining: 10

 1  2  3 
 4  5  6 
 7  8    

Enter your move (U/D/L/R): R

Welcome Alice, Moves remaining: 9

 1  2  3 
 4  5  6 
 7     8 

Enter your move (U/D/L/R): D

Welcome Alice, Moves remaining: 8

 1  2  3 
 4  5  6 
 7  8     

Enter your move (U/D/L/R): F

Thanks you playing my game Sir
 
 We want complete game in 25 moves 
 ## winning condition
 1 2 3
 4 5 6
 7 8 
 Congratulations! You solved the Maze, Karan.




