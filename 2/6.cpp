#include <iostream>
using namespace std;

int find_sum(const int *table, int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += table[i];
    }
    return sum;
}

int main(){
    int table[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int *point1 = table;
    int sum = find_sum(point1, 10);
    cout << "De første 10: " << sum << endl;
    int *point2 = &table[10];
    sum = find_sum(point2, 5);
    cout << "De neste 5: " << sum << endl;
    int *point3 = &table[15];
    sum = find_sum(point3, 5);
    cout << "De siste 5: " << sum << endl;
    return 0;
}