int main() {
    int hash[128] = {-1};
    
    string s;
    cin >> s;

    int l=0,r=0;
    int maxLen = 0;

    while(r < s.size()){
        if(hash[s[r]] != -1){
            if(l <= hash[s[r]]){
                l = hash[s[r]] + 1;
            }
        }
        
        int len = r - l + 1;
        if(len > maxLen) maxLen = len;
        hash[s[r]] = r;
        r++;
    }

    cout << maxLen;
}
