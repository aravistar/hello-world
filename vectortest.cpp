#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> numbers;
  int size, temp;
  cout << "How many numbers do you want to input? ";
  cin >> size;
  for(int i = 1;i<size+1;i++){
    cout << "Enter number " << i << ": ";
    cin >> temp;
    numbers.push_back(temp);
  }

  cout << "Your list of numbers: ";
  for(int i = 0;i<size;i++){
    cout << numbers[i] << ", ";
  }
  return 0;
}
