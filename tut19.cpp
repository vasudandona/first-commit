#include<iostream>
using namespace std;
int add(int a,int b){
    cout<<"using function with 2 arguments "<<endl;
    return a+b;
}

int add(int a,int b,int c){
    cout<<"using function with 3 arguments "<<endl;
    return a+b+c;
}
//volume of cylinder
int volume(double r,int h){
    return (3.14*r*r*h);
}

//volume of cuboid
int volume(int l,int b,int h){
    return(l*b*h);
}

//volume of cube
int volume(int a){
    return (a*a*a);
}
int main(){
    cout<<"the sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"the sum of 3 and 6 and 7 is "<<add(3,6,7)<<endl;
    cout<<"the volume of cuboid of side 3 and 6 and 7 is "<<volume(3,6,7)<<endl;
    cout<<"the volume of cube of side 3  is "<<volume(3)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6  is "<<volume(3,6)<<endl;
    
    return 0;
}