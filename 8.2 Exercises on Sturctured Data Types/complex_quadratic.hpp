// 19.01.2022
#include <iostream>
#include <cmath>

// declare a data structure Complex
struct Complex{
    double x;
    double y;
    bool complex = false;
};

// define a function returning Complex type
Complex solution(double a,double b, double c){
  double x, y = 0;
  Complex sol;
  double det = std::pow(b,2) - 4 * a * c;
  if (det < 0){
    det = - det;
    sol.complex = true;
  }
  x = - b / (2 * a);
  y = std::sqrt(det) / (2 * a);
  sol.x = x;
  sol.y = y;
  return sol;
}

// define void function that prints out in the required format
void print_complex(Complex sol){
  if (sol.complex){
    std::cout << sol.x << " + " << sol.y << "i" << std::endl;
    std::cout << sol.x << " - " << sol.y << "i" << std::endl;
  }
  else{
    std::cout << sol.x + sol.y << std::endl;
    std::cout << sol.x - sol.y << std::endl;
  }
}

int main() {
  double a,b,c;
  std::cin >> a >> b >> c;
  Complex sol = solution(a, b ,c);
  print_complex(sol);
} 

/**Quadratic equation solver
Define a Complex structured data type representing a complex number and use it to extend the quadratic equation solver so that also complex solutions can be considered.**/