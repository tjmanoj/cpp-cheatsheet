#include<bits/stdc++.h>
using namespace std;

class Person {
  private:
    int weight;
  public:
    Person(int val){
        weight = val;
    }
    friend bool operator>(Person x, Person y);  // operator overloading using friend func
    friend bool operator<(Person x, Person y);
};
bool operator>(Person x, Person y){
    return x.weight > y.weight;
}
bool operator<(Person x, Person y){
    return x.weight < y.weight;
}

int main() {
   Person p1(10);
   Person p2(50);
   
   if(p1 > p2) cout << "Person 1 is weighter than Person 2";
   else if(p1 < p2) cout << "Person 2 is weighter than Person 1";
   else cout << "Equal";
    
  return 0;
}





