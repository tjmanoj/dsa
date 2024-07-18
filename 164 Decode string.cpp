class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strings;
        int k = 0;

        for(int i=0;i<s.size();i++){
            if(s[i] >= '0' && s[i] <= '9') k = (k*10) + (s[i] - '0');
            else if(s[i] == '['){
                nums.push(k);
                k = 0;
                string temp = "";
                temp += s[i];
                strings.push(temp);
            }
            else if(s[i] == ']'){
                string temp = "";
                while(strings.top() != "["){
                    temp += strings.top();
                    strings.pop();
                }
                strings.pop();

                int n = nums.top();
                nums.pop();
                
                string res = "";
                for(int j=0;j<n;j++) res += temp;
                strings.push(res);
            }
            else{
                string temp = "";
                temp += s[i];
                strings.push(temp);
            }
        }
        string result = "";
        while(!strings.empty()){
            string cur = strings.top();
            strings.pop();
            reverse(cur.begin(),cur.end());
            result = cur + result;
        }
        return result;
    }
};
