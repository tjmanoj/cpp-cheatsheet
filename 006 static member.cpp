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
	};
int Base:: count = 0;			// need declaration globally to access all
	
int main() {
  Base a2(19);
  cout << a2.count << endl;
  cout << Base::count << endl;
  return 0;
}#include<bits/stdc++.h>
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
	};
int Base:: count = 0;			// need declaration globally to access all
	
int main() {
  Base a2(19);
  cout << a2.count << endl;
  cout << Base::count << endl;
  return 0;
}
