// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    
    int longestPalindrome(string s) {
        int hash[128] = {0};
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }

        int length = 0;
        bool flag = false;
        for(int i=0;i<128;i++){
            if(hash[i] %2 == 0) length += hash[i];             // even length means front la onnu back la onnu potukalam
            else{
                flag = true;
                length += hash[i] - 1;                // odd length ah iruntha even length eduthutu last la +1 potukalam
            }
        }
        if(flag) return length + 1;
        return length;
    }
};
