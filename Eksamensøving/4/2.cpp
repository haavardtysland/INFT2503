#include "dog.hpp"
#include "animal.hpp"
#include "cat.hpp"
#include <iostream>

using namespace std;

int main() {
    Dog dog("Nussen");
    Cat cat("Tussi");

    dog.print();
    cat.print();
}