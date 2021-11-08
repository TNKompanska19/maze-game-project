#include <iostream>
#include <iomanip>
#include <conio.h>
#include <Windows.h>

#include "backEnd.h"
#include "frontEnd.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13
#define ESCAPE 27

// Fills the maze array with walls
void resetMaze(char* maze[], int width, int height, char wall)
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            maze[i][j] = wall;
        }
    }
}

// Checks if the maze generating coordinates are within the width and the height of the maze
int isInPath(int x, int y, int width, int height)
{
    if (x >= 0 && x < width && y >= 0 && y < height) return true;
    return false;
}

// Function to generate maze
void generatePath(int x, int y, char* maze[], int width, int height, char wall)
{
    maze[x][y] = ' '; // Initializes current position with empty space

    int direction[4] = { 0, 1, 2, 3 }; // Initializes directions

    for (int i = 0; i < 4; ++i) // Shuffles directions
    {
        int r = rand() & 3;
        int temp = direction[r];
        direction[r] = direction[i];
        direction[i] = temp;
    }

    for (int i = 0; i < 4; ++i)
    {
        int nextX = 0, nextY = 0; // Variables for the coordinates next to the current possition

        switch (direction[i]) // Assigns coordinates to the variables
        {
        case 0: nextY = -1; break;
        case 1: nextX = 1; break;
        case 2: nextY = 1; break;
        case 3: nextX = -1; break;
        }

        int x2 = x + (nextX * 2); // Converts x and nextX to one variable
        int y2 = y + (nextY * 2);

        if (isInPath(x2, y2, width, height)) // Checks if the mcoordinates match the width and the height
        {
            if (maze[x2][y2] == wall)
            {
                maze[x2 - nextX][y2 - nextY] = ' '; // Makes the coresponding coordinates an empty space
                generatePath(x2, y2, maze, width, height, wall); // Recursively calls teh function
            }
        }
    }
    maze[1][0] = ' '; // Start of the maze
    maze[width - 2][height - 1] = ' '; // End of the maze
}

// Assigns a generated maze to a dynamic array
void generateMaze(char* maze[], int width, int height, char wall)
{
    srand(time(NULL));
    resetMaze(maze, width, height, wall);
    generatePath(1, 1, maze, width, height, wall);
}

// Checks to which from the four possible directions teh enemy can go
bool checkIfPossibleEnemyMove(int direction, char* maze[], int width, int height, int yEnemyPos, int xEnemyPos, char wall)
{
    if (direction == 0 && maze[yEnemyPos - 1][xEnemyPos] != wall) return true;
    if (direction == 1 && maze[yEnemyPos][xEnemyPos + 1] != wall && yEnemyPos != width - 2 && xEnemyPos != height - 1) return true;
    if (direction == 2 && maze[yEnemyPos + 1][xEnemyPos] != wall) return true;
    if (direction == 3 && maze[yEnemyPos][xEnemyPos - 1] != wall && yEnemyPos != 1 && xEnemyPos != 0) return true;
    return false;
}

