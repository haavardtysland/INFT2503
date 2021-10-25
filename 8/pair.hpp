#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Pair{
    public:
        T1 first;
        T2 second;
        Pair(T1 first, T2 second) : first(first), second(second) {}

        Pair operator+(const Pair &other){
            Pair pair = *this;
            pair.first += other.first;
            pair.second += other.second;
            return pair;
        }

        bool operator>(const Pair &other){
            Pair pair = *this;
            return (pair.first + pair.second) > (other.first + other.second);
        }
};