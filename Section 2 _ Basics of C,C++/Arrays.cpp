#include <iostream>
using namespace std;
int main() {
    // int A[5];
    // A[0]=12;
    // A[1]=15;
    // A[2]=25;

    // int A[4]={2,4,6,8};
    // int A[]={6,7,8,9,2};
    // int A[10]={2,4,5,6};
    // int A[10]={0};
    // int i;

    // for (i=0;i<10;i++){
    //     cout<<A[i]<<endl;
    // }

    // cout<<sizeof(A)<<endl;
    // cout<<A[6]<<endl;
    // printf("%d\n",A[7]);

    int n;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int A[n];

    for(int x:A){
        cout<<x<<endl;
    }
    
    return 0;
}