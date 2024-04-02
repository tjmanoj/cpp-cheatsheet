#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
        int l;
        int b;
    public:
        Rectangle(int length, int breadth){
            l = length;
            b = breadth;
        }
        void display(){
            cout << "Length : " << l <<endl;
            cout << "Breadth : " << b <<endl;
        }
};

class Cuboid : public Rectangle{
    public:
        int h;
    
    public:
        Cuboid(int length, int breadth, int height) : Rectangle(length, breadth){
            h = height;
        }

        
        void display(){
            Rectangle :: display();
            cout << "Height : " << h <<endl;
        }
};
int main(){
    Rectangle r1(10,15);
    r1.display();
    cout << endl;
    
    Cuboid c1(1,2,3);
    c1.display();
    return 0;
}
