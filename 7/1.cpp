#include <iostream>
#include "Fraction.cpp"
using namespace std; 

void print(const Fraction &broek) {
  cout << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
  
  Fraction f1(5,8); 
  Fraction f2 = f1 - 5; 
  print(f2); 
  
  Fraction f3 = 5 - f1; 
  print(f3); 

  /*b)
  5 - 3 - fraction1 - 7 - fraction2
  blir tolket som: 
  (((5-3)-fraction1)-7) - fraction2
  Dette betyr at det er "5 - fraction" som blir brukt. 
  */
}
