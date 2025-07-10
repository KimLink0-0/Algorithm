#include <string>
#include <vector>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    
    // 1. 시간별 서버 증설 요구치
    vector<int> serverNeededs(24,0);
    
    for (int i = 0; i < players.size(); ++i)
    {
        serverNeededs[i] = players[i]/m;
    }
    
    vector<int> serverCounts(24+k,0);
    
    int currentServer = 0;
    for (int i = 0; i < 24; ++i)
    {
        currentServer += serverCounts[i];
        
        if(serverNeededs[i] > currentServer)
        {
            answer += serverNeededs[i] - currentServer;
            serverCounts[i] += serverNeededs[i] - currentServer;
            
            if (i + k < serverCounts.size())
            {
                serverCounts[i+k] -= serverNeededs[i] - currentServer;
            }
            
            currentServer += serverNeededs[i] - currentServer;
        }
    }
    
    return answer;
}