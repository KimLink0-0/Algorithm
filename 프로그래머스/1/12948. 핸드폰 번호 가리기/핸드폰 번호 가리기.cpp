#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    int numberSize = phone_number.length();
    
    for (int i = 0; i < numberSize-4; ++i)
    phone_number.replace(i, 1, "*");
    
    
    answer = phone_number;
    
    return answer;
}