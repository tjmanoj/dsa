// TC : O(4^N * N)          9 ku 4lu chars athu than worst case
// SC : O(N)                max stack space is maximum n hight the tree will go
 
class Solution
{
    public:
    void helper(vector<string>& res,string s[],int a[], int ind,string cur,int n){
        if(ind == n){
            res.push_back(cur);
            return;
        }
        
        string ss = s[a[ind]];
        for(int i=0;i<ss.size();i++)
            helper(res,s,a,ind+1,cur+ss[i],n);
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> res;
        string s[10];
        s[2] = "abc";
        s[3] = "def";
        s[4] = "ghi";
        s[5] = "jkl";
        s[6] = "mno";
        s[7] = "pqrs";
        s[8] = "tuv";
        s[9] = "wxyz";
        sort(res.begin(),res.end());
        helper(res,s,a,0,"",N);
        return res;
    }
};
