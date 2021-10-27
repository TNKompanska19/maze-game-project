#pragma once

void resetMaze(char* maze[], int width, int height, char wall);
int isInPath(int x, int y, int width, int height);
void generetePath(int x, int y, char* maze[], int width, int height, char wall);
void generateMaze(char* maze[], int width, int height, char wall);
bool runGame(char player, char trace, char wall, int night);