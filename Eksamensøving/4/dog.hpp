#include <string>
#include <iostream>
#include "animal.hpp"
#pragma once

using namespace std;

class Dog : public Animal{
    public:
        Dog(const string &name_);
        int get_legs() const;
        string get_type() const;
        void print() const;
};
