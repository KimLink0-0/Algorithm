#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    // 0. 예외처리
    if (number.size() < 3)
    {
        return 0;
    }
    
    // 1. 3명의 학생 추출
    for (int i = 0; i < number.size(); ++i)
    {
        for (int j = i + 1; j < number.size(); ++j)
        {
            for (int k = j + 1; k < number.size(); ++k)
            {
                // 2. Value 더하기
                int sumNum = number[i]+number[j]+number[k];
                // 3. 합이 0 일 경우 answer += 1;
                if (sumNum == 0)
                {
                    answer += 1;
                }
            }
        }
    }
    
    return answer;
}