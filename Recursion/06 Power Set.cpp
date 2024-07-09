class Solution{
	public:
	    void helper(vector<string> &res,string &s,int ind,string cur){
	       if(ind == s.size()){
	            res.push_back(cur);
	            return;
	       } 
	       
	       helper(res,s,ind+1,cur);           // Note take
	       helper(res,s,ind+1,cur+s[ind]);    // take
	       
	    }
		vector<string> AllPossibleStrings(string s){
		    vector<string> res;
		    helper(res,s,0,"");
		    sort(res.begin(),res.end());           
		    res.erase(res.begin());              // when we sort the res, the empty string will come at 1st position, we need to erase it.
		    return res;
		}
};
