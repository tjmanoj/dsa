// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    int numberOfSubstrings(string s) {
        int hash[3] = {-1,-1,-1};
        int count = 0;

        for(int i=0;i<s.size();i++){
            hash[s[i]-'a'] = i;
            
            if(hash[0] != -1  && hash[1] != -1 && hash[2] != -1){
                count += (1 + min(min(hash[0],hash[1]),hash[2]));
            }
        }
        return count;
    }
};
