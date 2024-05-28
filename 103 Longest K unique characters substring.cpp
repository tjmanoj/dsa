// TC  : O(N)
// SC  : O1)

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    map<char,int>m;
    int l=0,r=0;
    int maxLen = -1;
    while(r < s.size()){
        m[s[r]]++;
        
        if(m.size() > k){                          // instead of if we can use while(m.size() > k)  this is in case the question is to return the substring
            m[s[l]]--;
            if(m[s[l]] == 0) m.erase(s[l]);
            l++;
        }
        
        if(m.size() == k) maxLen = max(maxLen,r-l+1);
        r++;
    }
    return maxLen;
    }
};
