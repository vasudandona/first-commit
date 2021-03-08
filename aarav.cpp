#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int i=1;
    char al;
    Beep(400, 430);

    while (i <= 3)
    {

        cout << endl;
        cout << i;
        Beep(345, 390);
        //Sleep(350);
        i++;
    }

    Beep(280, 650);
    Beep(250,800);

    return 0;
}