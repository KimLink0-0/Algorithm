#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) 
{
 int answer = 0;
    
    for (int i = 0; left+i <= right; ++i)
    {
        int oper = sqrt(left + i);
        
        // 제곱 수 = 약수가 홀수개
        if (oper*oper == left+i)
        {
            answer -= (left + i);
        }
        else
        {
            answer += (left + i);
        }
    }
    
    return answer;
}
