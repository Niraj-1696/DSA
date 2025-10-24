#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r,int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(Rectangle r){
return r.length*r.breadth;
}

int parameter(struct Rectangle r){
    int p;
    p=2*(r.length+r.breadth);
    return p;
}
int main(){

    struct Rectangle r={0,0};

    int l,b;
    printf("Enter two Numbers : ");
    cin>>l>>b;

    initialize(&r,l,b);

    int a=area(r);
    int par=parameter(r);

    printf("Area is %d\n Paramiter is %d",a,par);
    return 0;
}