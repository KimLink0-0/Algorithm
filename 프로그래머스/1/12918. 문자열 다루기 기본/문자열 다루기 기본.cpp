#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    
    // 길이가 4 or 6
    if (s.size() == 4 || s.size() == 6) {answer = true;}
    
    // 문자열이 하나라도 섞여있으면 false 리턴
    for (int i = 0; i < s.size(); ++i)
    {
        if (isalpha(s[i]))
        {
            answer = false;
            return answer;
        }
    }
    return answer;
}