//Once again, we are considering vin1 and vin2 as sets. After the function call vout should contain their intersection.
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

void intersection_vector(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
  for (int i=0; i < vin2.size(); i++){
    if (search_vector(vin2[i], vin1) != -1){
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
  intersection_vector(vin1,vin2,vout);

  for (int i=0;i<vout.size();i++){
    std::cout << vout[i] << std::endl;
  }
}