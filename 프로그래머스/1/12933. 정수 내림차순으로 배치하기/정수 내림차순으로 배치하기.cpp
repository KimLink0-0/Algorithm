#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {

    long long answer = 0;
 
    int count = 0;
    long long nCount = n;

    vector<long long> nArray;

    while (nCount > 0)
    {
        long long iValue = nCount % 10;
        nArray.push_back(iValue);
        nCount /= 10;
        count++;
    }

    for (int j = 0; j < count; j++)
    {

        for (int k = 0; k + 1 < count; k++)
        {
            if (nArray[k] > nArray[k + 1])
            {
                continue;
            }
            else
            {
                long long temp = nArray[k];
                nArray[k] = nArray[k + 1];
                nArray[k + 1] = temp;
            }
        }

    }


    for (int l = 0; l < count; l++)
    {
        answer *= 10;
        answer += nArray[l];
    }

    return answer;
}