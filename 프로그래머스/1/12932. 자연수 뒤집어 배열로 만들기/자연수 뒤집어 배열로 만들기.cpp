#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    int count = 0;
    long long k = n;
    
    while (n > 0)
    {
        n = n / 10;
        count ++;
    }
    
    
    for (int i = 0; i < count; i++)
    {
        answer.push_back(k % 10);
        k = k / 10;
    }
    
    return answer;
}