#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<double> vec = {1.1,2.2,3.3,4.4,5.5};
    cout << vec.front() << endl;
    cout << vec.back() << endl;

    vec.emplace(vec.begin() + 1, 6.6);

    cout << vec.front() << endl;

    vector<double>::iterator it = find(vec.begin(), vec.end(), 3.3);
    
    if(it != vec.end()){
        cout << "Resultatet var vellykket, verdien som ble funnet er: " << *it << endl;
    } else {
        cout << "Verdien ble ikke funnet" << endl;
    }

    return 0;
}