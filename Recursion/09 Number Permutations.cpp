// TC : O(N * N!)
// SC : O(N * N!)

class Solution {
public:
    void helper(vector<vector<int>> &res, vector<int> &a,int ind, int n){
        if(ind == n-1){
            res.push_back(a);
            return;
        }

        for(int i=ind;i<n;i++){
            swap(a[ind],a[i]);
            helper(res,a,ind+1,n);
            swap(a[ind],a[i]);                         // retaining the original array for sending to next helper function
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        helper(res,nums,0,nums.size());
        return res;   
    }
};
