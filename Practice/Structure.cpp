#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle r;
    r.length=10;
    r.breadth=20;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    printf("%d\n",r.length);
    printf("%d",r.breadth);

    return 0;
}