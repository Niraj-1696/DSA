#include<iostream>
using namespace std;

struct Reactangle{
    int length;
    int breadth;
};

int main(){
    struct Reactangle r1={1,2};
    // r1.length=10;
    // r1.breadth=20;

    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    printf("%d\n",r1.length);
    printf("%d",r1.breadth);
    return 0;
}