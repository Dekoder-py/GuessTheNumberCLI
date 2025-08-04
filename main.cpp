#include <iostream>

using std::cout, std::cin, std::endl;

int main(){
  int secretNumber = 7;
  int guess;

  do {
  cout << "Enter your guess: ";
  cin >> guess;
  } while (guess != secretNumber);

  cout << "You guessed it! The number is " << secretNumber;
}
