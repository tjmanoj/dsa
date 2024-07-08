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




// Method 2:
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t ; ;
    bool flag = true;
    while(t--){
        cin >> s;
        int hash[26] = {0};
        for(int i=0;i<s.size();i++){
            hash[s[i] - 'a']++;
        }
        int len = 0;
        bool flag = false;
        for(int i=0;i<26;i++){
            if(hash[i] %2 == 0) len += hash[i];
            else{
                len += hash[i]-1;
                flag = true;
            }
        }
        if(flag) len++;
        if(len == s.size()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
