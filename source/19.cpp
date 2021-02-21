#include <iostream>
using namespace std;
int main() {
	int a, c, d;
	cin >> a >> c >> d;
	bool b = ((a < c) && (c < d)) || ((a > c) && (c > d));
	cout << (b==1 ? "true" : "false");
}
