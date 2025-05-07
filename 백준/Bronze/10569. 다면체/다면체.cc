#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    vector<pair<int, int>> v(T);
    for (auto& p : v) {
        cin >> p.first >> p.second;
    }

    vector<int> s;
    for (const auto& p : v) {
        s.push_back(2 - p.first + p.second);
    }

    for (const int& f : s) {
        cout << f << '\n';
    }

    return 0;
}