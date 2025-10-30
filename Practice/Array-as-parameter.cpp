#include<iostream>
using namespace std;

// void fun(int *A,int n){
// for(int i=0;i<n;i++)
// cout << A[i]<<endl;
// }

int * fun(int size){
    int *ptr;
    ptr=new int[size];
    for(int i=0;i<size;i++)
    ptr[i]=i+5;
    return ptr;
}
int main(){
//     int A[]={1,2,3,4,5};
//     // int n=5;
//     // fun(A,5);
//     for (int x:A)
//     cout<<x<<endl;
int *p,size=7;
p=fun(size);
for( int i=0;i<size;i++)
cout<<p[i]<<endl;

return 0;
}