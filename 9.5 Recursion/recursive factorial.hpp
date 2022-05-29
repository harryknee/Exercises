#include <iostream>

int mfact(int n){
  if (n == 0){
    return 1;
  }
  else{
    n = n * mfact(n-1);
    return n;
  }
}

int main(){
  std::cout << mfact(5);
}