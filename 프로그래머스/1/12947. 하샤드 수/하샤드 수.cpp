#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;

    // 각 자릿수의 합을 알아야 한다.

    vector<int> array;



    int condition = x;
    int count = 0;

    while (condition > 0)
    {

        array.push_back(condition % 10);
        condition = condition / 10;
        count++;

    }


    int sum = 0;

    for (int i = 0; i < count; i++)
    {

        sum += array[i];

    }


    // 각 자릿수의 합으로 원본 수를 나눠서 나머지가 0이 나와야한다.

    answer = x % sum == 0 ? true : false;





    return answer;
}