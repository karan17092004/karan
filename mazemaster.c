#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *x,int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}

int realmaze(int maze[][3])
{
    int p=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(maze[i][j]!=p && p!=9)
            {
                return 0;
                
            }
             p++;
        }
       
    }
    return 1;
}

void galatmaze(int maze[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (maze[i][j] == 0) {
                printf("   ");
            } else {
                printf("%2d ", maze[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

void move(int maze[][3], char move_d){
    if((int)move_d >= 48 && (int)move_d <= 57){
        exit(0);
    }
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (maze[i][j] == 0) {
                switch (move_d) {
                case 'U': // Up
                    if (i > 0) {
                        swap(&maze[i][j], &maze[i - 1][j]);
                    }
                    break;
                case 'D': // Down
                    if (i < 2) {
                        swap(&maze[i][j], &maze[i + 1][j]);
                    }
                    break;
                case 'L': // Left
                    if (j > 0) {
                        swap(&maze[i][j], &maze[i][j - 1]);
                    }
                    break;
                case 'R': // Right
                    if (j < 2) {
                        swap(&maze[i][j], &maze[i][j + 1]);
                    }
                    break;
                case 'F': // Right
                   printf("Thanks you playing my game Sir");
                   exit(0);
                    break;
                
                return;
            }
        }
            
            
        }
    }
}

int main(){
    int moves=25;
    int maze[3][3];
    int n=8;
    int brr[n];
    srand(time(NULL));
    
    for (int i = 0; i < n; i++) {
        brr[i] = i + 1;
    }
    
    
    // int lastind=n-1;
    for(int i=n-1;i>0;i--)
    {
       int j=rand() % (i+1);
       swap(&brr[i],&brr[j]);
        
       
    }
    int k=0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (k < n) {
                maze[i][j] = brr[k];
                k++;
            }
        }
    }
    maze[2][2]=0;

    char move_d;
    char name[20];
    system("clear");

   
     printf(" /$$      /$$                                                                         /$$                        \n| $$$    /$$$                                                                        | $$                        \n| $$$$  /$$$$  /$$$$$$  /$$$$$$$$  /$$$$$$        /$$$$$$/$$$$   /$$$$$$   /$$$$$$$ /$$$$$$    /$$$$$$   /$$$$$$ \n| $$ $$/$$ $$ |____  $$|____ /$$/ /$$__  $$      | $$_  $$_  $$ |____  $$ /$$_____/|_  $$_/   /$$__  $$ /$$__  $$\n| $$  $$$| $$  /$$$$$$$   /$$$$/ | $$$$$$$$      | $$ \ $$ \ $$  /$$$$$$$|  $$$$$$   | $$    | $$$$$$$$| $$  \__/\n| $$\  $ | $$ /$$__  $$  /$$__/  | $$_____/      | $$ | $$ | $$ /$$__  $$ \____  $$  | $$ /$$| $$_____/| $$      \n| $$ \/  | $$|  $$$$$$$ /$$$$$$$$|  $$$$$$$      | $$ | $$ | $$|  $$$$$$$ /$$$$$$$/  |  $$$$/|  $$$$$$$| $$      \n|__/     |__/ \_______/|________/ \_______/      |__/ |__/ |__/ \_______/|_______/    \___/   \_______/|__/      \n                                                                                                                 \n");

    printf("************RULE OF THIS GAME************\n");
    printf("\n1. You can move only 1 step at a time by arrow key ");
    printf("\nMove Up   : U");
    printf("\nMove Left : L");
    printf("\nMove Down : D");
    printf("\nMove Right: R");
    printf("\nYou can exit the game at any time by pressing 'F'\n\n");
     printf("Enter Your Name:");
    scanf("%s",name);

    while(!realmaze(maze) && moves > 0) {
        system("clear");
        printf("Welcome %s, Moves remaining: %d\n",name,moves);
        galatmaze(maze);
        printf("Enter your move (U/D/L/R): ");
        scanf(" %c", &move_d);

        move(maze, move_d);
        moves--;
    }

    if (realmaze(maze)!=0) {
        printf("Congratulations! You solved the Maze, %s.\n", name);
    } else {
        printf("Game over! You ran out of moves, %s.\n", name);
    }

    return 0;
}

