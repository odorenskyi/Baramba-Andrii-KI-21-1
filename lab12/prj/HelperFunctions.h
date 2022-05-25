#ifndef HELPERFUNCTIONS_H_INCLUDED
#define HELPERFUNCTIONS_H_INCLUDED

#include "ModulesBaramba.h"

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void declareTestSuiteResults(ofstream &resFile, ClassLab12_Baramba hoop, string outArea, string expArea, int index)
{
    resFile << " -------------------------------------------------- " << endl;
    resFile << "| TEST CASE " << setw(2) << index << setw(38) << "|" << endl;
    resFile << "| (input)    Hoop radius: " << setw(20) << hoop.getHoopRadius() << " ì   |" << endl;
    resFile << "| (output)   Hoop square: " << setw(20) << outArea << " ì^2 |" << endl;
    resFile << "| (expected) Hoop square: " << setw(20) << expArea << " ì^2 |" << endl;
    resFile << "| TEST CASE RESULT:       " << setw(20) << boolalpha << (expArea.compare(outArea) == 0) << "     |" << endl;
    resFile << " -------------------------------------------------- " << endl;
}


#endif // HELPERFUNCTIONS_H_INCLUDED
