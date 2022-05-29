#include <iostream>

class Counter{
 
public:
 
    Counter(){
        c = 0;
    }
 
    void inc(){
        c++;
    }
 
    int get_count() const {
        return c;
    }
 
private:
 
    int c;
 
};

int main(){
  Counter c1;
  c1.inc();
  std::cout << c1.get_count() << std::endl;

  // c1.c = 3;
  // this will not run as int c in private!
}