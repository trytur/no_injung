#include <iostream>
using namespace std;

int main() {
	int A, N, cnt = 0;

	cin >> N;

	for (int i = 2; i < N; i = i + 2) {
		A = (N - i - 2) / 2;
		if (A != 0) {
			cnt = cnt + A;
		}
	}

	cout << cnt << "\n";

	return 0;
}