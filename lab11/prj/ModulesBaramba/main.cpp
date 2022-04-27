#include "ModulesBaramba.h"

using namespace std;

void writeToRegistData(fstream &file, regEnrollment *regEn)
{
    regEnrollment *buffer = regEn;
    file.write((char*)&*buffer, sizeof(regEnrollment));
    while (buffer->ptr != nullptr) {
        buffer = buffer->ptr;
        file.write((char*)&*buffer, sizeof(regEnrollment));
    }
}

void dataOutput(fstream &file, regEnrollment *regEn, int action) {
    #define OUTPUT(stream) ((stream) == 1 ? cout : file)

    if (regEn->ptr != nullptr) {
        dataOutput(file, regEn->ptr, action);
    }
    OUTPUT(action) << "Owner's first, last name, patronymic: " << regEn->firstName << " "
                                                     << regEn->lastName << " "
                                                     << regEn->patronymic << endl
         << "Car brand: " << regEn->carBrand << endl
         << "Car graduation year: " << regEn->gradYear << endl
         << "Car registration date: " << regEn->dateDay<< "."
                                      << regEn->dateMonth << "."
                                      << regEn->dateYear << endl
         << "Car state number: " << regEn->govNumber << endl
         << "Additional information: " << regEn->additions << endl
         << "----------------------------------------------------------------" << endl;

        if (action != 1) { cout << "Information writed to TextFile.txt" << endl; }
}
