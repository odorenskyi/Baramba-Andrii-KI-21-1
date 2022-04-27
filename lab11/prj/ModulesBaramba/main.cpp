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

void writeToFile(fstream &file, regEnrollment *regEn) {
    if (regEn->ptr != nullptr)
        writeToConsole(regEn->ptr);


    file << "Owner's first, last name, patronymic: " << regEn->firstName << " "
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
}

void writeToConsole(regEnrollment *regEn) {
    if (regEn->ptr != nullptr)
        writeToConsole(regEn->ptr);

    cout << "Owner's first, last name, patronymic: " << regEn->firstName << " "
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
}
