#include <string>
#include <vector>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

using namespace std;

int solution(int num) {
    int answer = 0;
    int i;
    
    long long a = num;
    
    for (i = 0; i < 500; ++i)
    {
        
        
        if ( 1 == a )
        {
            answer = i;
            break;
        }
        
        if ( a % 2 == 0 )
        {
            a /= 2;
        }
        else 
        {
            a = (a*3) + 1;
        }
        
    }
    
    
    
    
    if ( 1 != a ){
        answer = -1;
    }
    
    
    return answer;

}