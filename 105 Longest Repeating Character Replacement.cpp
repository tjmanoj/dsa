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
