// TC : O(N)
// SC : O(1)
class Solution {
public:
    bool checkValidString(string s) {
        int min = 0,max = 0;

        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                min++;
                max++;
            }
            else if(s[i] == ')'){
                min--;
                max--;
            }
            else{
                min--;
                max++;
            }
            if(min < 0) min = 0;
            if(max < 0) return false;
        }
        return min ==0;
    }

};


//Using stack
// TC : O(N)
// SC : O(N)

class Solution {
public:
    bool helper(stack<int> brackets,stack<int> stars){
        while(!brackets.empty()){
            if(stars.empty()) return false;

            else if(stars.top() > brackets.top()){
                brackets.pop();
                stars.pop();
            }
            else return false;
        }
        return true;
    }
    bool checkValidString(string s) {
        stack<int> brackets;
        stack<int> stars;

        for(int i=0;i<s.size();i++){
            if(s[i] == '(') brackets.push(i);

            else if(s[i] == '*') stars.push(i);

            else{                                                   // closing bracket

                if(!brackets.empty()) brackets.pop();               // if opening bracket available in brackets stack pop from it
                else if(!stars.empty()) stars.pop();                     // if opening bracket available in stars stack pop from it
                else return false;                                  // if both are empty return false(cannot balance)
            }
        }

        return helper(brackets,stars);                              // after for loop balancing remaining elements in both stack
    }
};
