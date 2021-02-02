#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int d, m, month , year, c, y;
    cin >> d >> month >> year;
    c = year/100;
    y = year%100;
    if (month > 2) m = month;
    else
    {
        m = month + 12;
        y-=1;
    }
    int w = (d + floor((13*(m+1))/5) + y + floor(y/4) + floor(c/4) + (5*c));
    w = w % 7;
    string weekday[7] = {"Saturday","Sunday","Monday","Tuesday", "Wednesday","Thursday","Friday"};
    cout << weekday [w];
}
