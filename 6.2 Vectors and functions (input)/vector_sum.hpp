#include <iostream>
#include <vector>
 
double sum_vector(const std::vector<double>& vin){
    double sum = 0;
 
    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }
    
    // vin.push_back(sum);

    return sum;
}
 
int main(){
    std::vector<double> v;
    double n, tmp;

    std::cout << "Please input the total number of numbers to be stored.\n";
    std::cin >> n;

    std::cout << "Please now input the numbers wishing to be stored.\n";
    for (int i=0; i < n; i++){
      std::cin >> tmp;
      v.push_back(tmp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;
}