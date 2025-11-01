#include<iostream>
using namespace std;

int fun(int a){
    static int x=0;
    if(a>0){
        x++;
        return fun(a-1)+x;
    }
}
int main(){
    int n=4;
    fun(n);
    cout<<fun(n)<<endl;
    cout<<"Sencond time "<<fun(n)<<endl;
    return 0;
}

