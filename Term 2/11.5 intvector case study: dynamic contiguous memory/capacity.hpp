#include <iostream>
#include <vector>
 
int main(){
 
    std::vector<int> v;
 
    for(int i = 0; i < 10; i++){
        v.push_back(i);
        std::cout << i << " was added"<< std::endl;
        std::cout << "size: " << v.size() << std::endl;
        std::cout << "capacity: " << v.capacity() << std::endl;
        std::cout << std::endl;
    }
 
}

/*
0 was added
size: 1
capacity: 1

1 was added
size: 2
capacity: 2

2 was added
size: 3
capacity: 4

3 was added
size: 4
capacity: 4

4 was added
size: 5
capacity: 8

5 was added
size: 6
capacity: 8

6 was added
size: 7
capacity: 8

7 was added
size: 8
capacity: 8

8 was added
size: 9
capacity: 16

9 was added
size: 10
capacity: 16
  */