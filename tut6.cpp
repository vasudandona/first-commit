#include<iostream>// system header file
/* there are two types of header files:
1. system header files : it comes with compiler
2.user defined header files: it is written by the programmer */
// # include "this.h"--> this will produce an error if this.h is not present in the current directory
using namespace std;

int main(){
    int a=4,b=5;
    cout<<"these are comparision operators in c++"<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    return 0;
}