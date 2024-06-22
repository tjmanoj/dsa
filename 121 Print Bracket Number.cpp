class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        stack<int> s;
        vector<int> ans;
        int count = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] == '('){
                s.push(++count);
                ans.push_back(count);
            }
            else if(str[i] == ')'){
                ans.push_back(s.top());
                s.pop();
            }
        }
        return ans;
    }
};
