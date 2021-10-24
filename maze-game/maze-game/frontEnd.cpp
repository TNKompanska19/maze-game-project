#include <iostream>
#include <iomanip>
#include <conio.h>

#include "frontEnd.h"
#include "backEnd.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13

void menu(int counter) {
    std::cout << "\033[1;31m";
    std::cout << "\n \n \n";
    std::cout << "              /////////////////  ///       ///  ////////////     /////          /////  ///////////  ////  /////////////  ////////////     /////////////  ///       ///  //////     ///  //////     ///  ////////////  ///////////// \n";
    std::cout << "                    ///         ///       ///  ///              /// ///      /// ///  ///     ///  ////            ///  ///              ///       ///  ///       ///  /// ///    ///  /// ///    ///  ///           ///       ///  \n";
    std::cout << "                   ///         ///       ///  ///              ///  ///    ///  ///  ///     ///  ////          ///    ///              ///       ///  ///       ///  ///  ///   ///  ///  ///   ///  ///           ///       ///   \n";
    std::cout << "                  ///         /////////////  ///////////      ///   ///  ///   ///  ///////////  ////        ///      ////////////     ///////////    ///       ///  ///   ///  ///  ///   ///  ///  ////////////  ///////////       \n";
    std::cout << "                 ///         ///       ///  ///              ///    //////    ///  ///     ///  ////      ///        ///              ///      ///   ///       ///  ///    /// ///  ///    /// ///  ///           ///      ///      \n";
    std::cout << "                ///         ///       ///  ///              ///              ///  ///     ///  ////    ///          ///              ///      ///   ///       ///  ///     //////  ///     //////  ///           ///      ///       \n";
    std::cout << "               ///         ///       ///  ////////////     ///              ///  ///     ///  ////   ////////////  ////////////     ///      ///   /////////////  ///      /////  ///      /////  ////////////  ///      ///        \n\n\n";
    std::cout << std::setw(186) << " __________________________________________________________________________________________________________________________________\n";
    std::cout << "                                                      |  |     *       *       *       *       *       *       *       *       *       *   _________________    *       *     *       |  |\n";
    std::cout << "                                                      |  |* *     * *     * *     * *     * *     * *     * *     * *     * *     * *     |  _____________  |      * *     *     * *  |  |\n";
    std::cout << "                                                      |  |     *       *       *       *       *       *       *     __________        *  | |  *       *  | |_________________________|  |\n";
    std::cout << "                                                      |  |________     *       *       *       *       *       *    |  ______  |       *  | |  *       *  |  _________________________   |\n";
    std::cout << "                                                      |   ________| *      *  _______________ * *   ___________  * *| |      | |__________| |     * *     | | *      * *     * *     *|  |\n";
    std::cout << "          \\\\\\\\\\\\\          ||||||          ///////     |  |   *  | |    *     |  ___________  |     |  ______   |____| |   *  |______________|  *       *  | |     *       *       *   |  |\n";
    std::cout << "           \\\\\\\\\\\\\         ||||||         ///////      |  |*   * | |    *     | |  *        | |_____| |      |_________|   *       *       *    *       *  | | *      * *     * *     *|  |                                             ////\n";
    std::cout << "            \\\\\\\\\\\\\        ||||||        ///////       |  |*   * | |__________| |     *  *  |_________| *     * *     * *     * *     * *          * *     | |_________    *       *   |  |                                            ////\n";
    std::cout << "             \\\\\\\\\\\\\       ||||||       ///////        |  | *    |______________|  *        * _____________________________________________________     *  |_________  |   *       *   |  |                           ////////        ////\n";
    std::cout << "              \\\\\\\\\\\\\      ||||||      ///////         |  |   *     *      *       *        *|                                                     |    *       *    | |*     * *     *|  |                         ///////////      ////\n";
    std::cout << "               \\\\\\\\\\\\\     ||||||     ///////          |  |______________________     *  *   |      C  H  O  O  S  E   A N   O  P  T  I  O  N      | *     * *     * | |   *       *   |  |                        ///////////      ////\n";
    std::cout << "                \\\\\\\\\\\\\    ||||||    ///////           |   ____________________  | *        *|                                                     |    *       *    | |   *       *   |  |                         ////////       ////\n";
    if (counter == 1) {

        std::cout << "                 \\\\\\\\\\\\\   ||||||   ///////            |  |      *       *     | | *        *|                                                     |    *       *    | |_______________|  |                          ////         ////\n";
        std::cout << "                  \\\\\\\\\\\\\  ||||||  ///////             |  | * *     * *     * *| |    *  *   |   --------       P L A Y  G A M E     --------      | *     * *     * |_________________   |              ////////////////////////////\n";
        std::cout << "                   \\\\\\\\\\\\\ |||||| ///////              |  |      *       *     | | *        *|                                                     |    *       *       *        *     |  |             ////    //////////// \n";
        std::cout << "                    \\\\\\\\\\\\\||||||///////               |  |      *       *     | | *        *|                                                     |    *       *       *        *     |  |            ////    ////////////\n";
        std::cout << "       ||||||||||||||||||||||||||||||||||||||||||||   |  | * *     * *     * *| |    *  *   |                H O W  T O  P L A Y                  |_________________       * *     * *|  |           ////    ////////////\n";
        std::cout << "       ||||||||||||||||||||||||||||||||||||||||||||   |  |      *       *     | |    *  *   |                                                     |_______________  |   *       *     |  |          ////    ////////////\n";
        std::cout << "                    //////||||||\\\\\\\\\\\\\                |  |      *       *     | |___________|                                                     |    *       *  | |   *       *     |  |         ////    ////////////\n";
        std::cout << "                   ////// |||||| \\\\\\\\\\\\\               |  | * *     * *     * *|_____________|                      E X I T                        | *     * *     | |*     * *     * *|  |        ////    ////////////\n";
        std::cout << "                  //////  ||||||  \\\\\\\\\\\\\              |  |      *       *       *      *    |                                                     |     __________| |_________________|  |       ////   //////////////    \n";
        std::cout << "                 //////   ||||||   \\\\\\\\\\\\\             |  |      *       *       *      *    |_____________________________________________________|    |  ____________________________   |             //////   \\\\\\\\\\\\\n";

    }
    else if (counter == 2) {
        std::cout << "                 \\\\\\\\\\\\\   ||||||   ///////            |  |      *       *     | | *        *|                                                     |    *       *    | |_______________|  |                          ////         ////\n";
        std::cout << "                  \\\\\\\\\\\\\  ||||||  ///////             |  | * *     * *     * *| |    *  *   |                  P L A Y  G A M E                   | *     * *     * |_________________   |              ////////////////////////////\n";
        std::cout << "                   \\\\\\\\\\\\\ |||||| ///////              |  |      *       *     | | *        *|                                                     |    *       *       *        *     |  |             ////    //////////// \n";
        std::cout << "                    \\\\\\\\\\\\\||||||///////               |  |      *       *     | | *        *|                                                     |    *       *       *        *     |  |            ////    ////////////\n";
        std::cout << "       ||||||||||||||||||||||||||||||||||||||||||||   |  | * *     * *     * *| |    *  *   |   --------     H O W  T O  P L A Y    --------      |_________________       * *     * *|  |           ////    ////////////\n";
        std::cout << "       ||||||||||||||||||||||||||||||||||||||||||||   |  |      *       *     | |    *  *   |                                                     |_______________  |   *       *     |  |          ////    ////////////\n";
        std::cout << "                    //////||||||\\\\\\\\\\\\\                |  |      *       *     | |___________|                                                     |    *       *  | |   *       *     |  |         ////    ////////////\n";
        std::cout << "                   ////// |||||| \\\\\\\\\\\\\               |  | * *     * *     * *|_____________|                      E X I T                        | *     * *     | |*     * *     * *|  |        ////    ////////////\n";
        std::cout << "                  //////  ||||||  \\\\\\\\\\\\\              |  |      *       *       *      *    |                                                     |     __________| |_________________|  |       ////   //////////////    \n";
        std::cout << "                 //////   ||||||   \\\\\\\\\\\\\             |  |      *       *       *      *    |_____________________________________________________|    |  ____________________________   |             //////   \\\\\\\\\\\\\n";
    }
    else if (counter == 3) {
        std::cout << "                 \\\\\\\\\\\\\   ||||||   ///////            |  |      *       *     | | *        *|                                                     |    *       *    | |_______________|  |                          ////         ////\n";
        std::cout << "                  \\\\\\\\\\\\\  ||||||  ///////             |  | * *     * *     * *| |    *  *   |                  P L A Y  G A M E                   | *     * *     * |_________________   |              ////////////////////////////\n";
        std::cout << "                   \\\\\\\\\\\\\ |||||| ///////              |  |      *       *     | | *        *|                                                     |    *       *       *        *     |  |             ////    //////////// \n";
        std::cout << "                    \\\\\\\\\\\\\||||||///////               |  |      *       *     | | *        *|                                                     |    *       *       *        *     |  |            ////    ////////////\n";
        std::cout << "       ||||||||||||||||||||||||||||||||||||||||||||   |  | * *     * *     * *| |    *  *   |                H O W  T O  P L A Y                  |_________________       * *     * *|  |           ////    ////////////\n";
        std::cout << "       ||||||||||||||||||||||||||||||||||||||||||||   |  |      *       *     | |    *  *   |                                                     |_______________  |   *       *     |  |          ////    ////////////\n";
        std::cout << "                    //////||||||\\\\\\\\\\\\\                |  |      *       *     | |___________|                                                     |    *       *  | |   *       *     |  |         ////    ////////////\n";
        std::cout << "                   ////// |||||| \\\\\\\\\\\\\               |  | * *     * *     * *|_____________|   --------           E X I T          --------      | *     * *     | |*     * *     * *|  |        ////    ////////////\n";
        std::cout << "                  //////  ||||||  \\\\\\\\\\\\\              |  |      *       *       *      *    |                                                     |     __________| |_________________|  |       ////   //////////////    \n";
        std::cout << "                 //////   ||||||   \\\\\\\\\\\\\             |  |      *       *       *      *    |_____________________________________________________|    |  ____________________________   |             //////   \\\\\\\\\\\\\n";
    }
    std::cout << "                //////    ||||||    \\\\\\\\\\\\\            |  | * *     * *     * *     * *     * *     * *     * *     * *     * *     * *| |             *| |  * *     * *     * *    * *|  |            //////     \\\\\\\\\\\\\n";
    std::cout << "               //////     ||||||     \\\\\\\\\\\\\           |  |_____________         *       *       * ____________  *       *       ______| |              | |                            |  |           //////       \\\\\\\\\\\\\n";
    std::cout << "              //////      ||||||      \\\\\\\\\\\\\          |   ___________  |        *       *       *|  ________  | *       *      |  ______|     *       *| |     *       *       *      |  |          //////         \\\\\\\\\\\\\n";
    std::cout << "             //////       ||||||       \\\\\\\\\\\\\         |  | * *     * | |   * *     * *     * *   | |  * *   | |________________| | *     * *     * *   | | * *     * *     * *     * *|  |         //////          //////\n";
    std::cout << "            //////        ||||||        \\\\\\\\\\\\\        |  |      *    | |*       *       *        | |       *|____________________|       *       *     | | *       *       *       *  |  |        //////          ////// \n";
    std::cout << "           //////         ||||||         \\\\\\\\\\\\\       |  |      *    | |_________________________| |___________________________________________________| |    *       *       *       |  |       //////          //////\n";
    std::cout << "          //////          ||||||          \\\\\\\\\\\\\      |  | * *     * |___________________________________________________________________________________|     * *     * *            |  |      //////          //////\n";
    std::cout << "         //////           ||||||           \\\\\\\\\\\\\     |__________________________________________________________________________________________________________________________________|     //////          //////\n";


}


