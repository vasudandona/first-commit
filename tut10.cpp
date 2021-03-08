#include <iostream>
using namespace std;

int main()
{
    /* loops in c++:
    there are three types of loops in c++:
    1.for loop
    2.while loop
    3.do-while loop
    */

    // for loop in c++
    //int i=1;
    //cout<<i;
    //i++;

    //    for(initialistion;condition;updation){
    //        loop body(c++ code);
    //    }

    //    for(int i=0;i<4;i++){
    //        cout<<i<<endl;
    //    }

    //    for(int i=0;34<=40;i++){
    //        cout<<i<<endl;
    //    }

    // while loop in c++
    // syntax:
    // while(condition):
    // {
    //     c++ statements;
    // }

    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // do while loop
    // syntax:
    // do
    // {
    //     c++ statements;
    // }while (condition);
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 50);

    return 0;
}