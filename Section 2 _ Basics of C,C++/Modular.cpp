#include<iostream>
using namespace std;

int area(int l, int b){
return l*b;
}

int parameter(int l, int b){
    int p;
    p=2*(l+b);
    return p;
}
int main(){

    int length=0,breadth=0;

    cout << "Enter two Numbers : " << flush;  // flush ensures prompt appears
    cin >> length >> breadth;
    cout << "Input received: " << length << " " << breadth << endl;

    int a=area(length,breadth);
    int par=parameter(length,breadth);

    cout << "Area is " << a << endl << "Parameter is " << par << endl;
    return 0;
}