#include <string>
#pragma once

using namespace std;

class Animal{
    public:
        const string get_name() const { return name; };
        Animal(const string &name_);
    private:
        const string name;
};

