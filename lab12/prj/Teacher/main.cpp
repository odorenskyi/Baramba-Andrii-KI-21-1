#include "HelperFunctions.h"

using namespace std;

bool fileInDirectory()
{
    string cpp = __FILE__;
    size_t found = cpp.find("\\lab12\\prj");

    cout << cpp << endl;

    if (found == string::npos) {
        for (int i = 0; i < 100; i++) {
            cout << "\a";
        }
        ofstream resFile("../../TestSuite/TestResults.txt");
        resFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        resFile.close();
        return false;
    }
    return true;
}

int main()
{
    if (!fileInDirectory()) {
        cout << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        return -1;
    }

    ClassLab12_Baramba hoop;

    ifstream caseFile("../../TestSuite/TS.txt");
    if(!caseFile.is_open()){ cout << "TS.txt is not opened" << endl; return -2; };
    ofstream resultFile("../../TestSuite/TestResults.txt");
    if(!resultFile.is_open()){ cout << "TestResults.txt is not opened" << endl; return -3; };

    for (int i = 1; i < 7; i++) {
        string hoopRadius;
        string hoopSquare;
        string bufLine;
        float bufFloat;

        getline(caseFile, bufLine);
        hoopRadius = bufLine.erase(0, 12);

        getline(caseFile, bufLine);
        hoopSquare = bufLine.erase(0, 12);

        hoop.setHoopRadius(stof(hoopRadius));

        declareTestSuiteResults(resultFile, hoop, bufLine, hoopSquare, i);
    }

    caseFile.close();
    resultFile.close();
    system("pause");
    return 0;
}

