#include <bits/stdc++.h>
using namespace std;

class A {
private:
  int weight;

public:
  A(int val = 0) { weight = val; }

  A operator+(A obj) {
    A temp;
    temp.weight = weight + obj.weight;
    return temp;
  }

  void PrintVal() { cout << weight; }
};

int main() {
  A person1(10), person2(15);
  A answer;
  answer = person1 + person2;
  answer.PrintVal();
  return 0;
}
