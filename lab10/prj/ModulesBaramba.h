#ifndef MODULESBARAMBA_H_INCLUDED
#define MODULESBARAMBA_H_INCLUDED

#include <iostream>
#include <cmath>

double s_calculation(float x, float z);

std::string BeaufortScale(int BeaufortScore);
std::string helmetSize(int headSize);
std::string binOnesZeros(int number);

void authorInformation(string path);
void randNum(string path);
std::string readfile(string path);
void punctuation(string path);
void alfabet(string path);
void dateTime(string path);
void binNumber(int number, string path);

#endif // MODULESBARAMBA_H_INCLUDED
