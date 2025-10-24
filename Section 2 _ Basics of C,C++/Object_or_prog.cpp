#include<iostream>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;

void initialize(int l, int b){
    length=l;
    breadth=b;
}

int area(){
return length*breadth;
}

int parameter(){
    int p;
    p=2*(length+breadth);
    return p;
}
};
int main(){

    struct Rectangle r;

    int l,b;
    printf("Enter two Numbers : ");
    cin>>l>>b;

    r.initialize(l,b);

    int a=r.area();
    int par=r.parameter();

    printf("Area is %d\n Paramiter is %d",a,par);
    return 0;
}