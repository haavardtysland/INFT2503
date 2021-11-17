#include "cat.hpp"
#include <string>
#include <iostream>

using namespace std;

Cat::Cat(const string &name_) : Animal(name_){};

int Cat::get_legs() const{
    return 4;
};

string Cat::get_type() const{
    return "Katt";
};

void Cat::print() const {
    cout << "Dyret er av typen: " << Cat::get_type() << ", og har " << Cat::get_legs() << + " bein, og heter " << Animal::get_name() << endl;
}