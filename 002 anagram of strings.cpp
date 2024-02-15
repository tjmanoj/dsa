#include<bits/stdc++.h>
using namespace std;

bool Anagram(string s1 ,string s2){
    vector<int> alpha(26, 0);

    // find frequencies for s1
    for(auto i : s1)
        alpha[i - 'a']++;    

    // remove frequencies based on string 2 on string 1
    for(auto i: s2)
        alpha[i - 'a']--; 

    // check for all indexes of alpha is 0 that is all letters are same
    for(int i=0;i<26;i++){
        if(alpha[i] != 0)
        return 0;
    }
    return 1;
}

int main() {
    string s1 = "anagram";
    string s2 = "nagaram";
    bool result = Anagram(s1, s2);
    if(result)
        cout << "Yes";
    else 
        cout << "No";
}