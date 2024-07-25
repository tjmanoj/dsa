class Solution {
public:
    int longestValidParentheses(string s) {
        int maxi = 0;
        int open = 0,close = 0;

        for(int i=0;i<s.size();i++){
            if(s[i] == '(') open++;
            else close++;

            if(open == close) maxi = max(maxi,open*2);
            
            else if(close > open) {
                close = 0;
                open = 0;
            }
        }
        open = 0;
        close = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == '(') open++;
            else close++;

            if(open == close) maxi = max(maxi,open*2);
            
            else if(close < open) {
                close = 0;
                open = 0;
            }
        }

        return maxi;
    }
};
