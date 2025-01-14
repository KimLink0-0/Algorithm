#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = ""; 
    
    int length = s.length();
    int index;
        
    if (length % 2 == 1)
    {
        index = length / 2;
        
        answer = s[index];
    }
    else
    {
        index = length / 2;
        
        answer = s[index-1];
        answer.push_back(s[index]);
    }
    
    
    return answer;
}