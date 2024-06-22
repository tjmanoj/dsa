// TC  : O(N)
// SC  : O(1)

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        int n = sentence.size();
        bool flag = false;
        long long maxi = -1;
        long long temp = 0;
        
        for(int i=0;i<sentence.size();i++){
            if(sentence[i] == '9'){
                 temp = 0;
                 flag = true;
            }
            else if(flag){
                if(sentence[i] == ' '){
                    flag = false;
                }
            }
            
            else if(!flag){
                
                if(sentence[i] >= '0' && sentence[i] <= '9'){
                    temp = (temp * 10) + (sentence[i] - '0');
                }
                
                else if(sentence[i] == ' '){
                    maxi = max(maxi,temp);
                    temp =0;
                }
            }
        }
        if(sentence[n-1] >= '0' && sentence[n-1] <= '9') maxi = max(maxi,temp);
        return maxi;
    }
};
