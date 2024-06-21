// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int sum = 0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];

            if(sum > max) max = sum;

            if(sum < 0) sum = 0;
        }
        return max;

    }
};
// Input: arr = {-2,-3,4,-1,-2,1,5,-3}
// Output: 7
// Explanation: The subarray {4,-1, -2, 1, 5} has the largest sum 7.


// Printing the subarray slight variation of the problem
#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int max = -10,sum = 0, start = -1, end =-1;

    for(int i=0;i<n;i++){
        if(sum == 0) start = i;         // epolam sum = 0 aagutho apo new subarray start aaguthu
        sum += a[i];


        if(sum > max){
            max = sum;
            end = i;                    // end position tracking
        }

        if(sum < 0) sum = 0;
    }
    for(int i=start;i<=end;i++) cout << a[i] << ' ';

    return 0;
}
