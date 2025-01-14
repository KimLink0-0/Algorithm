#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    int count = n;
    
    for (int i = 0; i < count/2; ++i)
    {
        answer.append("수박");
    }
    
    if (count % 2 == 1)
    {

        answer.append("수");
    }
    
    return answer;
}