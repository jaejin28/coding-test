#include <iostream>
#include <cstdio>

using namespace std;

int n, k;
int arr[1000010];

int main() {

	int a, b;
	long long Sum;
	double Avg;

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < k; i++) {
		cin >> a >> b;
		Sum = 0;
		Avg = 0;
		for (int j = a; j <= b; j++) {
			Sum += arr[j];
		}
		Avg = (double)(Sum) / (b - a + 1);
		printf("%.2f\n", Avg);
	}

}