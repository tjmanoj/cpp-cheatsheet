class base {
  virual ~base (){
    cout <<"base destructed";
  }
};

class derived: public base {
  ~derived (){
    cout <<"Derived destructed";
  }
};

int main(){
  base *ptr = new derived;    // ptr with base class and object of derived class
  delete ptr;                // this will delete both the destructor function as we used the virtual keyword
}
