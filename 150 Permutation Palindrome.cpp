// TC : O(N)
// SC : O(1)

#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string s){
        int hash[26] = {0};
        for(int i=0;i<s.size();i++){
            hash[s[i] - 'a']++;
        }
        int count = 0;
        int odd = (s.length() %2 == 0) ? 0 : 1;         // string len is even means there should be no odd occurence chars
                                                       // if odd means we can have only one odd occurence char
        
        for(int i=0;i<26;i++){
            if(hash[i] & 1) count ++;
            if(count > odd) return false;
        }
        return true;
}   
int main(){
    int t;
    string s;
    cin >> t ; ;
    bool flag = true;
    while(t--){
        cin >> s;
        
        cout << (isPalindrome(s) ? "YES\n" : "No\n");
    }
}
