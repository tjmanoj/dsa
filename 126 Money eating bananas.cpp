// TC : O(N logn)
// SC : O(1)

class Solution {
public:
    long long func(vector<int> &piles, int count){
        long long time = 0;
        for(int i=0;i<piles.size();i++){
            time += ceil((double)piles[i]/(double)count);                // important we need to take in double to not loose the time
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long ans = *max_element(piles.begin(),piles.end());
        long long low = 1;
        long long high = ans;

        while(low <= high){
            long long mid = low + (high - low)/2;

            if(func(piles,mid) <= h){
                ans = mid;
                high = mid-1;
            }
            else low = mid + 1;

        }
        return ans;
    }
};
