//TC  : O(N)
//SC  : O(128)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(128,-1);
        int left=0,right = 0;
        int ans = 0;
        while(right < s.size()){
            if(hash[s[right]] != -1 ){              // the char is already in hash
                if(hash[s[right]] >= left)           // if starting index is less than hash index value
                    left = hash[s[right]] + 1;      // change starting index
            }
            hash[s[right]] = right;
            int len = right - left + 1;
            ans = max(ans, len);
            right++;
        }
        return ans;
    }
};
