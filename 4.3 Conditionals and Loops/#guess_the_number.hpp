# include <iostream>
# include <string>

int main(){
  // n = lower, n1 = higher, tmp = current guess
  // fed = feedback
  int n, n1, tmp;
  char fed;

  std::cin >> n >> n1;
  // accounts for halving when difference is 1
  tmp = n1 + n;

  while((n1-n) > 0){
    tmp = n1 + n;
    if (tmp % 2 == 0){
      tmp = tmp/2;
    }
    else{
      tmp = (tmp-1)/2;
    }

    std::cout << "Is it higher or lower than " << tmp << "?" << std::endl;
    std::cin >> fed;

    if (fed == 'h'){ // higher => set = lowerbound
      n = tmp;
    }
    if (fed == 'l'){ // lower => set = upperbound
      n1 = tmp;
    }
    if (fed == 'y'){ // it is the number
      break;
    }
  }
  std::cout << "The number is " << tmp;
}