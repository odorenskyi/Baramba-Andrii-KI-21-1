#ifndef MODULESBARAMBA_H_INCLUDED
#define MODULESBARAMBA_H_INCLUDED

#include <cmath>
#define PI 3.14159265359

class ClassLab12_Baramba{
public:
    ClassLab12_Baramba(){}
    ClassLab12_Baramba(float radius);

    void setHoopRadius(float radius);
    float getHoopRadius();
    float getHoopSquare();

private:
    float radius = 25.0;
};

ClassLab12_Baramba::ClassLab12_Baramba(float radius){
    this->radius = radius;
}

void ClassLab12_Baramba::setHoopRadius(float radius){
    this->radius = radius;
}

float ClassLab12_Baramba::getHoopRadius(){
    return radius;
}

float ClassLab12_Baramba::getHoopSquare(){
    return (PI * pow(radius, 2));
}

#endif // MODULESBARAMBA_H_INCLUDED
