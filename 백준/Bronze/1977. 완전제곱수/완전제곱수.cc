#include <iostream> // 콘솔 입출력을 위해 사용 (cin, cout)
#include <cmath> // 수학 함수들 사용을 위해 필요 (sqrt() 등)
#include <vector> // 동적 배열인 벡터(vector)를 사용하기 위해 포함

using namespace std; // std::cout이나 std::cin처럼 std::를 매번 쓰지 않도록 using namespace std;를 사용해 생략함

int M, N;
vector<int> v; // 제곱수를 저장할 동적 배열(벡터)
int main() {
	ios::sync_with_stdio(0); cin.tie(0); // 입출력 속도를 빠르게 하기 위한 코드

	cin >> M >> N;

	for (int i = sqrt(M); i <= sqrt(N); i++) { // 반복 범위 설정
// int 때문에 i에는 소수점을 제외한 수가 담기게 됨(더 작은 수부터 반복문 시작, 끝)
		if (i * i >= M && i * i <= N) { // 실제로 범위를 만족하는 지 다시 한 번 검사
// ex) M=10일 경우 반복문에서는 3포함, if문에서는 3 미포함, sqrt(N)은 상관이 없다.(i는 어짜피 정수여야 하기 때문)
			v.push_back(i * i); // 위에서 찾은 i에 대하여 sqrt를 씌우기 전인 값을 벡터에 저장
		}
	}

	int sum = 0;
	for (auto n : v) { // 범위 기반 for 문, 벡터 v에 있는 모든 값들을 하나씩 n에 꺼내서 반복하라는 의미
		sum += n;
	}

	if (v.size() == 0) { // 벡터가 비어있는 경우, 즉 완전제곱수가 범위 안에 존재하지 않는 경우
		cout << -1;
	}
	else { // 비어있지 않으면
		cout << sum << '\n' << v[0];
	}
}