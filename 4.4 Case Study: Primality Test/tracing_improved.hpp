// second version, still not very efficient
#include <iostream>
 
int main(){
    int n;
    bool found_factor = false;
 
    std::cout << "please enter an integer greater than 1" << std::endl;
    std::cin >> n;
 
    // we add a condition in the loop
    // using the boolean and
 
    for(int cf = 2; (cf < n) && !found_factor; cf++){
      std::cout << "Top of loop\n" ;
      std::cout << "cf: " << cf << std::endl;
      std::cout << "found_factor: " << found_factor << std::endl;
      
      if( (n % cf) == 0){
        std::cout << "Entering conditional" << std::endl;
        found_factor = true;
        std::cout << "found_factor is set to: " << found_factor << std::endl;
      }

      std::cout << "Bottom of loop\n";
    }
 
    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}