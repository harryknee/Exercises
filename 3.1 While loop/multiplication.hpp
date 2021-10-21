# include <iostream>
using namespace std;

int main(){
  int n, counter = 0;
  double x, temp;

  cin >> x >> n;

  while(counter < n){
    temp += n;
    counter += 1;
  }
  std::cout << x << "*" << n << " = " << temp << std::endl;
}