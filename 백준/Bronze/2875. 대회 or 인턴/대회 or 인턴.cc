#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, K;

	cin >> M >> N >> K;

	while (K > 0) {
		if (M / 2 < N)
			N = N - 1;
		else
			M = M - 1;
		K--;
	}

	int team = min(M / 2, N);
	cout << team << "\n";

	return 0;
}