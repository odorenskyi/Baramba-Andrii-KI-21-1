#include <iostream>
#include "cmath"

using namespace std;

double a_calculation(float x, float z)
{
    const double pi = 3.14159;
    return (sqrt(1 + x) - 3 * cos(x)) / (log(pow(x, 2)) + 3 * sin(pi * x)) + pow(sqrt(pow(z, 3)) + 2, 2);
}

string BeaufortScale(int BeaufortScore) {
    switch (BeaufortScore){
        case 0:
            return "Wind speed less than 0.0003 km/s";
        case 1:
            return "Wind speed varies from 0.0003 to 0.0015 km/s";
        case 2:
            return "Wind speed varies from 0.0016 to 0,0094 km/s";
        case 3:
            return "Wind speed varies from 0.0094 to 0,0054 km/s";
        case 4:
            return "Wind speed varies from 0.0055 to 0,0079 km/s";
        case 5:
            return "Wind speed varies from 0.008 to 0,0107 km/s";
        case 6:
            return "Wind speed varies from 0.0108 to 0,0138 km/s";
        case 7:
            return "Wind speed varies from 0.0139 to 0,0171 km/s";
        case 8:
            return "Wind speed varies from 0.0172 to 0,0207 km/s";
        case 9:
            return "Wind speed varies from 0.0208 to 0,0224 km/s";
        case 10:
            return "Wind speed varies from 0.0245 to 0,0284 km/s";
        case 11:
            return "Wind speed varies from 0.0285 to 0,0326 km/s";
        case 12:
            return "Wind speed more than 0.0327 km/s";
        default:
            return "Invalid value";
    }
}

string helmetSize(int headSize){

    if(headSize < 475 || headSize > 624){
        return "Your size is not in the table";
    }

    headSize = round(headSize / 10);
    int minimalSize = 48;

    char helmetSizes[8][255] = {"Children's helmet, size S",
                                "Children's helmet, size M",
                                "Children's helmet, size L",
                                "Adult's helmet, size XS",
                                "Adult's helmet, size S",
                                "Adult's helmet, size M",
                                "Adult's helmet, size L",
                                "Adult's helmet, size XL",
                                };

    int i = 0;
    for(; minimalSize < 63; minimalSize++){
        if(minimalSize != headSize){
            if(minimalSize % 2 == 0) i++;
            continue;
        } else {
            return helmetSizes[i];
        }
    }
}

int binOnesZeros(int number){

    if(number < 0) { cout << "Value is less than the minimal value, defined as 0" << endl; number = 0; }
    else if (number > 8999) { cout << "Your value is more than the maximal value, defined as 8999" << endl; number = 8999; };

    int binZeros = 0;
    int iter_num = ~number;

    while(iter_num){
        iter_num &= iter_num - 1;
        binZeros ++;
    }

    switch(number >> 9 & 1){
        case 0:
            cout << "Number of binary 0 = " ;
            return binZeros;
        case 1:
            cout << "Number of binary 1 = " ;
            return 32 - binZeros;;
    }
}
