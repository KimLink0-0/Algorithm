#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ternary = {};
    
    // 1. 3진법 역순으로 바꾸기
    
    while (n >= 3)
    {
        int remainder = n%3;
        ternary.push_back(remainder);
        n = n/3;
    }
    
    ternary.push_back(n);
    
    // 2. 10진법으로 표현하기

    int multiplier = 1;
    for (int i = 0; i < ternary.size(); ++i)
    {
        answer += ternary[ternary.size()-1-i] * multiplier;
        multiplier *= 3;
    }
    
    
    return answer;
}