using namespace std;

#include <iostream>

template<typename Type>
bool equal(Type a, Type b){
    if(a == b){
        cout << "Template gir at verdiene er like" << endl;
        return 1;
    } else {
        cout << "Template gir at verdiene ikke er like" << endl;
        return 0;
    }
}

bool equal(double a, double b){
    if(abs(a-b) < 0.00001){
        cout << "Spesialutgaven gir at verdiene er like" << endl;
        return 1;
    } else {
        cout << "Spesialutgaven gir at verdiene ikke er like" << endl;
        return 0;
    }
}

int main(){
    equal(5,5);
    equal(5.423423,5.4233);
    return 0;
}