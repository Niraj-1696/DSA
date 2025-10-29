#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
}
int main(){
    int x=3, y=5;
    swap(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}