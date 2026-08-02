
#include <iostream>
using namespace std;

// Function to print the multiplication table for one number
void printTable(int number)
{
    cout << "\nMultiplication Table for " << number << ":" << endl;

    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

// Function to print multiplication tables from 1 to N
void printTables(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printTable(i);

        if (i != n)
        {
            cout << "---------------------------" << endl;
        }
    }
}

int main()
{
    int number, n;

    // Part A
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Error: Please enter a positive integer." << endl;
        return 0;
    }

    printTable(number);

    cout << endl;

    // Part B
    cout << "Enter a number N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Please enter a positive integer." << endl;
        return 0;
    }

    printTables(n);

    return 0;
}
