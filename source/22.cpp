#include <iostream>
using namespace std;
int main ()
{
    double mass, height;
    cin >> mass >> height;
    double bmi_index = mass / (height * height);
    cout << bmi_index;
    return 0;
}
