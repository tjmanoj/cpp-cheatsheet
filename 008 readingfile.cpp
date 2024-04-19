#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin;
    char ch;

    fin.open("sample.txt");
    int pos = fin.tellg();
    fin >> ch;                  // store the 0th index pointer to ch
    cout << pos << endl;

    while(!fin.eof()){          // ends when newline occurs
        cout << ch;         
        fin >> ch;              // move ch to point next character
    }
}
