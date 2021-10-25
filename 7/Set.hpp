#pragma once
#include <vector>
#include <ostream>
using namespace std;

class Set
{
private:
  bool contains(int num);

public:
  vector<int> set;
  Set();
  Set(vector<int> set);
  Set operator[](const Set &set); 
  Set operator+(int num);
  void operator=(const Set &set);
  void print();
};

ostream &operator<<(ostream &out, const Set &set);