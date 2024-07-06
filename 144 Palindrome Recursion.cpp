// TC : O(N)
// SC : O(N)

class Solution {
public:
    bool func(string s,int i,int j){
        if(i > j) return true;                                  // checked all chars comparisons successfully
        return s[i] == s[j] && func(s,i+1,j-1);
    }
    bool isPalindrome(string s) {
        return func(s,0,s.size()-1);
    }
};
