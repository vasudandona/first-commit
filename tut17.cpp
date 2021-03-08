#include<iostream>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
// int product(int a,int b){
//     //not recommend to use below lines with inline function
//     static int c=0;//this executes only once
//     c=c+1;//next time this function is run,the value of c will be retained 
//     // return a*b+c;
// }
float moneyreceived(int currentmoney,float factor=1.04){
    return currentmoney*factor;
}

int main(){
//     int a,b;
// cout<<"enter the value of a and b"<<endl;
// cin>>a>>b;
// cout<<"the product of a and b is "<<product(a,b)<<endl;// inline is used so that all of this becomes fast
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
// cout<<"the product of a and b is "<<product(a,b)<<endl;
int money=100000;
cout<<"if you have "<<money<< "rs in your bank account,you will receive "<<moneyreceived(money)<<endl;
cout<<"if you have "<<money<< "rs in your bank account,you will receive "<<moneyreceived(money,1.10)<<endl;

    return 0;
}