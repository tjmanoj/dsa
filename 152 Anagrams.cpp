#include<iostream>
using namespace std;

bool anagram(string s1, string s2){
    int hash[26] = {0};
    if(s1.size() != s2.size()) return false;
    for(int i=0;i<s1.size();i++){
        hash[s1[i] - 'a']++;
        hash[s2[i] - 'a']--;
    }
    
    for(int i=0;i<26;i++){
        if(hash[i] != 0) return false;
    }
    return true;
        
}
int main(){
    int T;
    string s1,s2;
    cin >> T;
    while(T--){
        cin >> s1 >> s2;
        cout << (anagram(s1,s2) ? "Yes\n" : "No\n");
    }
}
