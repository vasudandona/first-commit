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

int choice; //global variables
char choice1;
int level = 1;
int question;

class KBC //class
{
public:
    char name[15], lname[15];

    int welcome();
    int prompt_to_play();
    int show_rules();
    int prompt_to_game();
    int game();
    int check_ans1(int, int);
    int check_ans2(int, int);
    int check_ans3(int, int);
    int check_ans4(int, int);
    int check_ans5(int, int);
    int qchoice1(int);
    int qchoice2(int);
    int qchoice3(int);
    int qchoice4(int);
    int qchoice5(int);
    int EXit();
};

int main() //main
{
    system("CLS");
    KBC K;       //object
    K.welcome(); //initiation function

    return 0;
}

int KBC::welcome() //function to welcome the user
{
    cout << setw(82) << "WELCOME TO QUIZ MASTERS!!!";
    cout << endl;
    Sleep(1600);

    prompt_to_play();
    return 0;
}

int KBC::prompt_to_play() //prompt to play or exit
{
    cout << "\n\nDO YOU WANT TO PLAY???\nPress Y to continue and N to exit.\n";
    cin >> choice1;

    if (choice1 == 'Y' || choice1 == 'y')
    {
        show_rules();
    }

    else if (choice1 == 'N' || choice1 == 'n')
    {
        EXit();
    }
    else
    {
        cout << "\nEnter a valid choice!!!\n";
        system("CLS");
        prompt_to_play();
    }
    return 0;
}

