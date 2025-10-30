#include<iostream>
using namespace std;

// struct rectangle{
//     int length;
//     int breadth;
// };

// void fun(struct rectangle *r1){
//     r1->length++;
//     cout<<r1->length<<endl;
//     cout<<r1->breadth<<endl;
// }
// int main(){
//     struct rectangle r={15,16};
//     cout<<r.length<<endl;
//     cout<<r.breadth<<endl;
//     fun(&r);

struct test{
    int A[5];
    int n;
};

void fun(struct test t1){

    for(int i=0;i<5;i++)
    t1.A[i]=i+2;
    


    for(int i=0;i<5;i++)
    cout<<t1.A[i]<<endl;
    cout<<t1.n<<endl;
}
int main(){
    struct test t={{1,3,5,7,9},20};
    fun(t);
    for(int i=0;i<5;i++)
    cout<<t.A[i]<<endl;
    cout<<t.n<<endl;
    return 0;
}