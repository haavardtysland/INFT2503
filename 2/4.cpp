#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int &b = a; //Må referere til noe
    int *c;
    c = &b;
    a = b + *c; //a og b er ikke pekere
    b = 2; //Kan ikke endre verdien til referansen b, endrer man b endrer man også da a
    return 0;
}