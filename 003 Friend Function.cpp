#include<bits/stdc++.h>
using namespace std;

class A {
  private:
    int a;
  public:
    A(int val){
        a = val;
    }
    friend void fun();
};

class B {
    private:
        int b;
    public:
        B(int val){
            b = val;
        }
        friend void fun();
};
void fun(){
    A obj1(20);
    B obj2(12);
    cout << obj1.a + obj2.b;
}
int main() {
  fun();         // we can directly call without initializing as it is a friend func
  return 0;
}
