#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    sort(s.begin(), s.end(), greater<char>());
    
    answer.append(s);
    
    return answer;
}