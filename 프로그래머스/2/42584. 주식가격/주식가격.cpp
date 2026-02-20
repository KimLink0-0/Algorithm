#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n);
    stack<int> s; // 인덱스를 저장할 스택

    for (int i = 0; i < n; i++) {
        // 현재 가격이 이전 가격보다 떨어졌다면 스택에서 pop
        while (!s.empty() && prices[s.top()] > prices[i]) {
            int topIdx = s.top();
            s.pop();
            answer[topIdx] = i - topIdx;
        }
        s.push(i);
    }

    // 끝까지 가격이 떨어지지 않은 나머지 처리
    while (!s.empty()) {
        int topIdx = s.top();
        s.pop();
        answer[topIdx] = n - 1 - topIdx;
    }

    return answer;
}