bool menuInput() {
    int choice;
    int counter = 1;

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
                char player = '?';
                char trace = '.';
                char wall = '#';

                int height = 15, width = 15;
                while (runGame(player, trace, wall, height, width)) {
                    runGame(player, trace, wall, height, width);
                }
                system("CLS");
                menuInput();
            }
        }
                  break;
        }// enter
    }
}


void nightOne() {
    std::cout << "\033[0;35m";
    std::cout << "\n\n\n";
    std::cout << std::setw(156) << "==============================================================================================================\n\n";
    std::cout << std::setw(150) << "               //////      ///   ////       /////////   ///       ///  /////////////////     ////////////\n";
    std::cout << std::setw(150) << "              /// ///     ///   ////    ////           ///       ///         ///                ////     \n";
    std::cout << std::setw(150) << "             ///  ///    ///   ////   ///             ///       ///         ///                ////      \n";
    std::cout << std::setw(150) << "            ///   ///   ///   ////   ///      /////  /////////////         ///                ////       \n";
    std::cout << std::setw(150) << "           ///    ///  ///   ////   ///        ///  ///       ///         ///                ////        \n";
    std::cout << std::setw(150) << "          ///      //////   ////    ////      ///  ///       ///         ///                ////         \n";
    std::cout << std::setw(150) << "         ///       /////   ////      ///////////  ///       ///         ///            ////////////     \n\n";
    std::cout << std::setw(156) << "==============================================================================================================\n\n";
    std::cout << "\n\n\n\n\n\n\n";
}

