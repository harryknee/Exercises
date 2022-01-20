# include <iostream>
# include <string>

int main(){
  double len, wid;
  std::cout << "enter length and width(same unit)"<< std::endl;
  std::cin >> len;
  std::cin >> wid;
  std::cout << "perimeter = " << 2*(len+wid) << std::endl << "area = " << wid*len << std::endl;
}

