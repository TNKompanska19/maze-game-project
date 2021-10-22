#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13

void menu(int counter) {
    cout << "\n \n";
    cout << setw(123) << " =================================================================================\n";
    cout << "                                        |                                                                                 |\n";
    cout << "                                        |         /////          /////   ////////////    //////     ///   ///        ///  |\n";
    cout << "                                        |        /// ///      /// ///   ///             /// ///    ///   ///        ///   |\n";
    cout << "                                        |       ///  ///    ///  ///   ///             ///  ///   ///   ///        ///    |\n";
    cout << "                                        |      ///   ///  ///   ///   ////////////    ///   ///  ///   ///        ///     |\n";
    cout << "                                        |     ///    //////    ///   ///             ///    /// ///   ///        ///      |\n";
    cout << "                                        |    ///              ///   ///             ///     //////   ///        ///       |\n";
    cout << "                                        |   ///              ///   ////////////    ///      /////   //////////////        |\n";
    cout << "                                        |                                                                                 |\n";
    cout << setw(124) << "=================================================================================\n\n";
    cout << setw(153) << "________________________________________________________________________________________________________________________________________\n";
    cout << "               |   |       *       *       *       *       *       *       *       *       *       *   _________________    *       *     *       * |   |\n";
    cout << "               |   |  * *     * *     * *     * *     * *     * *     * *     * *     * *     * *     |  _____________  |      * *     *     * *    |   |\n";
    cout << "               |   |       *       *       *       *       *       *       *     __________        *  | |  *       *  | |___________________________|   |\n";
    cout << "               |   |__________     *       *       *       *       *       *    |  ______  |       *  | |  *       *  |  ___________________________    |\n";
    cout << "               |    ________  | *      *  _______________ * *   ___________  * *| |      | |__________| |     * *     | | *      * *     * *     * *|   |\n";
    cout << "               |   |   *    | |    *     |  ___________  |     |  ______   |____| |   *  |______________|  *       *  | |     *       *       *     |   |\n";
    cout << "               |   |*     * | |    *     | |  *        | |_____| |      |_________|   *       *       *    *       *  | | *      * *     * *     * *|   |\n";
    cout << "               |   |*     * | |__________| |     *  *  |_________| *     * *     * *     * *     * *          * *     | |_________    *       *     |   |\n";
    cout << "               |   |   *    |______________|  *        * _____________________________________________________     *  |_________  |   *       *     |   |\n";
    cout << "               |   |   *       *      *       *        *|                                                     |    *       *    | |*     * *     * *|   |\n";
    cout << "               |   |________________________     *  *   |      C  H  O  O  S  E   A N   O  P  T  I  O  N      | *     * *     * | |   *       *     |   |\n";
    cout << "               |    ______________________  | *        *|                                                     |    *       *    | |   *       *     |   |\n";
    if (counter == 1) {
        
        cout << "               |   |        *       *     | | *        *|                                                     |    *       *    | |_________________|   |\n";
        cout << "               |   |   * *     * *     * *| |    *  *   |   --------       P L A Y  G A M E      ---------    | *     * *     * |___________________    |\n";
        cout << "               |   |        *       *     | | *        *|                                                     |    *       *       *        *       |   |\n";
        cout << "               |   |*       *       *     | | *        *|                                                     |    *       *       *        *       |   |\n";
        cout << "               |   |   * *     * *     * *| |    *  *   |                H O W  T O  P L A Y                  |_________________       * *     * *  |   |\n";
        cout << "               |   |*       *       *     | |    *  *   |                                                     |_______________  |   *       *       |   |\n";
        cout << "               |   |*       *       *     | |___________|                                                     |    *       *  | |   *       *       |   |\n";
        cout << "               |   |   * *     * *     * *|_____________|                     E X I T                         | *     * *     | |*     * *     * *  |   |\n";
        cout << "               |   |*       *       *       *      *    |                                                     |     __________| |___________________|   |\n";
        cout << "               |   |*       *       *       *      *    |_____________________________________________________|    |  ______________________________    |\n";

    }
    else if (counter == 2) {
        cout << "               |   |        *       *     | | *        *|                                                     |    *       *    | |_________________|   |\n";
        cout << "               |   |   * *     * *     * *| |    *  *   |                  P L A Y  G A M E                   | *     * *     * |___________________    |\n";
        cout << "               |   |        *       *     | | *        *|                                                     |    *       *       *        *       |   |\n";
        cout << "               |   |*       *       *     | | *        *|                                                     |    *       *       *        *       |   |\n";
        cout << "               |   |   * *     * *     * *| |    *  *   |   --------     H O W  T O  P L A Y     --------     |_________________       * *     * *  |   |\n";
        cout << "               |   |*       *       *     | |    *  *   |                                                     |_______________  |   *       *       |   |\n";
        cout << "               |   |*       *       *     | |___________|                                                     |    *       *  | |   *       *       |   |\n";
        cout << "               |   |   * *     * *     * *|_____________|                     E X I T                         | *     * *     | |*     * *     * *  |   |\n";
        cout << "               |   |*       *       *       *      *    |                                                     |     __________| |___________________|   |\n";
        cout << "               |   |*       *       *       *      *    |_____________________________________________________|    |  ______________________________    |\n";
    }
    else if (counter == 3) {
        cout << "               |   |        *       *     | | *        *|                                                     |    *       *    | |_________________|   |\n";
        cout << "               |   |   * *     * *     * *| |    *  *   |                  P L A Y  G A M E                   | *     * *     * |___________________    |\n";
        cout << "               |   |        *       *     | | *        *|                                                     |    *       *       *        *       |   |\n";
        cout << "               |   |*       *       *     | | *        *|                                                     |    *       *       *        *       |   |\n";
        cout << "               |   |   * *     * *     * *| |    *  *   |                H O W  T O  P L A Y                  |_________________       * *     * *  |   |\n";
        cout << "               |   |*       *       *     | |    *  *   |                                                     |_______________  |   *       *       |   |\n";
        cout << "               |   |*       *       *     | |___________|                                                     |    *       *  | |   *       *       |   |\n";
        cout << "               |   |   * *     * *     * *|_____________|   --------          E X I T            --------     | *     * *     | |*     * *     * *  |   |\n";
        cout << "               |   |*       *       *       *      *    |                                                     |     __________| |___________________|   |\n";
        cout << "               |   |*       *       *       *      *    |_____________________________________________________|    |  ______________________________    |\n";
    }
    cout << "               |   |   * *     * *     * *     * *     * *     * *     * *     * *     * *     * *| |             *| |  * *     * *     * *    * *  |   |\n";
    cout << "               |   |_______________         *       *       * ____________  *       *       ______| |              | |                              |   |\n";
    cout << "               |    _____________  |        *       *       *|  ________  | *       *      |  ______|     *       *| |     *       *       *       *|   |\n";
    cout << "               |   |   * *     * | |   * *     * *     * *   | |  * *   | |________________| | *     * *     * *   | | * *     * *     * *     * *  |   |\n";
    cout << "               |   |*       *    | |*       *       *        | |       *|____________________|       *       *     | | *       *       *       *    |   |\n";
    cout << "               |   |*       *    | |_________________________| |___________________________________________________| |    *       *       *       * |   |\n";
    cout << "               |   |   * *     * |___________________________________________________________________________________|     * *     * *              |   |\n";
    cout << "               |________________________________________________________________________________________________________________________________________|\n";
   

}

