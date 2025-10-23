#include<iostream>
using namespace std;
struct Reactangle{
        int length;
        int breadth;
    };
int main(){
    // int a=10;
    // int *p;
    // p=&a;

    // cout<<a<<endl;
    // printf("using pointer %d %d %d",*p,p,&a);

    // int A[5]={2,4,6,8,10};
    // int *p;
    // p=A;

    // for(int i=0;i<5;i++)
    // cout<<A[i]<<endl;
    // cout<<p[i]<<endl;

    // int *p;
    // p=(int*)malloc(5*sizeof(int));
    // p=new int[5];

    // p[0]=10; p[1]=15; p[2]=14;

    // for(int i=0; i<5; i++)
    // cout<<p[i]<<endl;

    // delete []p;
    // free(p);

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Reactangle *p5;

    cout<<sizeof(p1)<<endl;
     cout<<sizeof(p2)<<endl;
      cout<<sizeof(p3)<<endl;
       cout<<sizeof(p4)<<endl;
        cout<<sizeof(p5)<<endl;


    return 0;
}