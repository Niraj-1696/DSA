#include<iostream>
using namespace std;

template <class T>
class Arithmatic{
private:
    T a;
    T b;
public:
    Arithmatic (T a,T b);
    T add();
    T sub();
};
template <class T>
Arithmatic<T>::Arithmatic(T a,T b){
    this->a=a;
    this->b=b;
}
template <class T>
T Arithmatic<T>::add(){
    return a+b;
}
template <class T>
T Arithmatic<T>::sub(){
    return a-b;
}

int main(){
    Arithmatic<int>ar={5,7};
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;

    Arithmatic<float>arr={5.2,7.4};
    cout<<arr.add()<<endl;
    cout<<arr.sub()<<endl;
    return 0;
}