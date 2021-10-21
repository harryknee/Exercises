#include <iostream>
#include <string>
 
int main(){
 
    double data_in, data_out;
    std::string unit_in, unit_out;
 
    // we declare variables for the input and the output
    // the length is a number, the unit name is text
 
    bool valid_unit = true;
    // useful way to define constants
 
    std::cin >> data_in >> unit_in;
    // we don't print a prompt, we just read the input
 
    if((unit_in == "C")||(unit_in == "c")){
        unit_out = "F";
        data_out = data_in * 1.80 + 32;
    }
    else if((unit_in == "F")||(unit_in == "f")){
        unit_out = "C";
        data_out = (data_in - 32) / 1.80;
    }
    else{
      valid_unit = false;
    }
    if(valid_unit){
      std::cout << data_out << " " << unit_out << std::endl;
    }
    else{
      std::cout << "unit not valid";
    }

}