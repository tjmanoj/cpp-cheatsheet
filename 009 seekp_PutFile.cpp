#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout;

    fout.open("sample.txt",ios::in);
    fout.seekp(5,ios_base::cur);        // move the pointer 5 times from beginning
    fout.write("Manoj",5);              // replace the text Manoj of size 5 chars.
    fout.close();
}

//sample.txt
Helloo

//output:
HelloManoj
