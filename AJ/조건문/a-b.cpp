#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a - b < 0) {
		cout << -1;
	}
	else {
		cout << a - b;
	}
}