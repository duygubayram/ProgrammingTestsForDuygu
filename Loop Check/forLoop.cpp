#include <iostream>

int main(){
  //Initialized Variables
  int enteredNum;


  std::cout << "Please enter a number: " << std::endl;
  std::cin >> enteredNum;

  /*This is unnecessary for a beginner to worry about
  I have added it in case you wanted to play with it and to let you
  see some code you will write later on so it's less intimidating when
  it's time to use it.*/
  while(std::cin.fail()){
    std::cout << "Sorry, that is not a number." << std::endl;
    //Clears the cin.fail() state
    std::cin.clear();
    //Flushes the buffer from the previous input
    std::fflush(stdin);
    std::cin >> enteredNum;
  }


//-----------------Assignment starts here--------------------


/*
  Create a for loop that will return all the even numbers up to
  the integer value in the variable "enteredNum"


*/

//for(){}

  return 0;
}
