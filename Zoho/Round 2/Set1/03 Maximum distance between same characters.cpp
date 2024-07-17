#include <iostream>
using namespace std;
#include<cstring>


int main()
{
    string s;
    cin >> s;
    
    int hash[26];
    memset(hash,-1,sizeof hash);
    int maxLen = 0;
    
    for(int i=0;i<s.size();i++){
        if(hash[s[i] - 'a'] == -1) hash[s[i] - 'a'] = i+1;
        else{
            int len = i - hash[s[i] - 'a'];
            if(len > maxLen) maxLen = len;
        }
    }
    
    cout << maxLen;
}
