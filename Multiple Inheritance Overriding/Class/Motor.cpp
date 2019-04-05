#include "Motor.h"
#include<iostream>

using namespace std;

void Motor::drive() {
    cout << "Berkendara Konvensional" << endl;
}

Motor::Motor(string merek, string model, unsigned topSpeed) {
    this->merek = merek;
    this->model = model;
    this->topSpeed = topSpeed;
}

void Motor::display() {
    cout << "Motor Biasa" << endl;
    cout << "Merek     : " << merek << endl;
    cout << "Model     : " << model << endl;
    cout << "Kecepatan Maksimum : " << topSpeed << " Km/h" << endl;
}
