#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (1 == arr.size())
    {
        answer.push_back(-1);
    }
    else 
    {
        int lowVIndex = 0;
        
        for (int i = 1; i < arr.size(); ++i)
        {
            if (arr[lowVIndex] > arr[i])
            {
                lowVIndex = i;
            }
        }
        
        for (int j = 0; j < arr.size(); ++j)
        {
            if (lowVIndex != j)
            {
                answer.push_back(arr[j]);
            }
        }
        
        
        
    }
    
     
    
    return answer;
}