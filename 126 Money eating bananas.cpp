// TC : O(N logn)
// SC : O(1)

class Solution {
public:
    long long func(vector<int> &piles, int count){                     // here count means per hour la monkey evloo banana sapdum
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



// A monkey is given 'n' piles of bananas, where the 'ith' pile has 'a[i]' bananas. An integer 'h' is also given, which denotes the time(in hours) in which all bananas should be eaten.

// The monkey chooses a non-empty pile each hour and consumes 'm' bananas. If a pile has fewer than 'm' bananas, the monkey eats all the bananas in that hour and won't eat any more in that hour.

// Determine the minimum 'm' to ensure the monkey can finish all the bananas within 'h' hours.
