#include <ostream>
#include <iostream>
#include <string>
#include "Set.hpp"

using namespace std;

void Set::print()
{
  for (int i = 0; i < this->set.size(); i++)
  {
    cout << this->set.at(i);
    cout << " ";
  }
  cout << " " << endl;
}

bool Set::contains(int num)
{
  for (int i = 0; i < this->set.size(); i++)
  {
    if (this->set.at(i) == num)
    {
      return true;
    }
  }
  return false;
}

Set::Set()
{
  this->set = vector<int>();
}

Set::Set(vector<int> vec)
{
  this->set = vec;
}

Set Set::operator[](const Set &set)
{
  Set returnere(this->set);

  for (int i = 0; i < set.set.size(); i++)
  {
    if (!this->contains(set.set.at(i)))
    {
      returnere.set.emplace_back(set.set.at(i));
    }
  }
  return returnere;
}

Set Set::operator+(int num)
{
  if (!this->contains(num))
  {
    this->set.emplace_back(num);
  }
  return *this;
}

void Set::operator=(const Set &set)
{
  this->set.clear();
  for (size_t i = 0; i < set.set.size(); i++)
  {
    this->operator+(set.set[i]);
  }
}

ostream &operator<<(ostream &out, const Set &set)
{
  string s;
  for (int i = 0; i < set.set.size(); i++)
  {
    out << set.set.at(i);
    out << " ";
  }
  out << endl;
  return out;
}