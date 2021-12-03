//Exercise: filtering values
//Write a program that reads from the user a number n, then reads n numbers from the users and stores them in a vector. The program then reads a number t from the user and prints all the numbers in the vectors that are less than t.
#include <iostream>
#include <vector>

int main(){
  int n, t, tmp;
  std::vector<int> li, lio;

  std::cout << "Please input the total number of numbers to be stored.\n";
  std::cin >> n;

  std::cout << "Please now input the numbers wishing to be stored.\n";
  for (int i=0; i < n; i++){
    std::cin >> tmp;
    li.push_back(tmp);
  }

  std::cout << "Please input the threshold number.\n";
  std::cin >> t;
  for (int i=0; i < li.size(); i++){
    if (li[i] < t){
      lio.push_back(li[i]);
    }
  }
  std::cout << "Numbers that are less than the threshold are:\n";
  for (int i=0; i < lio.size(); i++){
    std::cout << lio[i] << std::endl;
  }
}