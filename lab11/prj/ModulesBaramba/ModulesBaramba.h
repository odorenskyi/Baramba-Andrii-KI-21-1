#ifndef MODULESBARAMBA_H_INCLUDED
#define MODULESBARAMBA_H_INCLUDED

#include <iostream>
#include <fstream>
#include <iomanip>
#include "struct_type_project_1.h"

using namespace std;

void writeToRegistData(fstream &file, regEnrollment *node);
void dataOutput(fstream &file, regEnrollment *node, int action);

#endif // MODULESBARAMBA_H_INCLUDED
