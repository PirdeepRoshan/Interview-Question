/*
A man wants to do rock climbing and reach the top of a steep peak.
There is 'N' number of Convenient rocks on the mountain which the 
mountaineer can step onto to reach the peak a little easily. The 
initial position/rock on which the rock climber is standing current
ly is denoted as 'I'. From each rock, the person can skip utmost 
'X' rocks. The task here is to find the number of ways a mountainee
r can climb to reach the peak.

Example 1:
Input:
6-> Value of N
3-> Value of I
2-> Value of X
Output:
3-> Number of ways he can reach the peak

*/
#include <iostream>
#include <vector>

using namespace std;

int countWaysToReachPeak(int N, int I, int X) {
    vector<int> dp(N + 1, 0);
    dp[I] = 1;
    
    for (int i = I; i <= N; i++) {
        for (int j = 1; j <= X; j++) {
            if (i + j <= N) {
                dp[i + j] += dp[i];
            }
        }
    }
    
    return dp[N];
}

int main() {
    int N, I, X;
    cin >> N >> I >> X;
    
    int ways = countWaysToReachPeak(N, I, X);
    cout << ways << endl;
    
    return 0;
}
