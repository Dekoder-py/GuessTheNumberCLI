#include <iostream>
#include <random>

using std::cout, std::cin, std::endl;

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 100);

  int secretNumber = dist(gen);

  int guess;

  cout << secretNumber << endl; // DEBUGGING - DELETE LATER

  cout << "Guess the number! It's between 1 and 100." << endl;

  while (true) {
    cout << "Enter your guess: ";
    cin >> guess;

    if (guess == secretNumber)
      break;
    else {
      if (guess > secretNumber)
        cout << "The number is smaller than " << guess << endl;
      else
        cout << "The number is bigger than " << guess << endl;
    }
  }

  cout << "You guessed it! The number is " << secretNumber << endl;
}
