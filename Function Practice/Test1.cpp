#include <iostream>

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
//double divide(double num1, double num2);

int main(){

  int userChoice;
  double num1;
  double num2;
  double answer;
  std::cout << "1. Add\n 2. Subtract\n 3. Multiply\n Select an option: ";
  std::cin >> userChoice;

  std::cout << "Please enter the first number: ";
  std::cin >> num1;

  std::cout << "Please enter the second number: ";
  std::cin >> num2;

  switch(userChoice){
    case 1:
      answer = add(num1, num2);
      break;
    case 2:
      answer = subtract(num1, num2);
      break;
    case 3:
      answer = multiply(num1, num2);
      break;
    /*
    Don't worry about this, we will wait for exception practice for dividing by 0.

    case 4:
      answer = divide(num1, num2);
      break;
    */
  }

  std::cout << "The answer is: " << answer;
  return 0;
}

double add(double num1, double num2){
    return (num1 + num2);
}

double subtract(double num1, double num2){
    return (num1 - num2);
}

double multiply(double num1, double num2){
    return (num1 * num2);
}

//---------------------------Your code here---------------------------------
/*
  Write an add, subtract, and multipy function that all take 2 double parameters
  They should return a double after adding, subtracting, or multiplying
*/
