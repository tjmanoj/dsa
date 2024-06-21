class Solution {
public:
    string minWindow(string s, string t) {
        int hash[126] = {0};
        int l = 0,r = 0,count=0,start_index=-1,minLen= INT_MAX;
        for(int i=0;i<t.size();i++) hash[t[i]]++;
        while(r < s.size()){
            if(hash[s[r]] > 0){                                 // if cur string we take has +ve value in hash then count++ i.e we have one character came
                count++;
            }
            hash[s[r]]--;                                       // decrement the value in every iteration

            while(count == t.size()){                           // while all the t chars present we need to find minimum substr do decrement size
                if(r - l + 1 < minLen){                         
                    minLen = r - l + 1;
                    start_index = l;    
                }
                hash[s[l]]++;                                   // ipo shrink pandrapo we need to increment the value of map
                if(hash[s[l]] > 0){
                    count--;                                    // same like +ve value iruntha inga count -- (removing)
                }
                l++;
            }
            r++;

        }
        return start_index == -1 ? "" : s.substr(start_index,minLen);
    }
};
