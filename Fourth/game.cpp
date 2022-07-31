#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  srand(time(NULL));

 // while (true)
  //{
    int number = rand() % 10 + 1; // choose a random number
    int guess;
    int count = 0;


    do
    {
      cout << "what is the number? (1-10) ";
      cin >> guess;
      count++;

      if (guess == number)
      {
        cout << "Correct! The number was " << number << endl;
        cout << "you made" << count <<"guesses." << endl;
      }
      else if (guess > number)
      {
        cout << "Too hight " << endl;
      }
      else // if (guess < number)
      {
        cout << "Too low" << endl;
      }
    } while (guess != number);
  //}
}
