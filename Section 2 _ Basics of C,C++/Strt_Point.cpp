#include<iostream>
using namespace std;

struct Rectangle{
int length;
int breadth;
};

int main(){
    // Rectangle r={10,20};
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;

    struct Rectangle *p;
    p=(struct Rectangle*)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->breadth=10;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}