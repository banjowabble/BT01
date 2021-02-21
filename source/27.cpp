#include <iostream>
using namespace std;
int main ()
{
    int n;
    do
    {
        cin >> n;
        if (n==-1)
        {
            cout << "Bye";
            break;
        }
        cout << ((n>=0 && n%5==0)? n/5 : -1) << endl;
    }while (true);
}
