#include <iostream>
#include <iomanip>
#include <cstring>

#include "ModulesBaramba.h"

using namespace std;

int x = 0, y = 0, z = 0;
char a = '0', b = '0';

string devInfo_copyright()
{
    return "© Барамба Андрій Андрійович";
}

void inputData(int X, int Y, int Z, char A, char B)
{
    cout << "Введіть х: "; cin >> X; x = X;
    cout << "Введіть y: "; cin >> Y; y = Y;
    cout << "Введіть z: "; cin >> Z; z = Z;
    cout << "Введіть перший символ (а): "; cin >> A; a = A;
    cout << "Введіть другий символ (b): "; cin >> B; b = B;
    cout << endl;
}

bool logicalExpression(int A, int B)
{
    return a + 7 < abs(b - 5);
}

void decimalHex_numbersOutput(int X, int Y, int Z)
{

    cout << "'x' в десятковій системі числення: " << dec << X << endl
         << "'y' в десятковій системі числення: " << dec << Y << endl
         << "'z' в десятковій системі числення: " << dec << Z << endl << endl;

    cout << "'x' в шістнацятковій системі числення: " << hex << X << endl
         << "'y' в шістнацятковій системі числення: " << hex << Y << endl
         << "'z' в шістнацятковій системі числення: " << hex << Z << endl << endl;
}

int main()
{
    system("chcp 65001 & cls");
    cout << devInfo_copyright() << endl << endl;
    inputData(x, y , z, a, b);
    cout << "Результат " << a << " + 7 < " << "|" << b << " - 5|" << " = " << logicalExpression(a, b) << " (1 = true, 0 = false)" << endl << endl;
    decimalHex_numbersOutput(x, y, z);
    cout << fixed << setprecision (16) << "S = " << s_calculation(x, z) << endl;
    system("pause"); return 0;
}
