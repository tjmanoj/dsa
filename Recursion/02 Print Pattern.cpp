// TC : O(N)
// SC : O(N)

// With Flag 

class Solution{
public:
    void helper(vector<int> &res, int N, int i,bool inc){
        res.push_back(i);
        if(inc){
            if(i == N) return;
            else helper(res,N,i+5,true);
        }
        else{
            if(i-5 > 0) helper(res,N,i-5,false);
            else helper(res,N,i-5,true);
        }
    }
    vector<int> pattern(int N){
        vector<int> res;
        if(N <= 0) return {N};
        helper(res,N,N,false);
        return res;
    }
};

// Without using Flag
class Solution{
public:
    void helper(vector<int> &res, int i){
        if(i <= 0){                              // this condition is for stopping when the decresing stops.
            res.push_back(i);
            return;
        }
        res.push_back(i);                      // decresing part gets added
        helper(res,i-5);
        res.push_back(i);                     // backtrack pandrapo ans la add aagum.(increasing part)
    }
    vector<int> pattern(int N){
        vector<int> res;
        if(N <= 0) return {N};
        helper(res,N);
        return res;
    }
};
