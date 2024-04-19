#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin;
    char A[5];

    fin.open("sample.txt",ios::in);
    fin.seekg(5,ios_base::cur);        // move the get pointer to 5 pos from beginning
    fin.read(A,5);                     // read 5 chars and store it in A
    fin.close();
    for(auto i:A) cout << i ;
}
