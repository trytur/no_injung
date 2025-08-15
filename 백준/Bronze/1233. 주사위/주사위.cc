#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n1, n2, n3;
    vector <int> S1, S2, S3;
    cin >> n1 >> n2 >> n3; // push_back 안에 넣는 값은 int여야 함

    const int maxSum = n1 + n2 + n3;
    vector<int> freq(maxSum + 1, 0);    // 인덱스 0~maxSum, 변수명(크기, 초기값);
    // 합의 범위가 작게 한정돼있는 문제이므로 map 대신 배열 또는 벡터를 사용함

    for (int i = 1; i <= n1; i++) {
        S1.push_back(i);
    }
    for (int j = 1; j <= n2; j++) { // 가독성 위해 변수 따로 설정함
        S2.push_back(j);
    }
    for (int k = 1; k <= n3; k++) {
        S3.push_back(k);
    }

    for (int a : S1) {
        for (int b : S2) {
            for (int c : S3) {
                freq[a + b + c]++;  // 해당 합의 빈도수 1 증가
            }
        }
    }

    int bestSum = 3;    // 최대합: 3으로 초깃값 설정 - (1, 1, 1)인 경우
    int bestCnt = freq[3];  // 최대 빈도 수: 합이 3인 경우로 초깃값 설정
    for (int s = 4; s <= maxSum; s++) {
        if (freq[s] > bestCnt) { // 기존 빈도 수보다 큰 경우 갱신
            bestCnt = freq[s];  // 최대 빈도 수 갱신
            bestSum = s;    // 최대합 갱신
        }
    }

    cout << bestSum << '\n';

    return 0;
}