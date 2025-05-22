#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<int> dwarfs(9);
    for (int& h : dwarfs) {
        cin >> h;
    }

    int total = accumulate(dwarfs.begin(), dwarfs.end(), 0);

    // 마스크: 7명 선택 (0), 2명 제외 (1)
    vector<int> mask = {0, 0, 0, 0, 0, 0, 0, 1, 1};

    vector<int> result;

    do {
        int sum = 0;
        vector<int> temp;

        for (int i = 0; i < 9; ++i) {
            if (mask[i] == 0) {
                sum += dwarfs[i];
                temp.push_back(dwarfs[i]);
            }
        }

        if (sum == 100) {
            result = temp;
            break;
        }

    } while (next_permutation(mask.begin(), mask.end()));

    sort(result.begin(), result.end());

    for (int h : result) {
        cout << h << '\n';
    }

    return 0;
}