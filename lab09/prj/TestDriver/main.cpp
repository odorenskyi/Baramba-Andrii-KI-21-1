#include <iostream>
#include "ModulesBaramba.h"

using namespace std;

int main()
{
    int BeaufortScoreValues[5] {-1, 0, 7 ,12, 13};
    char BeaufortScaleResult[5][255] {"Invalid value",
                                      "Wind speed less than 0.0003 km/s",
                                      "Wind speed varies from 0.0139 to 0,0171 km/s",
                                      "Wind speed more than 0.0327 km/s",
                                      "Invalid value"};
    int headSizeValues[5] {474, 475, 543, 624, 625};
    char helmetSizeResult[5][255] {"Your size is not in the table",
                                   "Children's helmet, size S",
                                   "Adult's helmet, size XS",
                                   "Adult's helmet, size XL",
                                   "Your size is not in the table"};
    int numberValues[5] {-1, 511, 1023, 8999, 9000};
    char binOnesZerosResult[5][255] {"Wrong number! Your number: -1",
                                    "Number of binary 0 = 23",
                                    "Number of binary 1 = 10",
                                    "Number of binary 1 = 7",
                                    "Wrong number! Your number: 9000"};

    cout << "=======================================================================================" << endl;
    cout << "TEST SUITE 9.1" << endl;
    for(int i = 0; i < 5; i++){
        cout << "\tTEST CASE #"<< i + 1 << "\n"
                "\t\t\tIncoming data: " << "\n"
                "\t\t\tBeaufort Score = " << BeaufortScoreValues[i] << "\n";
        cout << "\t\t\tExpected result: " << BeaufortScaleResult[i] << endl;
        cout << "\t\t\tActual result:   " << BeaufortScale(BeaufortScoreValues[i]) << endl;
        if(BeaufortScale(BeaufortScoreValues[i]) == BeaufortScaleResult[i]){
            cout << "\t\t\tTest case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "\t\t\tTest case #" << i + 1 << " FAILED\n" << endl;
        }
    }
    cout << "=======================================================================================" << endl << endl;

    cout << "=======================================================================================" << endl;
    cout << "TEST SUITE 9.2" << endl;
    for(int i = 0; i < 5; i++){
        cout << "\tTEST CASE #"<< i + 1 << "\n"
                "\t\t\tIncoming data: " << "\n"
                "\t\t\tHead size = " << headSizeValues[i] << "\n";
        cout << "\t\t\tExpected result: " << helmetSizeResult[i] << endl;
        cout << "\t\t\tActual result:   " << helmetSize(headSizeValues[i]) << endl;
        if(helmetSize(headSizeValues[i]) == helmetSizeResult[i]){
            cout << "\t\t\tTest case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "\t\t\tTest case #" << i + 1 << " FAILED\n" << endl;
        }
    }
    cout << "=======================================================================================" << endl << endl;

    cout << "=======================================================================================" << endl;
    cout << "TEST SUITE 9.3" << endl;
    for(int i = 0; i < 5; i++){
        cout << "\tTEST CASE #"<< i + 1 << "\n"
                "\t\t\tIncoming data: " << "\n"
                "\t\t\tBeaufort Score = " << numberValues[i] << "\n";
        cout << "\t\t\tExpected result: " << binOnesZerosResult[i] << endl;
        cout << "\t\t\tActual result:   " << binOnesZeros(numberValues[i]) << endl;
        if(binOnesZeros(numberValues[i]) == binOnesZerosResult[i]){
            cout << "\t\t\tTest case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "\t\t\tTest case #" << i + 1 << " FAILED\n" << endl;
        }
    }
    cout << "=======================================================================================" << endl << endl;
}
