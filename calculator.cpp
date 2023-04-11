#include <iostream>
using namespace std;

// Functions to make math
float add(float num1, float num2);
float subs(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2, bool *div0);

int main()
{
    // This program takes 2 numbers from the user and prints the result

    float num1, num2, result;
    char op;
    bool div0 = false;

    cout << "Enter the first number: ";
    while(!(cin >> num1))
    {
        cout << "Enter a number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Enter the second number: ";
    while(!(cin >> num2))
    {
        cout << "Enter a number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cout << "Enter the desired operation (+, -, *, /): ";
    cin >> op;

    // Checks valid operation
    while (op != '+' && op != '-' && op != '*' && op != '/')
    {
        cout << "Please enter a valid operation: ";
        cin >> op;
    }

    switch (op)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subs(num1, num2);
        break;
    case '*':
        result = mult(num1, num2);
        break;
    case '/':
        result = div(num1, num2, &div0);
        break;
    default:
        cout << "Error" << endl;
        return 0;
        break;
    }

    if (div0 == false)
    {
        cout << "The result is: " << result << endl;
    }

    return 0;
}

// FUNCTIONS
float add(float num1, float num2)
{
    return num1 + num2;
}

float subs(float num1, float num2)
{
    return num1 - num2;
}

float mult(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2, bool *div0)
{
    if (num2 == 0)
    {
        cout << "Can't divide by 0!" << endl;
        *div0 = true;
    }
    else
    {
        return num1 / num2;
    }
}