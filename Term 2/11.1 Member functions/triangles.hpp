// Exercise: triangles
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
 
struct Point{
    double x;
    double y;
 
    std::string to_s() const {
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
 
    double distance(Point p) const {
        return std::sqrt(std::pow((x - p.x), 2) + std::pow((y - p.y), 2));
    }
}; 

struct Triangle{
    Point pa;
    Point pb;
    Point pc;
    
    double perimeter(){
      return pa.distance(pb) + pa.distance(pc) + pb.distance(pc);
    }
};
 
int main(){
    std::ifstream infile;
    infile.open("points.txt");
  
    Point tmp;
    std::vector<Point> points;
    while (infile >> tmp.x >> tmp.y){
      points.push_back(tmp);
    }

    infile.close();
  
    Triangle t1;
    t1.pa = points[0];
    t1.pb = points[1];
    t1.pc = points[3];
  
    std::cout << t1.perimeter();
}