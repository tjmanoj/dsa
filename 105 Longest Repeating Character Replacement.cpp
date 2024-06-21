// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    int characterReplacement(string s, int k) {
        int hash[26] = {0};
        int maxLen = 0, maxFreq = 0;
        int l = 0,r=0;
        
        while(r < s.size()){
            hash[s[r] - 'A']++;
            maxFreq = max(hash[s[r] - 'A'],maxFreq);

            if((r-l+1) - maxFreq > k){
                hash[s[l] - 'A']--;
                maxFreq = 0;                                                
                for(int i=0;i<26;i++) maxFreq = max(maxFreq,hash[i]);   // updating maxFreq to maxLen of current hash
                l++;
            }  

            if((r - l + 1) - maxFreq <= k) maxLen = max(maxLen,r-l+1);
            r++;

        }
        return maxLen;

    }
};











// Practiced
#include <iostream>
using namespace std;


int main(){

    int k;
    string s;
    cin >> k;
    cin>> s;

    int hash[26] = {0};
    int maxLen = 0;
    int maxFreq = 0;

    int l = 0, r = 0;
    
    while(r < s.size()){
        hash[s[r] - 'a']++;
        if(hash[s[r] - 'a'] > maxFreq) maxFreq = hash[s[r] - 'a'];

        int window_size = r - l + 1;

        if(window_size - maxFreq > k){
            hash[s[l++] - 'a']--;
            //update maxFreq
            for(int i=0;i<26;i++) if(hash[i] > maxFreq) maxFreq = hash[i];
        }

        if(window_size - maxFreq <= k){
            if(window_size > maxLen) maxLen = window_size;
        }
        r++;
    }
    cout << maxLen;


    return 0;
}
