#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void initialize(struct rectangle *r1,int a,int b){
    r1->length=a;
    r1->breadth=b;
}

int area(struct rectangle r2){
    return r2.length*r2.breadth;
}

int parameter(struct rectangle r3){
    int p;
    p=r3.length+r3.breadth;
    return p;
}

int main(){
    struct rectangle r={0,0};
    int l,b;
    cout<<"Enter the numbers :"<<endl;
    cin>>l;    cin>>b;

    initialize(&r,l,b);

    int a=area(r);
    cout<<"Area is "<<a<<endl;

    int p=parameter(r);
    cout<<"Parameter is "<<p<<endl;

    return 0;
}