#include <iostream>
using namespace std;

int main() {
	int A, B, N, n = 0;

	cin >> N;

	for (A = 1; A <= 1000; A++) {
		for (B = 1; B <= 1000; B++) {
			if (A * A - B * B == N) {
				n++;
			}
		}
	}
	cout << n;
}