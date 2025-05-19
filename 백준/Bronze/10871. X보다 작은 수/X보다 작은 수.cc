#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N, X;
	cin >> N >> X;

	vector<int> A(N);

	for (int& x : A)
		cin >> x;

	for (const int& x : A)
		if (x < X)
			cout << x << " ";
}