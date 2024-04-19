#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream fin;

    fin.open("sample.txt",ios::in);
    fin.seekp(5,ios_base::cur);        // move the pointer 5 times from beginning
    fin.write("Manoj",5);              // replace the text Manoj of size 5 chars.
    fin.close();
}

//sample.txt
Helloo

//output:
HelloManoj
