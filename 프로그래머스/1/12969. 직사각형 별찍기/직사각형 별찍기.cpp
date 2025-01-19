#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    // 여기서부터 출력 로직

    // 1. 가로로 * 이 a 개인 문자를 출력하는 함수
    string Output;
    Output.append(a,'*');
    
    // 2. 출력을 b 번 반복하기
    for (int i = 0; i < b; ++i)
    {
        cout << Output << endl;
    }
    
    return 0;
}