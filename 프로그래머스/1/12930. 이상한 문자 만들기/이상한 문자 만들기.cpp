#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<string> dividedStrings;
    string currentWord;
    
    for (char c : s)
    {
        if (c == ' ')
        {
            dividedStrings.push_back(currentWord);
            currentWord = "";
        }
        else
        {
            currentWord += c;
        }
    }
    
    dividedStrings.push_back(currentWord);
    
    for (string dividedString : dividedStrings)
    {
        for (int i = 0; i < dividedString.size(); ++i)
        {
            char currentChar = dividedString[i];
            char transformedChar = currentChar;
        
            // i = 0 일 때 홀 수
            if ((i+1)%2 != 0)
            {
                // 홀수 일 때, 소문자라면
                if (currentChar >= 'a' && currentChar <= 'z')
                {
                    // 대문자로 변환
                    transformedChar = currentChar + ('A' - 'a');
                }
            }
            else
            {
                // 짝수 일 때, 대문자라면
                if (currentChar >= 'A' && currentChar <= 'Z')
                {
                    // 소문자로 변환
                    transformedChar = currentChar - ('A' - 'a');
                }
            }
            
            answer += transformedChar;
        }
        answer += ' ';
    }
    
    answer.pop_back();
    
    return answer;
}
