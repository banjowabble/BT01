#include <iostream>
using namespace std;
int main()
{
	int n, min, max, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
    {
		int a;
		cin >> a;
		sum += a;
		if (i == 0)
		{
			max = a;
			min = a;
		}
		else
		{
			if (max < a) max = a;
			if (min > a) min = a;
		}
	}
	cout << "Mean: " << sum/n << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
}
