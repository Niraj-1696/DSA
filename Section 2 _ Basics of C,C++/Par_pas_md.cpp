#include<iostream>
using namespace std;

//Call by address
// void swap(int *x, int*y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int num1=5, num2=6;
//     swap(&num1,&num2);
//     cout<<"First Number is "<<num1<<endl;
//     cout<<"Second Number is "<<num2;
//     return 0;
// }

//Call by refernce
void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int num1=5, num2=6;
    swap(num1,num2);
    cout<<"First Number is "<<num1<<endl;
    cout<<"Second Number is "<<num2;
    return 0;
}