//This function should provide as output vector vout containing all the elements in vin1 followed by all the elements in v2.
# include <iostream>
# include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
  for (int i=0; i < vin1.size(); i++){
    vout.push_back(vin1[i]);
  }
  for (int i=0; i < vin2.size(); i++){
    vout.push_back(vin2[i]);
  }
}

int main(){
  std::vector<int> vin1, vin2, vout;

  for (int i=-3;i<3; i++){
    vin1.push_back(i);
  }
  for (int i=5;i<9; i++){
    vin2.push_back(i);
  }
  append_vectors(vin1,vin2,vout);

  for (int i=0;i<vout.size();i++){
    std::cout << vout[i] << std::endl;
  }
}