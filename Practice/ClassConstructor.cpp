#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
Rectangle ();
Rectangle(int l,int b);
int area();
int parameter();
int getlength();
int getbreadth();
~Rectangle();
};
     Rectangle :: Rectangle(){
        length=1,breadth=1;
    }
    Rectangle :: Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int Rectangle::area(){
        return length*breadth;
    }
    int Rectangle::parameter(){
        return 2*(length+breadth);
    }
    int Rectangle::getlength(){
        return length;
    }
    int Rectangle::getbreadth(){
        return breadth;
    }
    Rectangle::~Rectangle(){
        cout<<"Distructor"<<endl;
    }

int main(){
    Rectangle r;
    int a=r.area();
    int p=r.parameter();
    cout<<"Area is "<<a<<endl;
    cout<<"Parameter is "<<p<<endl;
    return 0;
}