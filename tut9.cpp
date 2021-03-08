#include<iostream>
using namespace std;

int main(){
    int age;
    //cout<<"this is tutorial 9";
    cout<<"tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you cannot come to my party "<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and will get a kid pass to the party "<<endl;
    }
    else{
        cout<<"you can come to my party "<<endl;
    }

    //selection control structure:switch case statement
    // switch(age)
    // {
    //     case18:
    //     cout<<"you are 18"<<endl;
    //     break;

    //     case22:
    //     cout<<"you are 22 "<<endl;
    //     break;

    //     default:
    //     cout<<"no special cases"<<endl;
    // }
    return 0;
}