class Solution {
  public:
    void helper(vector<int> &a, vector<vector<int>> &res,vector<int> cur,int ind){
        if(ind == a.size()){
            res.push_back(cur);
            return;
        }
        
        //include
        cur.push_back(a[ind]);
        helper(a,res,cur,ind+1);
        
        //exclude
        cur.pop_back();                 // to remove the last added element before calling the not take.
        helper(a,res,cur,ind+1);
        
    }
    vector<vector<int> > subsets(vector<int>& a) {
        vector<vector<int>> res;
        helper(a,res,{},0);
        sort(res.begin(),res.end());
        return res;
    }
};
