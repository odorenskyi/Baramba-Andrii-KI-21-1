#include "ModulesBaramba.h"

using namespace std;

void writeToRegistData(fstream &file, regEnrollment *regEn) {

    if (regEn->ptr != nullptr) {
        writeToRegistData(file, regEn->ptr);
    }

    file.write(&regEn->firstName[0], PROPER_NAME_SIZE);
    file.write(&regEn->lastName[0], PROPER_NAME_SIZE);
    file.write(&regEn->patronymic[0], PROPER_NAME_SIZE);
    file.write(&regEn->carBrand[0], PROPER_NAME_SIZE);
    file.write(&regEn->gradYear[0], YEAR_STIRNG_SIZE);
    file.write(&regEn->dateDay[0], DATE_STRING_SIZE);
    file.write(&regEn->dateMonth[0], DATE_STRING_SIZE);
    file.write(&regEn->dateYear[0], YEAR_STIRNG_SIZE);
    file.write(&regEn->govNumber[0], GOV_NUMBER_SIZE);
    file.write(&regEn->additions[0], LARGE_TXT_SIZE);
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
