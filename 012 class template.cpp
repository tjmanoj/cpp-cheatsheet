#include<bits/stdc++.h>
using namespace std;

template <class T>
class sum {
    private:
        T x;
        T y;
    public:
        sum(T a, T b){
            x = a;
            y = b;
        }
        void getsum(){
            cout << x+y;
        }
};

int main(){
    sum<int> sample(19,12);
    sample.getsum();
}
