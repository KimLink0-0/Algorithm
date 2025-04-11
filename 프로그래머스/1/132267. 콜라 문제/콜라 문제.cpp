#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a)
    {
        int quotient = (n / a);
        n = n - quotient*a + quotient*b;
        answer += quotient*b;
    }
    
    return answer;
}