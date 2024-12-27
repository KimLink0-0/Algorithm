#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;

    vector<int> measure;
    
    long long x = sqrt(n);
    
    
    if (sqrt(n) - x == 0 )
    {
        answer = (x+1)*(x+1);
    }
    
    
    return answer;
}