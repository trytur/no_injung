#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector <string> color = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	vector <string> data(3);

	for (int i = 0; i < 3; i++) {
		cin >> data[i];
	}

	int a, b, c;

	for (int j = 0; j < 10; ++j) {
		if (data[0] == color[j]) {
			a = j;
			break;
		}
	}

	for (int j = 0; j < 10; ++j) {
		if (data[1] == color[j]) {
			b = j;
			break;
		}
	}

	for (int j = 0; j < 10; ++j) {
		if (data[2] == color[j]) {
			c = j;
			break;
		}
	}

	long long ans = 10LL * a + b;	// C++은 더 넓은 범위의 자료형을 채택

	for (int i = 0; i < c; ++i) {
		ans *= 10;
	}
    
    cout << ans << '\n';

	return 0;
}