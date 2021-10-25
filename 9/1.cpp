#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool biggerThan15(int i ){
    return i >= 15;
}

bool aboutTheSame(int i, int j){
    return abs(i - j) < 2;
}

bool isOdd(int i){
    return (i%2)!=0;
}

ostream &operator<<(ostream &out, const vector<int> &table){
    for(auto &a: table){
        out << a << " ";
    }
    return out;
}

int main(){

    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    vector<int> v2 = {2, 3, 12, 14, 24};

    //a
    vector<int>::iterator it = find_if(v1.begin(), v1.end(), biggerThan15);
    cout << "Første verdi over 15 er: " << *it << endl;

    //b
    auto b1 = equal(v1.begin(), v1.end() + 5, v2.data(), aboutTheSame);
    cout << b1 << endl;
    auto b2 = equal(v1.begin(), v1.end() + 4, v2.data(), aboutTheSame);
    cout << b2 << endl;

    //c
    cout << "FØR REPLACE:" << endl;
    cout << v1 << endl;
    replace_copy_if(v1.begin(), v1.end(), v1.begin(), isOdd, 100);
    cout << "ETTER REPLACE:" << endl;
    cout << v1 << endl;
    
    return 0;
}