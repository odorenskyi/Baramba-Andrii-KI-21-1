#include <iostream>
#include <iomanip>
#include "ModulesBaramba.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    float valueX[5] = {3, 15, 5, 90, 45};
    float valueZ[5] = {4, 0, 3, 1, 5};
    double delta = 0.00005;

    double expected_result[5] = {102.2619096479453241, 5.1593074052574145, 52.2812064863853491, 10.2094377523640041, 174.4051762876015805};

    for(int i = 0; i < 5; i++){
        cout << fixed << setprecision (0);
        cout << "TEST CASE #"<< i + 1 << "\n"
                "\t\tIncoming data: " << "\n"
                "\t\tX = " << valueX[i] << "\n"
                "\t\tZ = " << valueZ[i] << "\n";
        cout << fixed << setprecision (16) << "\t\tExpected result: " << expected_result[i] << endl;
        cout << "\t\tActual result:   " << s_calculation(valueX[i], valueZ[i]) << endl;
        if(abs(s_calculation(valueX[i], valueZ[i]) - expected_result[i]) <= delta){
            cout << "\t\tTest case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "\t\tTest case #" << i + 1 << " FAILED\n" << endl;
        }
    }

    system("pause");

    return 0;
}
