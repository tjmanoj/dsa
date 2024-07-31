class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for(int i=1;i<strs.size();i++){
            while(strs[i].find(ans) != 0){
                ans = ans.substr(0,ans.size()-1);
                if(ans.size() == 0) return "";
            }
        }
        return ans;

    }
};


// custom stl
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string ans = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (customFind(strs[i], ans) != 0) {
                ans = customSubstr(ans, 0, ans.size() - 1);
                if (ans.size() == 0) return "";
            }
        }
        return ans;
    }

private:
    // Custom find function to check if sub is a prefix of str
    int customFind(const string& str, const string& sub) {
        if (sub.size() > str.size()) return -1;

        for (int i = 0; i < sub.size(); i++) {
            if (str[i] != sub[i]) return -1;
        }
        return 0;
    }

    // Custom substr function to return substring from start to len
    string customSubstr(const string& str, int start, int len) {
        string result = "";
        for (int i = start; i < start + len && i < str.size(); i++) {
            result += str[i];
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"flower", "flow", "floight"};
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs) << endl;
    return 0;
}
