#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> findDwarfs(const vector<int>& dwarfs) {
    int total = accumulate(dwarfs.begin(), dwarfs.end(), 0);

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (total - dwarfs[i] - dwarfs[j] == 100) {
                vector<int> realDwarfs;

                for (int k = 0; k < 9; ++k) {
                    if (k != i && k != j) {
                        realDwarfs.push_back(dwarfs[k]);
                    }
                }
                return realDwarfs;
            }
        }
    }
}

int main() {
    vector<int> dwarfs(9);

    // 입력 받기
    for (int& x : dwarfs) {
        cin >> x;
    }

    // 정답 7명을 함수로부터 받아옴
    vector<int> result = findDwarfs(dwarfs);

    // 정렬 후 출력
    sort(result.begin(), result.end());

    for (const int& x : result) {
        cout << x << '\n';
    }

    return 0;
}