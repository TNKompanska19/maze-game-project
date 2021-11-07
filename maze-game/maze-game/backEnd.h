#pragma once

void resetMaze(char* maze[], int width, int height, char wall);
int isInPath(int x, int y, int width, int height);
void generatePath(int x, int y, char* maze[], int width, int height, char wall);
void generateMaze(char* maze[], int width, int height, char wall);
bool runGame(char* player, char* enemy, char* trace, char* wall, int night, bool* hardMode);
bool checkIfPossibleEnemyMove(int direction, char* maze[], int width, int height, int yEnemyPos, int xEnemyPos, char wall);