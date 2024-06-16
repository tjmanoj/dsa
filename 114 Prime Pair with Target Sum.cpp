// Time Complexity: O(n*loglog(n))
// Auxiliary Space: O(n)

class Solution {
  public:

    vector<int> getPrimes(int n) {
        vector<int> prime(n+1,1);
        vector<int> final;
        vector<int> ans;
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j] = 0;
                }
            }
        }
        ans.push_back(-1);
        ans.push_back(-1);
        for(int i=2;i<=n;i++){
            if(prime[i]) final.push_back(i);
        }
        int m = INT_MAX;

        int l = 0,r=final.size()-1;
        while(l <= r){
            if(final[l] + final[r] == n){
                if(final[l] < m){
                    m = final[l];
                    ans.push_back(final[l]);
                    ans.push_back(final[r]);
                }
                l++;
                r--;
            }
            else if(final[l] + final[r] > n) r--;
            else l++;
        }
        return {ans[ans.size()-2],ans[ans.size()-1]};
        
    }
};
