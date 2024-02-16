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

// Time complexity :    O(n logn * m)       where m is the max length of stirngs
//                             +
//                  O(min(s[0].size() , s[n-1].size()))



string method2(string s[], int n){ // without sorting
    // keeping first string constant and compare all string and update lenght
    string first = s[0];
    int answer = first.size();

    for(int i=1;i<n;i++){
        int j=0;
        string curr = s[i];
        for(auto i:first)
            if(i == curr[j]){
                j++;
            }
            else{
                answer = min(answer, j);
                break;
            }
    }
    return first.substr(0,answer);

}

// Time Complexity  : O(n * m) 
// Space Complexity : O(1) 




int main() {
    string s[] = {"apple", "app", "apptitude","appp"};
    int n = sizeof(s) / sizeof(s[0]);
    
    // cout << longestCommonPrefix(s, n);
    cout << method2(s, n);

}
