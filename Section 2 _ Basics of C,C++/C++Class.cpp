#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(){
        length=0;
        breadth=0;
    }

    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }

    int area(){
        return length*breadth;
    }

    int parameter(){
        return 2*(length+breadth);
    }

    void setlength(int l){
        length=l;
    }

    void setbreadth(int b){
        breadth=b;
    }

    int getlength(){
        return length;
    }

    int getbreadth(){
        return breadth;
    }

    ~Rectangle(){
        cout<<"Distructor";
    }
};

int main(){
    Rectangle r(10,20);
    cout<<r.area()<<endl;
    cout<<r.parameter()<<endl;
    r.setlength(20);
    r.setbreadth(20);
    cout<<r.getlength()<<endl;
    cout<<r.getbreadth()<<endl;
    return 0;
}