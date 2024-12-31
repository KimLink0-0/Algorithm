#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;

    
    
    // 자릿수를 계산하기
    int count = 0;
    int n = x;
    
    while (n > 0)
    {
        count ++;
        n = n / 10;
    }

    
    
    // 자릿수의 합을 구하기
    int sum = 0;
    n = x;
    
    for (int i = 0; i < count; i++)
    {
        
        sum += n % 10;
        n = n / 10;
        
    }

    

    // 자릿수의 합으로 원본 수를 나눠서 나머지가 0이 나와야한다
    answer = x % sum == 0 ? true : false;



    return answer;
}
