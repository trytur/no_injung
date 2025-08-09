#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int N, F;
	cin >> N >> F;
	
	N = N - N % 100;

	for (int i = N; i < N + 100; i++) {
		if (i % F == 0) {
			if (i % 100 < 10) {
				cout << "0" << i % 100 << '\n';
			}
			else
				cout << i % 100 << '\n';
				break;
		}
	}
}