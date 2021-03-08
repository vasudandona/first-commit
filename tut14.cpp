#include <iostream>
using namespace std;

struct employee
{
    int eID;      //4
    char favchar; //1
    float salary; //4
};
union money
{
    int rice;     //4
    char car;     //1
    float pounds; //4
};

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = lunch;
    cout << m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    // union money m1;
    // m1.rice=34;
    // cout<<m1.rice;

    // struct employee harry;
    // harry.eID=1;
    // harry.favchar='c';
    // harry.salary=1200000;
    // cout<<"harry.salary "<<harry.salary<<endl;
    // cout<<"harry.favchar "<<harry.favchar<<endl;
    // cout<<"harry.eID"<<harry.eID<<endl;

    return 0;
}