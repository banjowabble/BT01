#include <iostream>
using namespace std;
int main ()
{
    int i=0;
    while (i<24)
    {
        if (i == 0) cout << "12 midnight" << '\n';
        else if (i == 12) cout << "12 noon" << '\n';
        else if (0 < i && i < 12) cout << i << "am" << '\n';
        else cout << (i-12) << "pm" << '\n';
        i++;
    }
}
