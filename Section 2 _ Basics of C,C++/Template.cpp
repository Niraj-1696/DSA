#include<iostream>
using namespace std;

// Functions Defined Outside Class
// class Arithmatic{
// private:
// int a;
// int b;

// public:
// Arithmatic(int a, int b);
// int add();
// int sub();
// };

// Arithmatic::Arithmatic(int a, int b ){
// this->a=a;
// this->b=b;
// }

// int Arithmatic::add(){
//     return a+b;
// }

// int Arithmatic::sub(){
//     return a-b;
// }

// int main(){
//     Arithmatic ar(10,5);

//     cout<<"Add "<<ar.add()<<endl;
//     cout<<"Sub "<<ar.sub()<<endl;
//     return 0;
// }

//Creating Template Class
template <class T>
class Arithmatic{
private:
T a;
T b;

public:
Arithmatic(T a, T b);
T add();
T sub();
};

template<class T>
Arithmatic<T>::Arithmatic(T a, T b ){
this->a=a;
this->b=b;
}

template <class T>
T Arithmatic <T>::add(){
    return a+b;
}

template<class T>
T Arithmatic<T>::sub(){
    return a-b;
}

int main(){
    Arithmatic<int> ar(10,5);

    cout<<"Add "<<ar.add()<<endl;
    cout<<"Sub "<<ar.sub()<<endl;
    return 0;
}