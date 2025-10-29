#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int main(){
    // struct rectangle r;
    // struct rectangle *p;
    // p=&r;
    // p->length=10;
    // cout<<p->length<<endl;

    struct rectangle *p;
    //p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p=new rectangle;
    p->breadth=20;
    cout<<p->breadth<<endl;
     return 0;
}