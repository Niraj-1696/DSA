#include<iostream>
using namespace std;

int main(){
    // int *p;
    // int n=10;
    // p=&n;
    // printf("%d\n%d\n %d",*p,p,&n);

    int *p;
    //p=(int*)malloc(5*sizeof(int));
    p=new int[5];
    p[0]=1;p[1]=2;
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    return 0;
}