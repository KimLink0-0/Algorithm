#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    
    long long answer = 0;
    long long distance = 0;
    
    // a 와 b 가 서로 다를 때
    if ( a != b )
    {
        
        // a 와 b 중 큰 숫자를 기준으로 거리를 구해 반복 횟수로 정한다
        if ( a > b )
        {
            
            distance = a - b;
            for (int i = 0; i <= distance; i++ )
            {
                answer += a - i;
            }
            
        }
        
        if ( b > a )
        {
            
            distance = b - a;
            for (int i = 0; i <= distance; i++ )
            {
                answer += b - i;
            }
        }
    }
    else 
    // a 와 b 가 같을 때
    {
        answer = a;
    }
    
    
    return answer;
}