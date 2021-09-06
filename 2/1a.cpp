#include <iostream> // 
using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "Addresse til i: " << &i << " og verdi: " << i << endl;
    cout << "Addresse til j: " << &j << " og verdi: " << j << endl;
    cout << "Addresse til p: " << &p << " og verdi: " << p << endl;
    cout << "Addresse til q: " << &q << " og verdi: " << q << endl;

    return 0;
}