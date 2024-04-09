#include<bits/stdc++.h>
using namespace std;
 
class base {
public:
  virtual ~base (){
    cout <<"base destructed"<<endl;
  }
};

class derived: public base {
public:
  ~derived (){
    cout <<"Derived destructed" << endl;
  }
};

int main(){
  base *ptr = new derived;    // ptr with base class and object of derived class
  delete ptr;                // this will delete both the destructor function as we used the virtual keyword
}


// first derived class will get destroyed then it will call the base class destructor to destroy
