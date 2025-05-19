#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    long long X, Y;
    cin >> X >> Y;

    int Z = (Y * 100) / X;  // 현재 승률 (정수형)

    if (Z >= 99) {
        cout << -1;
        return 0;
    }

    // 목표 승률: Z+1
    // 수식: n ≥ ((Z+1)*X - 100*Y) / (100 - (Z+1))

    long long numerator = (long long)(Z + 1) * X - 100 * Y;
    long long denominator = 100 - (Z + 1);

    long long result = (numerator + denominator - 1) / denominator; // 정수에서의 올림
    cout << result;
}