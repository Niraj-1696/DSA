#include<iostream>
using namespace std;

int main(){

    int length=0,breadth=0;

    printf("Enter two Numbers : ");
    cin>>length>>breadth;

    int area=length*breadth;
    int par=2*(length+breadth);

    printf("Area is %d\n Paramiter is %d",area,par);
    return 0;
}