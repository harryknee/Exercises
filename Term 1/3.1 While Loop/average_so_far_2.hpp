# include <iostream>
# include <string>
using namespace std;

int main(){
  double n = 0, temp, sum;
  int i = 1;
  cin >> sum;
  while(true){
    cin >> temp; 
    i = i + 1; 
    sum = sum + temp;
    n = sum/i;
    cout << "the average so far is: " << n << endl;
  }
}