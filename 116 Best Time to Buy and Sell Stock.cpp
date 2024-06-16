// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX,maxPrice = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < minPrice) minPrice = prices[i];
            else{
                if(prices[i] - minPrice > maxPrice) maxPrice = prices[i] - minPrice;
            }
        }
        return maxPrice;
    }
};
