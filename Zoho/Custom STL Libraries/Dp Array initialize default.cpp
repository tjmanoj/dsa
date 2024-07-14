#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n= 3;
    int dp[n];
    memset(dp,-1,sizeof dp);
    
    for(int i=0;i<n;i++) cout << dp[i] << ' ';
}
