//KBC - AN ATTEMPT BY AARAV AND VASU

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <direct.h>
#include <time.h>

using namespace std;

//setw(82)

int choice;
char choice1;

class KBC
{
public:
    char name[15], lname[15];

    int welcome();
    int prompt_to_play();
    int show_rules();
    int prompt_to_game();
    int game();
    int chk_ans();
};

int main()
{
    system("CLS");
    KBC K;
    K.welcome();

    return 0;
}

int KBC::welcome()
{
    cout << setw(82) << "WELCOME TO QUIZ MASTERS!!!";
    cout << endl;
    Sleep(1600);

    prompt_to_play();
    return 0;
}

int KBC::prompt_to_play()
{
    cout << "\n\nDO YOU WANT TO PLAY???\nPress Y to continue and N to exit.\n";
    cin >> choice1;

    if (choice1 == 'Y' || choice1 == 'y')
    {
        show_rules();
    }

    else if (choice1 == 'N' || choice1 == 'n')
    {
        cout << "EXITING";
        Sleep(800);
        cout << ".";
        Sleep(800);
        cout << ".";
        Sleep(800);
        cout << ".";
        exit(0);
    }
    else
    {
        cout << "\nEnter a valid choice!!!\n";
        system("CLS");
        prompt_to_play();
    }
    return 0;
}

int KBC::show_rules()
{
    system("CLS");
    cout << "\nThis game tests your general knowledge.\n";
    Sleep(2000);
    cout << "You will be asked five questions one by one, ";
    Sleep(1200);
    cout << "with four options to chose from.\n";
    Sleep(2000);
    cout << "You have to choose the correct answer to progress to the next round.\n";
    Sleep(2000);
    cout << "To win the game, you have to correctly answer five questions!\n";
    Sleep(2000);
    cout << "The difficulty level of the questions increases with each round.\n";
    Sleep(2000);
    cout << "Hope you understood the rules!!!";
    Sleep(2000);
    cout << endl;

    prompt_to_game();

    return 0;
}

int KBC::prompt_to_game()
{
    cout << "Do you want to continue???\nPress Y to continue and N to exit.\n";
    cin >> choice1;

    if (choice1 == 'Y' || choice1 == 'y')
    {
        //game();
    }

    else if (choice1 == 'N' || choice1 == 'n')
    {
        cout << "EXITING";
        Sleep(800);
        cout << ".";
        Sleep(800);
        cout << ".";
        Sleep(800);
        cout << ".";
        exit(0);
    }
    else
    {
        cout << "\nEnter a valid choice!!!\n";
        system("CLS");
        prompt_to_game();
    }
    return 0;
}
int KBC::game()
{
    int question;
    srand(time(0));
    question = (rand() % 5) + 1;
    switch (question)
    {
    case 1:
        cout << "Q1";
        cout << "Enter your choice " << endl;
        cin >> choice;
        // check_ans();
        break;

    case 2:
        cout << "Q2";
        cout << "Enter your choice " << endl;
        cin >> choice;
        // check_ans();
        break;

    case 3:
        cout << "Q3";
        cout << "Enter your choice " << endl;
        cin >> choice;
        // check_ans();
        break;

    case 4:
        cout << "Q4";
        cout << "Enter your choice " << endl;
        cin >> choice;
        // check_ans();
        break;

    case 5:
        cout << "Q5";
        cout << "Enter your choice " << endl;
        cin >> choice;
        // check_ans();
        break;
    }
}
int KBC::chk_ans()
{
    int a;
    switch (a)
    {
    case 1:
        switch (choice)
        {

        case w:
            cout << "correct answer " << endl;
            break;
        default:
            cout << "Incorrect " << endl;
            break;
        }
        break;

    case 2:
        switch (choice)
        {

        case w:
            cout << "correct answer " << endl;
            break;
        default:
            cout << "Incorrect " << endl;
            break;
        }
        break;
    }
}
}

//fn()
//a=random;
/*switch(a) {
    case 1: 
    cout << q1;
    cin>>x; 1,2,3,4
    //check_ans();
    break;
}

chk(int a)
{
    switch(a) {
    case 1:
    switch(x){
        case 1:
        case 2:
        case 4:
            sorry inc;
            break;
        case 3:
        correct ;
        
    }
    }

}
)
*/