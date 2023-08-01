#include <iostream>

using namespace std;

int main (){

	int a, b, c, d;
	int res = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b >> c >> d;
		res = a + b + c + d;
		if (res == 1) cout << "C" << "\n";
		else if (res == 2) cout << "B" << "\n";
		else if (res == 3) cout << "A" << "\n";
		else if (res == 4) cout << "E" << "\n";
		else cout << "D" << "\n";
	}
}