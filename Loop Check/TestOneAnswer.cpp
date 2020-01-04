#include <iostream>

int main(){

  int num;

  std::cout << "Please enter a number: " << std::endl;
  std::cin >> num;

  //Very close, but this does not display anything.
  //Hint: What number is i?
  for(int i; i < num; i += 2) {
    std::cout << "Even numbers up to entered number: "<< i << std::endl;
  }

  return 0;
}
