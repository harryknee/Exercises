#include <iostream>
 
int main(){
    int n, i1 = 0, i2 = 0;
    std::cin >> n;
 
    // n times we draw one row
    // note that we need a different variable
    // for the loop counter
    while(i2 < n){
        // the following loop draws one row
        while(i1 < n){
            std::cout << "*"; 
            // there is no << std::endl
            // because we want them on the same row
            i1++;
        }

        std::cout << std::endl;
        i1 = 0;
        i2++;
 
    }
 
}