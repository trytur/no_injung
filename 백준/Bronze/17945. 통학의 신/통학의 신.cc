#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int A, B, x1, x2;

	cin >> A >> B;

	int sq = sqrt(A*A-B);
	x1 = -A + sq;
	x2 = -A - sq;

	if (sq == 0) {
		cout << x1 << '\n';
	}
	else
		cout << x2<< " " << x1 << '\n';

	return 0;
}