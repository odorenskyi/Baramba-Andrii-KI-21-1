#ifndef MODULESBARAMBA_H_INCLUDED
#define MODULESBARAMBA_H_INCLUDED

#include <iostream>
#include <cmath>

double s_calculation(float x, float z);

std::string BeaufortScale(int BeaufortScore);
std::string helmetSize(int headSize);
std::string binOnesZeros(int number);

bool authorInformation(std::string path);
bool randNum(std::string path);
std::string readfile(std::string path);
bool punctuation(std::string path);
bool alphabet(std::string path);
bool dateTime(std::string path);
bool binNumber(int number, std::string path);

#endif // MODULESBARAMBA_H_INCLUDED
