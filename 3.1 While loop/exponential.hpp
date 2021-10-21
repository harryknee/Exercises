#include <iostream>
 
int main(){
    int n, temp, i, counter = 0;
    std::cin >> n >> i;
    temp = 1;
    while(counter < i){
        temp *= n;
        counter = counter + 1;
    }
    std::cout << n << "^" << i << " = " << temp << std::endl;
}