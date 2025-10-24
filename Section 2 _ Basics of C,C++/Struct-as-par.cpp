#include<iostream>
using namespace std;

//Passed by value
// struct Reactangle{
// int length;
// int breadth;
// };

// void fun(struct Reactangle r1){
//     r1.length=20;
//     cout<<"length "<<r1.length<<endl;
//     cout<<"breadth "<<r1.breadth<<endl;
// }

// int main(){
//     struct Reactangle r={10,5};
//     fun(r);
//     printf("%d\n",r.length);
//     printf("%d\n",r.breadth);
//     return 0;
// }

// Call by Address
// struct Reactangle{
// int length;
// int breadth;
// };

// void fun(struct Reactangle *p){
//     p->length=20;
//     cout<<"length "<<p->length<<endl;
//     cout<<"breadth "<<p->breadth<<endl;
// }

// int main(){
//     struct Reactangle r={10,5};
//     fun(&r);
//     printf("%d\n",r.length);
//     printf("%d\n",r.breadth);
//     return 0;
// }

// Returning a Address of a Structure
struct Reactangle{
int length;
int breadth;
};

struct Reactangle *fun(){
    struct Reactangle *p;
    p=new Reactangle;
    // p=(struct Reactangle* )malloc(sizeof(struct Reactangle));

    p->length=15;
    p->breadth=7;

    return p;
}

int main(){
    struct Reactangle *ptr=fun();

    cout<<"length "<<ptr->length<<endl;
    cout<<"breadth "<<ptr->breadth<<endl;
    return 0;
}