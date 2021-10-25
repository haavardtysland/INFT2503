#include "Set.cpp"
#include <iostream>
using namespace std;

int main()
{
  vector<int> vec{
      6, 4, 26, 4, 7};
  vector<int> vec2{
      5, 4, 26, 13, 75};

  Set set1(vec);
  Set set2(vec2);

  cout << "+ operator: " << endl;
  cout << set1 + 78 << endl;

  cout << "[] operator: " << endl;
  cout << set1[set2] << endl;

  cout << "= operator: " << endl;
  set1 = set2;
  cout << set1 << endl;
}