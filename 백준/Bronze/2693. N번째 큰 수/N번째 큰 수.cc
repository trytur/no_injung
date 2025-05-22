#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
	vector<int> A(10);

	for (int i = 0; i < T; i++) {
		for (int& x : A) {
			cin >> x;
		}
		sort(A.begin(), A.end(), greater<int>());	// 내림차순 정렬, sort는 기본적으로 오름차순 정렬
		cout << A[2] << "\n";
	}
}