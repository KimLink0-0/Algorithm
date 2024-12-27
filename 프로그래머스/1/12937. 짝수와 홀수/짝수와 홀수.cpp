#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    
    string answer;
    
    if (num == 0){
        answer = "Even";
    }
    else {
        
        if (num > 0) {
    
            switch (num % 2 ){
                case 0 : answer = "Even";
                    break;
                case 1 : answer = "Odd";
                    break;
            }
        }
        else {
                    switch ((-1*num) % 2 ){
                case 0 : answer = "Even";
                    break;
                case 1 : answer = "Odd";
                    break;
        }
    }
    }
    
    
    return answer;
}