// TC : O(n * n!)
// SC : O(n * n!)

class Solution{
    public:
    //Complete this function
    void helper(string &s, vector<string> &res,int ind,int n){
        if(ind == n-1){
            res.push_back(s);
            return;
        }
        
        for(int i=ind;i<n;i++){
            swap(s[ind],s[i]);
            helper(s,res,ind+1,n);
            swap(s[ind],s[i]);
        }
    }
    vector<string> permutation(string S)
    {
        vector<string> res;
        helper(S,res,0,S.size());
        sort(res.begin(),res.end());
        return res;
    }
};
