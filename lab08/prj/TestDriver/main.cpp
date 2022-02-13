#include <iostream>
#include "ModulesBaramba.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    float valueX[5] = {3, 15, 5, 90, 45};
    float valueZ[5] = {4, 0, 3, 1, 5};
    float actual_result = 0;

    float expected_result[5] = {102.261, 5.159, 52.281, 10.209, 174.405};

    for(int i = 0; i < 5; i++){
        actual_result = floor(s_calculation(valueX[i], valueZ[i])*1000)/1000;
        cout << "TEST CASE #"<< i + 1 << "\n"
                "\t\tIncoming data: " << "\n"
                "\t\tX = " << valueX[i] << "\n"
                "\t\tZ = " << valueZ[i] << "\n"
                "\t\tExpected result: " << expected_result[i] << "\n"
                "\t\tActual result: " << actual_result << "\n";
        if(actual_result == expected_result[i]){
            cout << "\t\tTest case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "\t\tTest case #" << i + 1 << " FAILED\n" << endl;
        }
    }

    system("pause");

    return 0;
}
