//Similar to the one just above, but in this case we want to simulate the union of two sets, so only the elements in vin2 not already in vin1 should be included in vout (so vout should have no repetitions). In order to check whether an element of vin2 is already in vin1, use function
# include <iostream>
# include <vector>

int search_vector(int n, const std::vector<int>& vin){
  bool found = false;
  int i = 0;

  while ((i < vin.size()) && (found == false))
  {
    if (vin[i] == n){
      found = true;
    }
    else{
      i++;
    }
  }
  if (found == false){
    i = -1;
  }
  return i;
}

void union_vector(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
  vout = vin1;
  for (int i=0; i < vin2.size(); i++){
    if (search_vector(vin2[i], vout) == -1){
      vout.push_back(vin2[i]);
    }
  }
}

int main(){
  std::vector<int> vin1, vin2, vout;
  // vin1 is {-3,-2,-1,0,1,2}
  for (int i=-3;i<3; i++){
    vin1.push_back(i);
  }
  // vin2 is {0,1,2,3,4}
  for (int i=0;i<5; i++){
    vin2.push_back(i);
  }
  union_vector(vin1,vin2,vout);

  for (int i=0;i<vout.size();i++){
    std::cout << vout[i] << std::endl;
  }
}