#include <iostream>
 
int main(){
    int n, i1 = 0, i2 = 0, tmp = 1;
    std::cin >> n;
 
    while(i2 < n){
        // the following loop prints one row
        i2++;
        i1 = 0;
        tmp = 1;

        while(i1 < n){
            std::cout << tmp * i2 << "\t";
            i1++;
            tmp++;
        }

        std::cout << std::endl;
    }
 
}