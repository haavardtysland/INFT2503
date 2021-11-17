#include <iostream>
#include <vector>

using namespace std;
int main() {

    vector<double> vec = {3.0, 8.3, 9.7 ,1.2 , 20.1};

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    vec.emplace(vec.begin(), 2.1);

    cout << vec.front() << endl;

    auto it = find(vec.begin(), vec.end(), 9.7);

    if(it == vec.end()) {
        cout << "Fant ikke verdien" << endl;
    } else {
        cout << *it << endl;
    }
}