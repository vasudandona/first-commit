#include<iostream>
using namespace std;

int main(){
    // array example
    int marks[4]={23,45,56,89};
    int mathmarks[4];
    mathmarks[0]=2278;
    mathmarks[1]=738;
    mathmarks[2]=536;
    mathmarks[3]=578;
    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;

    //you can change the value of an array
    marks[2]=455;
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl;

    cout<<"these are mathmarks "<<endl;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    for(int i=0;i<4;i++){
        cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
    }
    //please do while and do-while also
    //pointers and arrays
    int*p=marks;
    cout<<*(p++);//aisa krne pe sbse pehle vali value print hogi lekin uske baad vaapis print krenge toh agli vali value print hogi
    //cout<<"the value of marks[0] is "<<*p<<endl;
    //cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    //cout<<"the value of marks[2] is "<<*(p+2)<<endl;
   // cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    return 0;
}