void nightTwo() {
    std::cout << "\033[0;35m";
    std::cout << "\n\n\n";
    std::cout << std::setw(163) << "==========================================================================================================================\n\n";
    std::cout << std::setw(168) << "               //////      ///   ////       /////////   ///       ///  /////////////////     ////////////   ////////////           \n";
    std::cout << std::setw(168) << "              /// ///     ///   ////    ////           ///       ///         ///                ////           ////                \n";
    std::cout << std::setw(168) << "             ///  ///    ///   ////   ///             ///       ///         ///                ////           ////                 \n";
    std::cout << std::setw(168) << "            ///   ///   ///   ////   ///      /////  /////////////         ///                ////           ////                  \n";
    std::cout << std::setw(168) << "           ///    ///  ///   ////   ///        ///  ///       ///         ///                ////           ////                   \n";
    std::cout << std::setw(168) << "          ///      //////   ////    ////      ///  ///       ///         ///                ////           ////                    \n";
    std::cout << std::setw(168) << "         ///       /////   ////      ///////////  ///       ///         ///            ////////////   ////////////                \n\n";
    std::cout << std::setw(163) << "==========================================================================================================================\n\n";
}

void nightThree() {
    std::cout << "\033[0;35m";
    std::cout << "\n\n\n";
    std::cout << std::setw(166) << "========================================================================================================================================\n\n";
    std::cout << std::setw(168) << "               //////      ///   ////       /////////   ///       ///  /////////////////     ////////////   ////////////   ////////////        \n";
    std::cout << std::setw(168) << "              /// ///     ///   ////    ////           ///       ///         ///                ////           ////            ///             \n";
    std::cout << std::setw(168) << "             ///  ///    ///   ////   ///             ///       ///         ///                ////           ////            ///              \n";
    std::cout << std::setw(168) << "            ///   ///   ///   ////   ///      /////  /////////////         ///                ////           ////            ///               \n";
    std::cout << std::setw(168) << "           ///    ///  ///   ////   ///        ///  ///       ///         ///                ////           ////            ///                \n";
    std::cout << std::setw(168) << "          ///      //////   ////    ////      ///  ///       ///         ///                ////           ////            ///                 \n";
    std::cout << std::setw(168) << "         ///       /////   ////      ///////////  ///       ///         ///            ////////////   ////////////    ///////////             \n\n";
    std::cout << std::setw(166) << "========================================================================================================================================\n\n";
}

void nightFour() {
    std::cout << "\033[0;35m";
    std::cout << "\n\n\n";
    std::cout << std::setw(150) << "=========================================================================================================================\n\n";
    std::cout << std::setw(150) << "               //////      ///   ////       /////////   ///       ///  /////////////////     ////////////   ///       ///     \n";
    std::cout << std::setw(150) << "              /// ///     ///   ////    ////           ///       ///         ///                ////        ///      ///      \n";
    std::cout << std::setw(150) << "             ///  ///    ///   ////   ///             ///       ///         ///                ////         ///     ///       \n";
    std::cout << std::setw(150) << "            ///   ///   ///   ////   ///      /////  /////////////         ///                ////          ///    ///        \n";
    std::cout << std::setw(150) << "           ///    ///  ///   ////   ///        ///  ///       ///         ///                ////           ///   ///         \n";
    std::cout << std::setw(150) << "          ///      //////   ////    ////      ///  ///       ///         ///                ////            ///  ///          \n";
    std::cout << std::setw(150) << "         ///       /////   ////      ///////////  ///       ///         ///            ////////////          /////           \n\n";
    std::cout << std::setw(150) << "=========================================================================================================================\n\n";
}
