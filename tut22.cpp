#include <iostream>
using namespace std;

//nesting of member function

class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};
void binary::read()
{
    cout << "enter a binary no " << endl;
    cin >> s;
}
void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format " << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment()
{
    //chk_bin(); nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) = '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display()
{
    cout << "displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
return 0;
}

//oops-classes and objects

//c++--> initially called --> c with classes
// class--> extension of structures (in c)
// structures had limitations
// - members are public
// -no methods
// classes= structures+more
//classes--> can have methods and properties
//classes--> can make few members as private and few as public
//structure in c++ are typedef
//you can declare objects along with class declaration like this:
/*class employee{
        //class definition
        }harry,rohan,vasu;*/
//harry.salary=8 makes no sense if salary is private
