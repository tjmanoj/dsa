// TC : O(2^N)
// SC : O(1)
class Solution {
  public:
    void helper(string s,vector<string>& res,int ind,string cur){
        if(ind == s.size()){
            res.push_back(cur);
            return;
        }
        
        //Include
        helper(s,res,ind+1,cur+ " " +s[ind]);
        
        //Exclude
        helper(s,res,ind+1,cur + s[ind]);
        
    }
    vector<string> permutation(string s) {
        vector<string> res;
        string cur ="";
        cur += s[0];    // 'A'
        helper(s,res,1,cur);
        return res;
    }
};
