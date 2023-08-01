#include <iostream>

using namespace std;

int main() {

	int x1, x2, x3;
	int y1, y2, y3;
	int x4, y4;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	x4 = x1 ^ x2 ^ x3;
	y4 = y1 ^ y2 ^ y3;
	cout << x4 << y4;
	
	
}