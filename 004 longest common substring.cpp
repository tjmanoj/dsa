#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(string s[], int n){
    string answer = "";
    sort(s, s + n);
    string first = s[0];
    string last = s[n-1];

    // check for common str 
    for(int i=0;i< first.size();i++)
        if(first[i] == last[i])
            answer += first[i];
        else break;
    
    return answer;
}


int main() {
    string s[] = {"apple", "app", "aptitude"};
    int n = sizeof(s) / sizeof(s[0]);
    
    cout << longestCommonPrefix(s, n);


}
