// half or triple-plus-one, until == 1
# include <iostream>

int main(){
  int n, n1, i = 0, j , curmax;

  std::cout << "Please input a range:" << std::endl;
  std::cin >> n >> n1;

  // loops for the range
  for(j = n; j < n1 + 1; j++){
    // re-initialise output and counter values for each new loop
    i = 0; 
    n = j;
    curmax = 0;

    // algorithm loop
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
    std::cout << "n = " << j << std::endl;
    std::cout << "\tSteps count: " << i << std::endl;
    std::cout << "\tMaximum number in the process: " << curmax << std::endl;
  }

}