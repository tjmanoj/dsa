#include<bits/stdc++.h>
using namespace std;

bool Isometric(string s1 ,string s2){
    vector<int> v1(26, -1);
    vector<int> v2(26, -1);

    if(s1.size() != s2.size()) return false;

    // if s1 != s2 return false else update unique value as i

    for(int i=0;i<s1.size();i++){
        if(v1[s1[i]] != v2[s2[i]]) return false;
        else v1[s1[i] - 'a'] = v2[s2[i] - 'a'] = i;
    }
    return true;
}


int main() {
    string s1 = "odd";
    string s2 = "afg";
    bool result = Isometric(s1, s2);
    if(result)
        cout << "Yes";
    else 
        cout << "No";
}
