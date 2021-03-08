#include<iostream>
using namespace std;

//this will not swap a and b
int sum(int a,int b){
    int c=a+b;
    return c;
}
void swap(int a ,int b){
    int temp=a;
    a=b;
    b=temp;
}

//call by reference using pointers

void swappointer(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// call by reference using c++ reference variables
//int&
void swapReferenceVar(int&a,int&b){
    int temp=a;
    a=b;
    b=temp;
    //return a
}
int main(){
    int x=4,y=5;
    //cout<<"the sum of 4 and 5 is "<<sum(a,b);
    cout<<"the value of X is "<<x<< "and the value of Y is "<<y<<endl;
    //swap(x,y);// bluetooth mein gaana
    // this actual value parameters copy to the formal parameters in the function
    //swappointer(&x,&y);// for this case address is same and we are not using other computer's memory
    swapReferenceVar(x,y);
    //swapReferenceVar(x,y)=766; using this the vakue of x will become 766 as a is the return type an dthe value of b will be 4
    cout<<"the value of X is "<<x<< "and the value of Y is "<<y<<endl;
    return 0;
}