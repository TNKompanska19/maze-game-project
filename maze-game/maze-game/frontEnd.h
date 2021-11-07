#pragma once

void menu(int counter);
bool menuInput();
void displaySettingsMenu(int counter);
void displaySettingsMenuInput(char* player, char* trace, char* enemy, char* wall, bool* mode);
void displayNightMessage(int night);
void displayHowToPlay();
bool endGameLabel();
void gameOver(int counter);
void gameOverInput();