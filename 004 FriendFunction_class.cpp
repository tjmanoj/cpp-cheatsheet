#include<bits/stdc++.h>
using namespace std;

class A {
  private:
    int a;
  public:
    A(int val){
        a = val;
    }
    friend class B;     //now B class is the friend of A class, so it can access all
};

class B {
    private:
        int b;
    public:
        B(int val){
            b = val;
        }
        int Sum(){
            A obj1(10);
            int sum = obj1.a + b;   // B class can access private of A class
            return sum;
        }
};

int main() {
    B obj2(20);         // b is set to 20
    cout << obj2.Sum();
    
  return 0;
}
