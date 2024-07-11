// TC : O(N * 2^N) 
// SC : O(2*n*X)      where x is the valid parenthesis

class Solution
{
    // open means open bracket count , close means close bracket count;
    public:
    void helper(int open,int close,int n,string cur,vector<string>& res){
        if(open == n && close == n){
            res.push_back(cur);
            return;
        }
        
        //Include open bracket
        if(open < n) helper(open+1,close,n,cur+"(",res);
        
        //Include close bracker
        if(open > close) helper(open,close+1,n,cur+")",res);
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> res;
        helper(0,0,n,"",res);
        return res;
    }
};
