/* A console version of the classic rock paper scissors game */

#include <iostream>
using namespace std;

// Functions
char chooseWeapon()
{
    int option = 1 + rand() % 3;
    char w;

    switch (option)
    {
    case 1:
        w = 'r';
        break;
    case 2:
        w = 'p';
        break;
    case 3:
        w = 's';
        break;
    default:
        w = 'r';
        break;
    }

    return w;
}

int main()
{
    cout << "GET READY FOR BATTLE!" << endl
         << "First, the computer is choosing it's weapon." << endl;

    char cpuW = chooseWeapon();
    char userW;

    cout << "The computer already chose it's weapon!" << endl
         << "Which one will you choose?" << endl
         << "R - Rock / P - Papper / S - Scissors" << endl;

    // Input validation
    while(!(cin >> userW))
    {
        cout << "Choose a valid option: ";
    }
    // Change upper input to lower
    userW = tolower(userW);

    // Possible results
    cout << "Computer chose: " << cpuW << endl << "You chose: " << userW << endl;

    if(userW == cpuW)
    {
        cout << "It's a draw!!!" << endl;
    }
    
    if(userW == 'r')
    {
        if(cpuW == 'p')
        {
            cout << "You lost :(" << endl;
        }
        else if(cpuW == 's')
        {
            cout << "You won!" << endl;
        }
    }
    else if(userW == 'p')
    {
        if(cpuW == 's')
        {
            cout << "You lost :(" << endl;
        }
        else if(cpuW == 'r')
        {
            cout << "You won!" << endl;
        }
    }
    else if(userW == 's')
    {
        if(cpuW == 'r')
        {
            cout << "You lost :(" << endl;
        }
        else if(cpuW == 'p')
        {
            cout << "You won!" << endl;
        }
    }

    return 0;
}