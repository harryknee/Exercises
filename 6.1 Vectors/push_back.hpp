#include <iostream>
#include <vector>

int main(){
  std::vector<int> v;
  int a,b,c;

  std::cin >> a >> b >> c;
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);

  std::cout << v[0]*(v[1]+v[2]);
}