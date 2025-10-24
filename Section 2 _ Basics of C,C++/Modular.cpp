#include<iostream>
using namespace std;

int area(int l, int b){
return l*b;
}

int parameter(int l, int b){
    int p;
    p=2*(l+b);
    return p;
}
int main(){

    int length=0,breadth=0;

    printf("Enter two Numbers : ");
    cin>>length>>breadth;

    int a=area(length,breadth);
    int par=parameter(length,breadth);

    printf("Area is %d\n Paramiter is %d",a,par);
    return 0;
}