//This function should check if the vector contains an element with value n and return the index of (the first occurrence of) the element if it is found and -1 if not.
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

int main(){
  int n = 5;
  std::vector<int> vin;

  for (int i=0; i<10; i++){
    vin.push_back(i);
  }
  std::cout << search_vector(n, vin);
}