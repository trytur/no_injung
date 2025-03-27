#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int N;
    cin >> N;
    
    vector<pair<int, int>> meetings;
    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> start >> end;
        meetings.push_back({start, end});
    }
    
    // 1. 시작 시간 기준 정렬
    sort(meetings.begin(), meetings.end());

    // 2. 우선순위 큐: 끝나는 시간 오름차순 (min-heap)
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto m : meetings) {
        int start = m.first;
        int end = m.second;

        // 제일 빨리 끝나는 회의가 현재 회의 시작 전이면 그 방 재사용 가능
        if (!pq.empty() && pq.top() <= start) {
            pq.pop(); // 기존 방 회의 끝났으므로 제거
        }

        // 현재 회의의 끝나는 시간을 큐에 넣음 (새 방 또는 재사용)
        pq.push(end);
    }

    cout << pq.size(); // 필요한 방 개수
}
