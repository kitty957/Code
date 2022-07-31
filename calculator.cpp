#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
    //cout <<"What you want to do? (+, -, *, /)";
    
    string operation;
    cin >> operation;

    cout << "first number? ";

    double first_number;
    cin >> first_number;

    cout <<"second number? ";

    double second_number;
    cin >> second_number;

    double result;

    if (operation == "+")   
    {
        result = first_number + second_number;
    }
    else if (operation == "-")
    {
        result = first_number - second_number;
    }

    else if (operation == "*")
    {
        result = first_number * second_number;
    }

    else if (operation == "/")
    {
        result = first_number / second_number;
    }
    else
    {
    cout <<"Invalid operation: " <<operation;
    exit(1); 
    }

    cout << result << endl;
    }
}