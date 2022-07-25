#include <iostream>
 
int main(){
    int a;
    int* pi; 
 
    a = 2;
    pi = &a;
 
    std::cout << a << std::endl;
    std::cout << *pi << std::endl;
    // the two printing instructions above will both print 2
 
    *pi = 3;
    // this changes the value pointed by pi, in this case a
 
    std::cout << a << std::endl;
    std::cout << *pi << std::endl;
    // the two printing instructions above will both print 3
 
    a = 4;
 
    std::cout << a << std::endl;
    std::cout << *pi << std::endl;
    // the two printing instructions above will both print 4
 
}
/**Dereferencing
What's the use of storing a memory address in a pointer? There are several uses. One is that a pointer can be dereferenced. This means that we can access the memory area it points to in order to read or overwrite the value in it. For example:**/