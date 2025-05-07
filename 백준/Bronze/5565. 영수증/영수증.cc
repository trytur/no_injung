#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    vector<int> v;
    
    while (v.size() < 10) {
        int x;
        cin >> x;

        if (x >= 0 && x <= 10000) {
            v.push_back(x);
        } else {
            cout << "0 이상 10000 이하의 값을 입력하세요.\n";
        }
    }

    int total = 0;
    for (int x : v){
        total += x;
    }

    int result = 2 * v[0] - total;
    
    cout << result << "\n";
}