#ifndef MULTIPLE_INHERITANCE_MOTOR_H
#define MULTIPLE_INHERITANCE_MOTOR_H

#include <iostream>

using namespace std;

class Motor{
protected:
    string merek, model;
    unsigned topSpeed;
public:
    Motor(string merek, string model, unsigned topSpeed);

    virtual void drive();

    virtual void display();
};


#endif //MULTIPLE_INHERITANCE_MOTOR_H
