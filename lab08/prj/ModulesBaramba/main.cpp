#include "cmath"

using namespace std;

double a_calculation(float x, float z)
{
    const double pi = 3.14159;
    return (sqrt(1 + x) - 3 * cos(x)) / (log(pow(x, 2)) + 3 * sin(pi * x)) + pow(sqrt(pow(z, 3)) + 2, 2);
}
