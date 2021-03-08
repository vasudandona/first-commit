#include<iostream>
using namespace std;

int main(){
    int a=3;
    int*b=&a;//b here is a pointer storing the address of a
    //&------------>(address of)operator

    //*------------>(value at)derefence of operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the value at address b is"<<*b<<endl;

    //pointer to pointer
    int **c=&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at adress value_at(value_at(c))"<<**c<<endl;
    
    return 0;
}