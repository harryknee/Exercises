#include <iostream>
#include <cmath>

struct Point{
  double x, y;
};

struct Triangle{
  Point a, b, c;
};

double distance_points(Point p1, Point p2){
  double s = std::sqrt(std::pow(p2.x -p1.x ,2) + std::pow(p2.y - p1.y,2)); 
  return s;
}

double triangle_perimeter(Triangle t){
  double perimeter = distance_points(t.a, t.b) + distance_points(t.b, t.c) + distance_points(t.a, t.c);
  return perimeter;
}

int main(){
  Triangle t;
  std::cout << "Enter points:\n";
  std::cin >> t.a.x >> t.a.y >> t.b.x >> t.b.y >> t.c.x >> t.c.y;
  std::cout << "Perimeter is : " << triangle_perimeter(t);
}

/**Triangles
Define a Triangle structured data type that contains three Point fields for the vertices. Write a function double triangle_perimeter(Triangle t) which returns the perimeter of t (use function distance_points in this function).

Write a main to test the function.**/