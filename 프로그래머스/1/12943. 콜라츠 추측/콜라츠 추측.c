#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long num) {
    long long answer = 0;
    int i;
    
    for (i = 0; i < 500; ++i)
    {
        
        
        if ( 1 == num )
        {
            answer = i;
            break;
        }
        
        if ( num % 2 == 0 )
        {
            num /= 2;
        }
        else 
        {
            num = (num*3) + 1;
        }
        
    }
    
    
    
    
    if ( 1 != num ){
        answer = -1;
    }
    
    
    return answer;
}