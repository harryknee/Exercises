#include <iostream>
#include <cmath>
 
int sum_pwr(double x, int n){
  int tmp = 0;
  for (int i = 1; i < n+1 ; i++){
    tmp = tmp + pow(x,i); //pow(x,i) => x^i, C++ doesn't recognise x^i!!
  }
  return tmp;
}
int main(){
  double x;
  int n;
  std::cout << "please enter x, n:\n";
  std::cin >> x >> n;
  std::cout << "sum of power series = " << sum_pwr(x,n) << std::endl;
}