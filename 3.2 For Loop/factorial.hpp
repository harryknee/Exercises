# include <iostream>
using namespace std;

int main(){
  int n, product, temp; //n factorial
  cin >> n;
  product = 1;
  temp = n;
  for(int i = 0; i < n; i++){
    product = product * temp;
    temp -= 1;
  }
  cout << product;
}