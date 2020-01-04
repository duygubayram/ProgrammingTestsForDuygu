#include <iostream>

int main(){

  int num;

  std::cout << "Please enter a number: " << std::endl;
  std::cin >> num;

  for(int i == 0; i < num; i += 2) {
    std::cout << "Even numbers up to entered number: "<< i << std::endl;
  }

  return 0;
}
