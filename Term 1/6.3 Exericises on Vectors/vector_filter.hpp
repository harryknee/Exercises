# include <iostream>
# include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
  for (int i=0; i < vin.size(); i++){
    if (vin[i] < t){
      vout.push_back(vin[i]);
    }
  }
}

int main(){
  double t=3;
  std::vector<double> vin;
  std::vector<double> vout;

  //vin is from -2 to 5
  for (int i=-2;i<5;i++){
    vin.push_back(i);
  }

  filter_v(vin,t,vout);
  
  //vout is expected to be -2 to 2
  for (int i=0; i<vout.size();i++){
    std::cout << vout[i] << std::endl;
  }
}