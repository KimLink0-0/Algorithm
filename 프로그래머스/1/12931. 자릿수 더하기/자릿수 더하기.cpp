#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int operand = n;
    int count = 1;
    
    while (n > 0)
    {
        n = n / 10;
        count += 1;
    }
    
    
    
    for (int i = 0; i < count; i++)
    {
        answer += operand % 10;
        operand = operand / 10;       
    }
    
    

    return answer;
}