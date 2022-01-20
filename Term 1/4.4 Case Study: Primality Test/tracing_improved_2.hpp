// third version, still far from perfect 
// but at least more efficient
#include <iostream>
 
int main(){
    int n;
    bool found_factor = false;
 
    std::cout << "please enter an integer greater than 1" << std::endl;
    std::cin >> n;
 
    // "as soon as cf^2 is greater than n
    // then we know that cf has become greater than q"
 
    for(int cf = 2; (cf*cf <= n) && !found_factor; cf++){
        std::cout << "Top of loop.\n";
        std::cout << "cf: " << cf << std::endl;
        std::cout << "found_factor: " << found_factor << std::endl;
        if( (n % cf) == 0){
            std::cout << "Entering conditional." << std::endl;
            found_factor = true;
            std::cout << "found_factor is set to: " << found_factor << std::endl;
        }
        std::cout << "End of loop.\n";
 
    }
 
    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}