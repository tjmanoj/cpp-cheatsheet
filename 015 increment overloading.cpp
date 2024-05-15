#include <bits/stdc++.h>
using namespace std;

class A {
private:
  int a;

public:
  void print() { cout << a; }
  A(int val) { a = val; }

  void operator++() { ++a; }

  void operator++(int) { // post increment
    a++;
  }
};

int main() {
  A person1(10);
  ++person1; // pre increment

  person1++; // post increment

  person1.print();
  return 0;
}
