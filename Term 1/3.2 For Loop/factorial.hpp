# include <iostream>
using namespace std;

int main(){
  int n, product; //n factorial
  cin >> n;
  product = 1;
  for(int i = n; i > 0; i--){
    product = product * i;
  }
  cout << product;
}