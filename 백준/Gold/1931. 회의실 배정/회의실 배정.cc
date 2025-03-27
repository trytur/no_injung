#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int>> v;	// 회의시간 저장

bool cmp(pair<int, int> p1, pair<int, int> p2) {	// 정렬 기준을 정하는 함수, cmp는 그 기준에 따라 true/false를 반환해서 정렬에 사용됩니다.
	if (p1.second == p2.second) { 
		return p1.first < p2.first;	// 끝나는 시간이 같다면? 시작 시간이 빠른 게 먼저 오게 해
// true면						false면
// → p1이 p2보다 앞에 오게 정렬해라  → p2가 p1보다 앞에 와야 한다
	}
	else {
        return p1.second < p2.second;	// 끝나는 시간이 다르다면? 더 빨리 끝나는 회의가 먼저 오게 해
// true면						false면
// → p1이 p2보다 앞에 오게 정렬해라  → p2가 p1보다 앞에 와야 한다4
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {	// 총 N개의 회의 정보를 입력받음
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	int ans = 0;	// 정답이 저장될 변수 → 최대로 선택 가능한 회의 수
	sort(v.begin(), v.end(), cmp);	// sort를 통해 정렬

	int temp = 0;	// 이전 회의의 끝나는 시간을 저장하는 변수
	for (auto a : v) {
		if (a.first >= temp) {	// 정렬된 회의 목록을 하나씩 꺼내면서
			ans++;	// 회의 수 1 증가
			temp = a.second;	// 이 회의의 시작 시간이 이전 회의 끝나는 시간보다 크거나 같다면 → 겹치지 않으니까 선택!
		}
	}
	cout << ans;
}