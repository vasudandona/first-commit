#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

//fib(5)
//fib(4)+fib(3)
//fib(3)+fib(2)+fib(1)
// this way a simple fn is repeated many times so try not to use recursion

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);//this is not correct because there will be a time when it becomes negative
}
//factorial(4)=4*factorial(3)
//factorial(3)=3*factorial(2)
//factorial(2)=2*factorial(1)
//factorial(1)=1
int main(){
int a;
    //factorial of a number
    //6!=6*5*4*3*2*1=720
    //0!=1 by definition
    //n!=n*(n-1)!
    cout<<"enter a no "<<endl;
    cin>>a;
    cout<<"the factorial of a is "<<factorial(a)<<endl;
    cout<<"the term in fibonacci sequence at position "<< a <<"is "<<fib(a)<<endl;
    return 0;
}