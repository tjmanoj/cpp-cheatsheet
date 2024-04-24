// - root_folder
//   - headers
//     - person.h
//   - src
//     - person.cpp
//     - main.cpp

//main.cpp 
#include<bits/stdc++.h>
#include "Person.h"
using namespace std;

int main() {
	Person p1;
	p1.disp();
}


//Person.h
#include<bits/stdc++.h>
using namespace std;


#ifndef PERSON_H
#define PERSON_H
class Person
{
public:
	void disp();
};

#endif


//Person.cpp
#include "Person.h"
#include<bits/stdc++.h>
using namespace std;

void Person::disp() {
	cout << "Hello from external file";
}
  
