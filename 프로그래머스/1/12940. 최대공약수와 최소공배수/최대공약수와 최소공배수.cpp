#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    // 1. 최대 공약수, 최소 공배수 준비
    int gcd;
    int mul = n*m;
    
    // 1-2. 큰 수를 왼쪽으로 n으로 정렬
    if (n < m)
    {
        int temp = n;
        n = m;
        m = temp;
    } 
    
    // 1-3. m = 0 이 될 때까지 반복
    while (m != 0)
    {
        if (n % m == 0)
        {
            // 1-4. 최대 공약수
            gcd = m;
            break;
        }
        else
        {
            int temp = n;
            n = m;
            m = temp % m;
        }
    }
    
    // 2. 최소 공배수 
    int lcm = mul/gcd;
    
    
    answer.push_back(gcd);
    answer.push_back(lcm);
    
    return answer;
}