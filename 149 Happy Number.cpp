// TC : O(N logN)
// SC : O(N)

class Solution {
public:
    int sumofsquares(int num){          // log(N)
        int tot = 0;
        while(num){
            tot += (num % 10) * (num%10);
            num /= 10;
        }
        return tot;
    }
    bool isHappy(int n) {
        unordered_set<int> m;
        int temp = n;
        while(1){
            if(m.find(temp) != m.end()) break;
            m.insert(temp);
            temp = sumofsquares(temp);
            if(temp == 1) return true;
        }
        return false;
    }
};
