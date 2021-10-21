# include <iostream>
# include <string>
using namespace std;

int main(){
  double n = 0, temp;
  int i = 1;
  cin >> n;
  while(true){
    cin >> temp; 
    i = i + 1; 
    n = (n + temp)/i;
    cout << "the average so far is: " << n << endl;
    //here we need n to be the sum again, so times it by i
    n = n * i; 
  }
}