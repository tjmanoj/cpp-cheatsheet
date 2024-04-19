#include<bits/stdc++.h>
using namespace std;

class Base{
private:
	int a;
public: 
	Base(int val) { 
		a= val;
		count = 10;
	}
	static int count;
	
	// static member function
	static int getData(){           //only use the static variable inside function
	    count++;
	    return count;
	}
	};
int Base:: count = 0;			// need declaration globally to access all
	
int main() {
  Base a2(19);
  cout << a2.count << endl;
  cout << Base::count << endl;
  
  cout << a2.getData() << endl;
  cout << Base::getData();
  return 0;
}
