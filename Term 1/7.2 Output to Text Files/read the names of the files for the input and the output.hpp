//Same exercise as the one above, but this time instead of reading always from “input.txt” and writing always to “output.txt”, we want to read from the user the name of the input and output files. 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 
 
int main(){
    // read input
    std::string inputfilename;
    std::cout << "enter name of input file" << std::endl;
 
    std::cin >> inputfilename;
 
    std::ifstream infile; 
    infile.open(inputfilename);
    if (!infile.is_open()){
        std::cout << "error opening file";
        return EXIT_FAILURE;
    }
    
    std::vector<int> v;
    int tmp;
    while (infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();
    
    // write output
    std::string outputfilename;
    std::cout << "enter name of output file" << std::endl;
 
    std::cin >> outputfilename;

    std::ofstream outfile; 
    outfile.open(outputfilename);
    if (!outfile.is_open()){
        std::cout << "error opening file";
        return EXIT_FAILURE;
    }
    
    for (int i = v.size()-1; i >= 0 ;i--){
        outfile << v[i] << " ";
    }

    outfile.close();

    //reading the output
    infile.open(outputfilename);
    while (infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();
}