void resetMaze(char* grid[], int width, int height, char wall) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            grid[i][j] = wall;
        }
    }
}

int isInPath(int x, int y, int width, int height) {
    if (x >= 0 && x < width && y >= 0 && y < height) return true;
    return false;
}

void visit(int x, int y, char* grid[], int width, int height, char wall) {
    grid[x][y] = ' ';

    int dirs[4] = { 0, 1, 2, 3 };

    for (int i = 0; i < 4; ++i) {
        int r = rand() & 3;
        int temp = dirs[r];
        dirs[r] = dirs[i];
        dirs[i] = temp;
    }

    for (int i = 0; i < 4; ++i) {
        int dx = 0, dy = 0;

        switch (dirs[i]) {
        case 0: dy = -1; break;
        case 1: dx = 1; break;
        case 2: dy = 1; break;
        case 3: dx = -1; break;
        }

        int x2 = x + (dx * 2);
        int y2 = y + (dy * 2);

        if (isInPath(x2, y2, width, height)) {
            if (grid[x2][y2] == wall) {
                grid[x2 - dx][y2 - dy] = ' ';
                visit(x2, y2, grid, width, height, wall);
            }
        }
    }
    grid[1][0] = ' ';
    grid[width - 2][height - 1] = ' ';
}

void generateMaze(char* grid[], int width, int height, char wall) {
    srand(time(0));
    resetMaze(grid, width, height, wall);
    visit(1, 1, grid, width, height, wall);
}

bool menuInput() {
    int choice;
    int counter = 1;

    int height = 15, width = 15;

    char wall = '#';

    char** maze = new char* [height];
    for (int i = 0; i < height; i++) maze[i] = new char[width];

    menu(counter);
    while (true)
    {
        switch ((choice = _getch())) {
        case KEY_UP:
        {
            if (counter == 1) counter = 4;
            counter--;
            system("CLS");
            menu(counter);
        }// key up
        break;
        case KEY_DOWN:
        {
            if (counter == 3)  counter = 0;
            counter++;
            system("CLS");
            menu(counter);
        }// key down
        break;
        case ENTER: {
            if (counter == 1) {
                system("cls");
                generateMaze(maze, height, width, wall);
                for (int i = 0; i < height; i++) {
                    for (int j = 0; j < width; j++) {
                        cout << maze[i][j] << " ";
                    }
                    cout << endl;
                }
                for (int i = 0; i < height; i++) {
                    delete[] maze[i];
                }
            }
            if (counter == 2)cout << "rules";
            if (counter == 3)return 0;
        }
                  break;
        }// enter
    }
}
int main()
{
    do {
        menuInput();
    } while (menuInput());
   
}