# include <iostream>
# include <string>
using namespace std;

int main(){
  string a;
  cin >> a;
  while((a != "STOP")&&(a != "Stop")&&(a != "stop")){
    cout << a << endl;
    cin >> a;
  }
}