bool runGame(char* player, char* enemy, char* trace, char* wall, int night, bool* mode)
{
    system("cls");

    int width;
    int height;

    switch (night) // Assigns dimensions to the maze based on the night (level)
    {
    case 1:
    {
        width = 15;
        height = 15;
        break;
    }
    case 2:
    {
        width = 21;
        height = 21;
        break;
    }
    case 3:
    {
        width = 25;
        height = 25;
        break;
    }
    case 4:
    {
        width = 31;
        height = 31;
        break;
    }
    case 5:
    {
        width = 35;
        height = 35;
        break;
    }
    }

    int yPos = 1, xPos = 0; // Player coordinates
    int yEnemyPos = width - 2, xEnemyPos = height - 1; // Enemy coordinates

    int spacing = 100 - width;

    char** maze = new char* [height]; // Declaring the array where the maze will be stored
    for (int i = 0; i < height; i++) maze[i] = new char[width];

    generateMaze(maze, height, width, *wall); // Initializing the array with a maza

    maze[1][0] = *player;
    if (*mode) maze[width - 2][height - 1] = *enemy;

    displayNightMessage(night);

    std::cout << "\033[0;32m"; // Dispalys purple colour
    for (int i = 0; i < height; i++) // Displays the maze
    {
        std::cout << std::setw(spacing);
        for (int j = 0; j < width; j++)
        {
            if (maze[i][j] == *player || maze[i][j] == *trace)
            {
                std::cout << " " << "\033[0m" << maze[i][j] << "\033[0;32m"; // Displays the player and the trace in white
            }
            else if (maze[i][j] == *enemy && *mode)
            {
                std::cout << " " << "\033[0;31m" << maze[i][j] << "\033[0;32m"; // Displeys the enemy in red
            }
            else std::cout << " " << maze[i][j]; // Displays wall
        }
        std::cout << std::endl;
    }

    while ((yPos != height - 2 || xPos != width - 1)) // Loops while player hasnt finished the maze
    {

        int direction[4] = { 0, 1, 2, 3 }; // Declarates directions and inializes them
        int index = 1;

        for (int i = 0; i < 4; ++i) // Shuffles directions
        {
            int r = rand() & 3;
            int temp = direction[r];
            direction[r] = direction[i];
            direction[i] = temp;
        }
        for (int i = 0; i < 4; i++)
        {
            if (checkIfPossibleEnemyMove(direction[i], maze, height, width, yEnemyPos, xEnemyPos, *wall) && *mode) // Checks if direction is possible
            {
                index = i;
                break;
            }
        }


        unsigned char ch = _getch();

        if (ch == 224) 
        {
            unsigned char ch2 = _getch();

            switch (ch2) // Moves the player
            {
            case KEY_UP:
            {
                if (yPos != 0 && maze[yPos - 1][xPos] != *wall)
                {
                    maze[yPos][xPos] = *trace;
                    maze[--yPos][xPos] = *player;
                }
            } break;
            case KEY_LEFT:
            {
                if (xPos != 0 && maze[yPos][xPos - 1] != *wall)
                {
                    maze[yPos][xPos] = *trace;
                    maze[yPos][--xPos] = *player;
                }
            } break;
            case KEY_RIGHT:
            {
                if (xPos != width - 1 && maze[yPos][xPos + 1] != *wall)
                {
                    maze[yPos][xPos] = *trace;
                    maze[yPos][++xPos] = *player;
                }
            } break;
            case KEY_DOWN:
            {
                if (yPos != height - 1 && maze[yPos + 1][xPos] != *wall)
                {
                    maze[yPos][xPos] = *trace;
                    maze[++yPos][xPos] = *player;
                }
            } break;
            }
        }
        else if (ch == ESCAPE) // Returns back to menu
        {
            menuInput();
        }

        if (*mode)
        {
            if (direction[index] == 0) // Moves the enemy
            {
                if (maze[yEnemyPos][xEnemyPos] != *player) maze[yEnemyPos][xEnemyPos] = ' ';
                maze[--yEnemyPos][xEnemyPos] = *enemy;
            }
            else if (direction[index] == 1)
            {
                if (maze[yEnemyPos][xEnemyPos] != *player) maze[yEnemyPos][xEnemyPos] = ' ';
                maze[yEnemyPos][++xEnemyPos] = *enemy;
            }
            else if (direction[index] == 2)
            {
                if (maze[yEnemyPos][xEnemyPos] != *player) maze[yEnemyPos][xEnemyPos] = ' ';
                maze[++yEnemyPos][xEnemyPos] = *enemy;
            }
            else if (direction[index] == 3)
            {
                if (maze[yEnemyPos][xEnemyPos] != *player) maze[yEnemyPos][xEnemyPos] = ' ';
                maze[yEnemyPos][--xEnemyPos] = *enemy;
            }
        }

        system("cls");

        if (*mode)
        {
            // Checks if you collide with the enemy
            if ((yPos == yEnemyPos && xPos == xEnemyPos) || (yPos == yEnemyPos + 1 && xPos == xEnemyPos) || (yPos == yEnemyPos - 1 && xPos == xEnemyPos) || (xPos == xEnemyPos + 1 &&yPos == yEnemyPos) || (xPos == xEnemyPos - 1&&yPos == yEnemyPos))
            {
                gameOverInput();
                std::cin.get();
                menuInput();
            }
        }
        displayNightMessage(night);

        std::cout << "\033[0;32m";
        for (int i = 0; i < height; i++)
        {
            std::cout << std::setw(spacing);
            for (int j = 0; j < width; j++)
            {
                if (maze[i][j] == *player || maze[i][j] == *trace)
                {
                    std::cout << " " << "\033[0m" << maze[i][j] << "\033[0;32m";
                }
                else if (maze[i][j] == *enemy && *mode)
                {
                    std::cout << " " << "\033[0;31m" << maze[i][j] << "\033[0;32m";
                }
                else std::cout << " " << maze[i][j];
            }
            std::cout << std::endl;
        }
    }

    for (int i = 0; i < height; i++) // Frees the memory of the maze
    {
        delete[] maze[i];
    }

    return 0;
}