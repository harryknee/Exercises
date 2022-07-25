#include <iostream>

int fib(int n){
  if (n == 0){
    return 0;
  }
  if (n == 1){
    return 1;
  }
  else{
    return fib(n-1) + fib(n-2);
  }
}

int main(){
  std::cout << fib(5);
}

/**Fibonacci sequence
Consider the Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, …

For non-negative integers we have:

fib(n) = 0 if n is 0
fib(n) = 1 if n is 1
fib(n) = fib(n - 1) + fib(n - 2) otherwise
Write a recursive function int fib(int n) implementing this and a main to test the function.**/