#include <iostream>
//#include <algorithm>

using namespace std;

int main() {

	int a, b, c;
	int mx;
	cin >> a >> b >> c;
	mx = ((a >= b) && (a >= c)) ? a : ((a <= b) && (b >= c)) ? b : c;
	cout << mx;

}