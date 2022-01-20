//This function should return the index of the smallest element in the vector and -1 if the vector is empty.
# include <iostream>
# include <vector>

int min_vector_element(const std::vector<double>& vin){
  int tmp = -1;
  if (vin.size()==0){
    return tmp;
  }
  else{
    tmp = vin[0];
    for (int i=1; i < vin.size(); i++){
      if (vin[i] < tmp){
        tmp = vin[i];
      }
    }
    return tmp;
  }
}

int main(){
  std::vector<double> vin;

  for (int i=-10; i<10; i++){
    vin.push_back(i);
  }

  std::cout << min_vector_element(vin);
}