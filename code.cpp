#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int postive_solve, negative_solve, descriment;

    int a;
    cout << "Enter the cofficient of x^2 : ";
    cin >> a;

    int b;
    cout << "Enter the cofficient of x : ";
    cin >> b;

    int c;
    cout << "Enter the value of constant : ";
    cin >> c;

    int option;
    cout << endl
         << "1. Nature of the roots.";
    cout << endl
         << "2. Solving the Problem." << endl
         << endl;
    cout << "Enter the number : ";
    cin >> option;

    descriment = sqrt((b * b) - 4 * a * c);
    postive_solve = (-b + descriment) / 2 * a;
    negative_solve = (-b - descriment) / 2 * a;

    if (option == 1)
    {
        if (descriment > 0)
        {
            cout << "If D > 0: The equation has two distinct real roots.";
        }
        else if (descriment == 0)
        {
            cout << "The equation has exactly one real root (a repeated root).";
        }
        else
        {
            cout << "The equation has two complex roots (not real).";
        }
    }
    else if (option == 2)
    {

        cout << "Solving the problem...";
        if (descriment == 0)
        {
            cout << endl
                 << "The solution and value of x is : " << postive_solve << " , " << postive_solve;
        }
        else
        {
            cout << endl
                 << "The solution and value of x is : " << postive_solve << " , " << negative_solve;
        }
    }

    return 0;
}
