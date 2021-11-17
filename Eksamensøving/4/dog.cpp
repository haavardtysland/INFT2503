#include "dog.hpp"
#include <string>
#include <iostream>

using namespace std;

Dog::Dog(const string &name_) : Animal(name_){};

int Dog::get_legs() const{
    return 4;
};

string Dog::get_type() const{
    return "Hund";
};

void Dog::print() const {
    cout << "Dyret er av typen: " << Dog::get_type() << ", og har " << Dog::get_legs() << + " bein, og heter " << Animal::get_name() << endl;
}