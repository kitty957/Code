#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int  number = rand() % 5 + 1; // choose a random number
    int guess;

    cout << "what is the number? ";
    cin >> guess;

    if (guess == number)
    {
        cout << "Correct! The number was " << number << endl;
    }
    else 
    {
        cout <<"Incorrect. The number was " << number << endl;
    }
}