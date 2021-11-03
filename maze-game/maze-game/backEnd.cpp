#include <iostream>
#include <iomanip>
#include <conio.h>
#include <Windows.h>

#include "backEnd.h"
#include "frontEnd.h"

void resetMaze(char* maze[], int width, int height, char wall) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            maze[i][j] = wall;
        }
    }
}

int isInPath(int x, int y, int width, int height) {
    if (x >= 0 && x < width && y >= 0 && y < height) return true;
    return false;
}

void generetePath(int x, int y, char* maze[], int width, int height, char wall) {
    maze[x][y] = ' ';

    int direction[4] = { 0, 1, 2, 3 };

    for (int i = 0; i < 4; ++i) {
        int r = rand() & 3;
        int temp = direction[r];
        direction[r] = direction[i];
        direction[i] = temp;
    }

    for (int i = 0; i < 4; ++i) {
        int nextX = 0, nextY = 0;

        switch (direction[i]) {
        case 0: nextY = -1; break;
        case 1: nextX = 1; break;
        case 2: nextY = 1; break;
        case 3: nextX = -1; break;
        }

        int x2 = x + (nextX * 2);
        int y2 = y + (nextY * 2);

        if (isInPath(x2, y2, width, height)) {
            if (maze[x2][y2] == wall) {
                maze[x2 - nextX][y2 - nextY] = ' ';
                generetePath(x2, y2, maze, width, height, wall);
            }
        }
    }
    maze[1][0] = ' ';
    maze[width - 2][height - 1] = ' ';
}

void generateMaze(char* maze[], int width, int height, char wall) {
    srand(time(NULL));
    resetMaze(maze, width, height, wall);
    generetePath(1, 1, maze, width, height, wall);
}

bool runGame(char player, char trace, char wall, int night) {
    system("cls");

    int width;
    int height;
    
    switch (night) {
    case 1: {
        width = 15;
        height = 15;
        break;
    }
    case 2: {
        width = 21;
        height = 21;
        break;
    }
    case 3: {
        width = 25;
        height = 25;
        break;
    }
    case 4: {
        width = 31;
        height = 31;
        break;
    }
    case 5: {
        width = 35;
        height = 35;
        break;
    }
    }

    int yPos = 1, xPos = 0;
    int spacing = 100 - width;
    char** maze = new char* [height];
    for (int i = 0; i < height; i++) maze[i] = new char[width];

    displayNightMessage(night);

    std::cout << "\033[0;32m";
    generateMaze(maze, height, width, wall);
    
    maze[1][0] = player;

    for (int i = 0; i < height; i++) {
        std::cout << std::setw(spacing);
        for (int j = 0; j < width; j++) {
            std::cout << maze[i][j] << " ";
        }
        std::cout << std::endl;
    }

    while ((yPos != height - 2 || xPos != width - 1)) {
        unsigned char ch = _getch();

        if (ch == 224) {
            unsigned char ch2 = _getch();

            switch (ch2) {
            case 72: {
                if (yPos != 0 && maze[yPos - 1][xPos] != wall) {
                    maze[yPos][xPos] = trace;
                    maze[--yPos][xPos] = player;
                }
            } break;
            case 75: {
                if (xPos != 0 && maze[yPos][xPos - 1] != wall) {
                    maze[yPos][xPos] = trace;
                    maze[yPos][--xPos] = player;
                }
            } break;
            case 77: {
                if (xPos != width - 1 && maze[yPos][xPos + 1] != wall) {
                    maze[yPos][xPos] = trace;
                    maze[yPos][++xPos] = player;
                }
            } break;
            case 80: {
                if (yPos != height - 1 && maze[yPos + 1][xPos] != wall) {
                    maze[yPos][xPos] = trace;
                    maze[++yPos][xPos] = player;
                }
            } break;
            }
        }
        else if (ch == 27) {
            menuInput();
        }
        
        system("cls");
        
        displayNightMessage(night);

        std::cout << "\033[0;32m";
        for (int i = 0; i < height; i++) {
            std::cout << std::setw(spacing);
            for (int j = 0; j < width; j++) {
                std::cout << maze[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    for (int i = 0; i < height; i++) {
        delete[] maze[i];
    }

    return 0;
}