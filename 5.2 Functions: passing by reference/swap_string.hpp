//the parameters of the function are linked to the variables in the main in such a way that any changes to the parameters are reflected also in the variables in the main. This can be achieved by passing by reference.
# include <iostream>
# include <string>

void swap(std::string& s1, std::string& s2){
  std::string tmp = s1;
  s1 = s2;
  s2 = tmp;
}

int main(){
  std::string s1, s2;
  std::cin >> s1;
  std::cin >> s2;
  swap(s1, s2);
  std::cout << "s1 = " << s1 << std::endl;
  std::cout << "s2 = " << s2 << std::endl;
}