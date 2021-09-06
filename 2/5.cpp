#include <iostream>
using namespace std;

int main(){
    double number = 2.1;
    double *pointer = &number;
    double &ref = number;

    cout << number << endl;
    cout << *pointer << endl;
    cout << ref << endl;
    return 0;
}