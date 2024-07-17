#include <iostream>
using namespace std;
#include<cstring>


int main()
{
    string s;
    cin >> s;
    
    int hash[26] = {0};
    int maxLen = 0;
    int start=0,end=0;
    int l = 0,r=0;
    while(r < s.size()){
        if(hash[s[r] - 'a']){
            if(l <= hash[s[r] - 'a']) l = hash[s[r] - 'a'] + 1;
        }
        
        hash[s[r] - 'a'] = r;
        if(r-l+1 > maxLen){
            start = l;
            end = r;
        }
        r++;
    }
    
    for(int i=start;i<=end;i++) cout << s[i];
}
