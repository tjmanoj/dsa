// TC  : O(R^2)
// SC  : O(1)

class Solution {
  public:
    int rectanglesInCircle(int r) {
        //Pythagoras theorem   l^2 + r^2 = (2r)^2
        
        int count = 0;
        for(int i=1;i<2*r;i++){
            for(int j=1;j<2*r;j++){
                if(i*i + j*j <= 4 * r * r) count++;
                else break;
            }
        }
        return count;
    }
};
