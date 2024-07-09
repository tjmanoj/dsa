class Solution
{
    public:
    void helper(string& str,int i,int j){
        if(i >= j) return;
        swap(str[i],str[j]);
        helper(str,i+1,j-1);
    }
    string reverseWord(string str)
    {
        helper(str,0,str.size()-1);
        return str;
    }
};
