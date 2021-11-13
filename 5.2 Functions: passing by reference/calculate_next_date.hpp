#include <iostream>
 
bool leap_year(int year){
    bool ly;

    if(year % 4 == 0){
      if (year % 100 == 0){
        if (year % 400 ==0){
          ly = true;
        }
        else{
          ly = false;
        }
      }
      else{
          ly = true;
      }
    }
    else{
      ly = false;
    }
 
    return ly;
}
 
void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int max_d;
    // even months before august or odd months after july has 30 days
    if(((m1%2 == 0) && (m1<8))||((m1%2 == 1) && (m1>7))){
      // a leap year has 28 days in february
      if ((leap_year(y1)) && (m1 == 2)){
        max_d = 28;
      }
      else{
        max_d = 30;
      }
    }
    else{
      // other months having 31 days
      max_d = 31;
    }

    d2 = d1, m2 = m1, y2 = y1;
    if(d1 < max_d){
      d2 ++;
    }
    else{
      if(m1 < 12){
        m2 ++;
        d2 = 1;
      }
      else{
        y2 ++;
        m2 = 1, d2 = 1;
      }
    }
}
 
int main(){
    int y, m, d, yout, mout, dout;

    std::cout << "please input the year, month and date in respective order:\n"; 
    std::cin >> y >> m >> d;

    next_date(d, m, y, dout, mout, yout);
    std::cout << "the next date is " << yout << "/" << mout << "/" << dout;
}