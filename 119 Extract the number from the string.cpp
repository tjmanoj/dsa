// TC  : O(N)
// SC  : O(1)

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        int n = sentence.size();
        bool flag = false;
        long long max = -1;
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
                
                if(sentence[i] >= 48 && sentence[i] <= 57){
                    temp = (temp * 10) + (sentence[i] - '0');
                }
                
                else if(sentence[i] == ' '){
                    if(temp > max && temp !=0) max = temp;
                    temp =0;
                }
            }
        }
        if(sentence[n-1] >= 48 && sentence[n-1] <= 57) if(temp > max && temp !=0) max = temp;
        return max;
    }
};
