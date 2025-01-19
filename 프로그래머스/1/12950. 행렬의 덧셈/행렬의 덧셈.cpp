#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    // 0. 행과 열의 사이즈를 측정
    int row     = arr1.size();
    int column  = arr1[0].size();
    
    for (int i = 0; i < row; ++i)
    {
        
        // 2-1. 값을 담고 있는 벡터 temp 를 생성
        vector<int> temp;
        
        for (int j = 0; j < column; ++j)
        {
            // 1. 각각 행렬의 i 행 j 열 을 더한 값을 추출
            int value = arr1[i][j] + arr2[i][j];
            
            // 2-2. temp 백터에 1. 에서 구한 값을 넣음
            temp.push_back(value);
        }
        // 3. temp 를 answer 에 넣음
        answer.push_back(temp);
    }
    
    return answer;
}