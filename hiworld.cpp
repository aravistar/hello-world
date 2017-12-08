#include <iostream>
//using namespace std;

int main(){
  int num1, num2, sum;
  std::cout << "Hello world. Please enter your first number: ";
  std::cin >> num1;
  std::cout << "\nPlease enter your second number: ";
  std::cin >> num2;
  std::cout << "Your first number is " << num1 << ". Your second number is "
    << num2 << ". The sum or your two numbers is " << (num1+num2) << std::endl;

  return 0;
}
