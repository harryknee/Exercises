# include <iostream>
using namespace std;

int main(){
  double p, q;
  int i = 0;
  cin >> p >> q;
  cout << "we want to perform the integer division of " << p << " by " << q << endl;

  while(p >= q){
    cout << p << " is greater than " << q << " so we subtract " << p << " from " << q << endl;
    p -= q; //subtract q
    cout << "we get " << p << endl;
    i += 1;
  }
  
  cout << "the quotient is the number of subtraction " << i << endl;
  cout << "the remainder is the number we left at the end " << p;
}