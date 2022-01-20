# include <iostream>

int main(){
  int n = 0, i = 0, curmax;

  std::cout << "Please input a number:" << std::endl;
  std::cin >> n;

  while(n != 1){
    i++;
    if (n % 2 == 0){
      n /= 2;
    }
    else{
      n = n*3 + 1;
    }
    if (curmax < n){
      curmax = n;
    }
  }
  std::cout << "Steps count: " << i << std::endl;
  std::cout << "Maximum number in the process: " << curmax << std::endl;
}