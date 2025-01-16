using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long Lmoney = money;
    
    for (int i = 1; i <= count; ++i)
    {
        Lmoney -= (price*i);
    }


    if (Lmoney >= 0)
    {
        return 0;
    }
    else
    {
        return answer = (-1)*Lmoney;
    }

    
}