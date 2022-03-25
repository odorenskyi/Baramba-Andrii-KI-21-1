#include <iostream>
#include <conio.h>
#include "ModulesBaramba.h"

using namespace std;

int main()
{
    float x, z;
    int BeaufortScore;
    int headSize;
    int number;

    cout << "================================================================================================" << endl
         << "|'\\' calls a function that calculates the value of S according to the formula;                 |" << endl
         << "|'5' calls a function that determines the strength of the wind according to the Beaufort scale;|" << endl
         << "|'4' calls a function that determines the size of the helmet based on the girth of the head;   |" << endl
         << "|'3' calls a function that determines the number of zeros in the binary code of a number if    |" << endl
         << "|    the tenth bit is zero and the number of ones if the tenth bit is one;                     |" << endl
         << "|'t', 'T' and 'C' terminate the program.                                                       |" << endl
         << "================================================================================================" << endl << endl;
    getchar();

    while(true) {
        cout << "Enter symbol (\\/5/4/3/t/T/C): ";
        switch (getch()) {
            case '\\': cout << endl << endl << "Enter x value: ";
                       cin >> x;
                       cout << "Enter z value: ";
                       cin >> z;
                       cout << "S = " <<s_calculation(x, z) << endl << endl;
                       break;
            case '5': cout << endl << endl << "Enter Beaufort score: ";
                      cin >> BeaufortScore;
                      cout << BeaufortScale(BeaufortScore);
                      cout << endl << endl;
                      break;
            case '4': cout << endl << endl << "Enter head size (mm): ";
                      cin >> headSize;
                      cout << helmetSize(headSize);
                      cout << endl << endl;
                      break;
            case '3': cout << endl << endl << "Enter number (0 - 8999): ";
                      cin >> number;
                      cout << binOnesZeros(number);
                      cout << endl << endl;
                      break;
            case 't': return 0; break;
            case 'T': return 0; break;
            case 'C': return 0; break;
            default: cout << "\a" << endl << endl; continue;
        }
    }
}
