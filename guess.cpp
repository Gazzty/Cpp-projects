/* In this program the computer will chose a positive number greater than 0 and the user will have to choose */

#include <iostream>
using namespace std;

// Functions
int randomNum(int diff)
{
    int num;
    switch (diff)
    {
    case 1:
        num = 1 + (rand() % 5);
        break;
    case 2:
        num = 1 + (rand() % 15);
        break;
    case 3:
        num = 1 + (rand() % 50);
        break;
    }
    return num;
}

int main()
{
    int lives = 3, num, guess;
    int difficulty;
    bool win = false;

    cout << "Choose a dificulty level" << endl
         << "1: Easy - 2: Difficult - 3: Insane!" << endl;
    cin >> difficulty;

    while (difficulty < 1 || difficulty > 3)
    {
        cout << "Enter a valid option: ";
        cin >> difficulty;
    }

    // Select num regarding difficulty
    num = randomNum(difficulty);

    // Tell player to choose a number
    cout << "Try to guess the number!" << endl;

    while (!win && lives > 0)
    {
        // Validate input and check if player won
        while (!(cin >> guess))
        {
            cout << "Choose a valid number: ";
        }
        if (num == guess)
        {
            win = true;
        }
        else
        {
            lives--;
            if (guess > num && lives > 0)
            {
                cout << "You seem to be aiming too high... " << lives << " attempts left." << endl
                     << "Try again!" << endl;
            }
            else if (guess < num && lives > 0)
            {
                cout << "You are aiming too low... " << lives << " attempts left." << endl
                     << "Try again!" << endl;
            }
        }
    }

    if (win)
    {
        cout << "YOU WIN!!" << endl;
    }
    else
    {
        cout << "You lost :(" << endl;
    }

    return 0;
}