int KBC::show_rules() //display rules
{
    system("CLS");
    cout << "\nThis game tests your general knowledge.\n";
    Sleep(2000);
    cout << "You will be asked five questions one by one, ";
    Sleep(1200);
    cout << "with four options to chose from.\n";
    Sleep(2000);
    cout << "You have to choose the THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! to progress to the next round.\n";
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

int KBC::prompt_to_game() //prompt to continue to game
{
    cout << "\nDo you want to continue???\nPress Y to continue and N to exit.\n";
    cin >> choice1;

    if (choice1 == 'Y' || choice1 == 'y')
    {
        game();
        //EXit();
    }

    else if (choice1 == 'N' || choice1 == 'n')
    {
        EXit();
    }
    else
    {
        cout << "\nEnter a valid choice!!!\n";
        system("CLS");
        prompt_to_game();
    }
    return 0;
}
int KBC::game() //main game driver function
{
    switch (level)
    {
    case 1:
        cout << "\nLevel 1: ";
        srand(time(0)); //randomnize function
        question = (rand() % 5) + 1;
        qchoice1(question); //function called to produce random question
        break;

    case 2:
        cout << "\nLevel 2: ";
        srand(time(0)); //randomnize function
        question = (rand() % 5) + 1;
        qchoice2(question);
        break;

    case 3:
        cout << "\nLevel 3: ";
        srand(time(0)); //randomnize function
        question = (rand() % 5) + 1;
        qchoice3(question);
        break;

    case 4:
        cout << "\nLevel 4: ";
        srand(time(0)); //randomnize function
        question = (rand() % 5) + 1;
        qchoice4(question);
        break;

    case 5:
        cout << "\nLevel 5: ";
        srand(time(0)); //randomnize function
        question = (rand() % 5) + 1;
        qchoice5(question);
        break;
    }

    return 0;
}

int KBC::qchoice1(int question) //randomnly produces questions
{
    switch (question)
    {
    case 1:
        //MUSIC
        cout << "BY WHICH OF THESE NICKNMAES IS NAGPUR ALSO KNOWN AS ? " << endl;
        cout << " 1.DIAMOND CITY  2.ORANGE CITY    3.PINK CITY   4.CITY OF LAKES  " << endl;

        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans1(question, choice);
        break;

    case 2:
        cout << "THE SCHEME FOR RURAL EMPLOYMENT NREGA HAS BEEN NAMED AFTER WHICH LEADER ? " << endl;
        cout << " 1.MAHATMA GANDHI    2.RAJIV GANDHI    3.JAWAHARLAL NEHRU    4.INDIRA GANDHI " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans1(question, choice);
        break;

    case 3:
        cout << "WHAT DOES 'S' STAND FOR IN A 'SIM' CARD ? " << endl;
        cout << " 1.SERVICE    2.SMART    3.SCIENCE    4.SUBSCRIBER " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans1(question, choice);
        break;

    case 4:
        cout << "OTHER THAN 'KING' WHAT WORD IS COMMON TO THE NAMES OF THE TWO IPL TEAMS ? " << endl;
        cout << " 1.KNIGHT   2.RIDER     3.ROYAL    4.CHALLENGER " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans1(question, choice);
        break;

    case 5:
        cout << "WHAT IS THE MIDDLE NAME OF SACHIN TENDULKAR ? " << endl;
        cout << " 1.RAVI  2.RAMESH   3.RAJESH   4.RAMAKANT " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans1(question, choice);
        break;
    }
    return 0;
}
int KBC::qchoice2(int question) //randomnly produces questions
{
    switch (question)
    {
    case 1:
        //MUSIC
        cout << "WHICH OF THESE CRICKETER HOLDS THE RECORD FOR PLAYING THE HIGHEST NUMBER OF TEST MATCHES ? " << endl;
        cout << " 1.STEPHEN FLEMING   2.ALLAN BORDER    3.STEVE WAUGH    4.SACHIN TENDULKAR " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans2(question, choice);
        break;

    case 2:
        cout << "THE PLANT BEARING WHICH OF THESE FRUITS IS A VINE ? " << endl;
        cout << " 1.MANGO   2.WATERMELON    3.APPLE   4.BANANA " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans2(question, choice);
        break;

    case 3:
        cout << "WHICH SECTION OF IPC ADDRESSES THE SUBJECT OF HOMOSEXUALITY ? " << endl;
        cout << "1. 302   2. 301   3. 377  4. 372 " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans2(question, choice);
        break;

    case 4:
        cout << "FLOOR EXERCISE ,VAULT AND UNEVEN BARS ARE EVENTS IN WHICH SPORT ? " << endl;
        cout << " 1.GYMNASTICS   2.SWIMMING    3.SKATING    4.WRESTLING " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans2(question, choice);
        break;

    case 5:
        cout << "WHAT HAS BEEN THE CURRENCY OF GREECE SINCE 2002 ? " << endl;
        cout << " 1.EURO   2.PESO    3.DRACHMA    4.LIRA " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans2(question, choice);
        break;
    }
    return 0;
}
int KBC::qchoice3(int question) //randomnly produces questions
{
    switch (question)
    {
    case 1:
        //MUSIC
        cout << "WHAT IS THE COLOUR OF OCTOPUS BLOOD ? " << endl;
        cout << " 1.BLUE   2.WHITE   3.RED    4.YELLOW " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans3(question, choice);
        break;

    case 2:
        cout << "WHICH OF THESE STATES SHARES ITS BORDER WITH ONLY ONE OTHER INDIAN STATE ? " << endl;
        cout << " 1.SIKKIM    2.JAMMU AND KASHMIR    3.TRIPURA     4.HIMACHAL PRADESH " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans3(question, choice);
        break;

    case 3:
        cout << "WHICH AMONG THESE IS AN ISLAND COUNTRY ? " << endl;
        cout << " 1.MONACO    2.MADAGASCAR     3.YEMEN      4.FRENCH GUYANA " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans3(question, choice);
        break;

    case 4:
        cout << "WHAT DO THE FIVE RINGS OF THE OLYMPICS REPRESENT ? " << endl;
        cout << " 1.FIVE GAMES     2.FIVE LANGUAGES    3.FIVE CONTINENTS     4.FIVE OCEANS " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans3(question, choice);
        break;

    case 5:
        cout << "WHAT DOES 'F' STANDS FOR IN THE MOTORSPORTS POPULARLY KNOWN AS F1 ? " << endl;
        cout << " 1.FAST     2.FORCE     3.FORMULA      4.FLY " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans3(question, choice);
        break;
    }
    return 0;
}
int KBC::qchoice4(int question) //randomnly produces questions
{
    switch (question)
    {
    case 1:
        //MUSIC
        cout << "WHICH AMONG THESE INDIAN BATSMAN HAS NOT SCORED AN INTERNATIONAL CENTURY IN EACH OF THREE FORMATS TEST,ODIs,T20i ? " << endl;
        cout << " 1.ROHIT SHARMA     2.VIRAT KOHLI     3.SURESH RAINA     4.KL RAHUL " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans4(question, choice);
        break;

    case 2:
        cout << "ACCORDING TO A PROVERB,WHAT IS SAID TO BE 'THE MOTHER OF INVENTION' ? " << endl;
        cout << " 1.SOCIETY     2.PROBLEM    3.SCIENCE      4.NECESSITY " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans4(question, choice);
        break;

    case 3:
        cout << "WHICH OF THESE IS A CHEMICAL PRESENT IN THE PERIODIC TABLE ? " << endl;
        cout << " 1.EUROCIUM     2.AMERICIUM      3.ASIACIUM     4.AFRICIUM " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans4(question, choice);
        break;

    case 4:
        cout << "WHICH OF THESE BRANDS OF PENS IS NAMED AFTER HIGHEST PEAK IN WESTERN EUROPE ? " << endl;
        cout << " 1.REYNOLDS     2.MONT BLANC     3.FABER-CASTELL     4.SHEAFFER " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans4(question, choice);
        break;

    case 5:
        cout << "WHICH OF THESE IS THE NAME OF AN ISLAND AS WELL AS A TYPE OF COFFEE ? " << endl;
        cout << " 1.MOCHA     2.ARABICA     3.JAVA      4.OOLONG " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans4(question, choice);
        break;
    }
    return 0;
}
int KBC::qchoice5(int question) //randomnly produces questions
{
    switch (question)
    {
    case 1:
        //MUSIC
        cout << "WHAT WAS INDIA'S FIRST UNMANNED LUNAR SPACECRAFT LAUNCHED IN OCTOBER 2008 ? " << endl;
        cout << " 1.CHANDRAYAAN 1      2.IRNSS-1H       3.GSAT-19       4.CARTOSAT-2 " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans5(question, choice);
        break;

    case 2:
        cout << "GYANESHWARI,LICHCHAVI,GORAKHDHAM AND SARAYU ARE ALL NAMES OF WHAT ? " << endl;
        cout << " 1.SAREE TYPES     2.RIVERS        3.EXPRESS TRAINS      4.BUDHHIST MONASTRIES " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans5(question, choice);
        break;

    case 3:
        cout << "HOW MANY LANGUAGES FEATURE ON THE LANGUAGE PANEL OF CONTEMPERORY RESERVE BANK OF INDIA CURRENCY NOTES ? " << endl;
        cout << " 1. 15       2. 10     3. 12     4. 18 " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans5(question, choice);
        break;

    case 4:
        cout << "WHICH SON OF KARNA SURVIVED,THE KURUKSHETRA WAR AND TOOK PART IN YUDDHISHTHIRA'S ASWAMEDHA YAGYA ? " << endl;
        cout << " 1.VRISHAKETU     2.SATYASENA      3.VRISHASENA      4.VRIHANTA " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans5(question, choice);
        break;

    case 5:
        cout << "LOCKJAW IS A SYMPTOM OF WHICH OF THESE DISEASE ? " << endl;
        cout << " 1.TETANUS   2.CHLOERA     3.PLAGUE    4.DIPHTHERIA " << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        check_ans5(question, choice);
        break;
    }
    return 0;
}

int KBC::check_ans1(int question, int choice) //checks for answer
{
    switch (question)
    {
    case 1:
        switch (choice)
        {

        case 2:
            //MUSIC
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;

        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);

            break;
        }
        break;

    case 2:
        switch (choice)
        {

        case 1:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 3:
        switch (choice)
        {

        case 4:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 4:
        switch (choice)
        {

        case 3:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 5:
        switch (choice)
        {

        case 2:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;
    }
    return 0;
}
int KBC::check_ans2(int question, int choice) //checks for answer
{
    switch (question)
    {
    case 1:
        switch (choice)
        {

        case 4:
            //MUSIC
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;

        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 2:
        switch (choice)
        {

        case 2:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 3:
        switch (choice)
        {

        case 3:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 4:
        switch (choice)
        {

        case 1:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 5:
        switch (choice)
        {

        case 1:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;
    }
    return 0;
}
int KBC::check_ans3(int question, int choice) //checks for answer
{
    switch (question)
    {
    case 1:
        switch (choice)
        {

        case 1:
            //MUSIC
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;

        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);

            break;
        }
        break;

    case 2:
        switch (choice)
        {

        case 1:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 3:
        switch (choice)
        {

        case 2:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 4:
        switch (choice)
        {

        case 3:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 5:
        switch (choice)
        {

        case 3:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;
    }
    return 0;
}
int KBC::check_ans4(int question, int choice) //checks for answer
{
    switch (question)
    {
    case 1:
        switch (choice)
        {

        case 2:
            //MUSIC
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;

        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);

            break;
        }
        break;

    case 2:
        switch (choice)
        {

        case 4:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 3:
        switch (choice)
        {

        case 2:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 4:
        switch (choice)
        {

        case 2:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 5:
        switch (choice)
        {

        case 3:
            cout << "THAT IS THE CORRECT ANSWER!!!\nMOVING TO NEXT LEVEL!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;
    }
    return 0;
}
int KBC::check_ans5(int question, int choice) //checks for answer
{
    switch (question)
    {
    case 1:
        switch (choice)
        {

        case 1:
            //MUSIC
            cout << "CONGRATULATIONS!!!\nYOU WON THE GAME!!! " << endl;
            level++;
            game();
            break;

        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 2:
        switch (choice)
        {

        case 3:
            cout << "CONGRATULATIONS!!!\nYOU WON THE GAME!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 3:
        switch (choice)
        {

        case 1:
            cout << "CONGRATULATIONS!!!\nYOU WON THE GAME!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 4:
        switch (choice)
        {

        case 1:
            cout << "CONGRATULATIONS!!!\nYOU WON THE GAME!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;

    case 5:
        switch (choice)
        {

        case 1:
            cout << "CONGRATULATIONS!!!\nYOU WON THE GAME!!! " << endl;
            level++;
            game();
            break;
        default:
            cout << "INCORRECT!!!\nBETTER LUCK NEXT TIME :( " << endl;
            exit(0);
            break;
        }
        break;
    }
    return 0;
}

int KBC::EXit()
{
    cout << "EXITING";
    Sleep(800);
    cout << ".";
    Sleep(800);
    cout << ".";
    Sleep(800);
    cout << ".";
    exit(0);
    return 0;
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

cout << "WHAT IS ORANGE CITY?";
*/