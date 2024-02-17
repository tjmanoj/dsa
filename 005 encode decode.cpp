#include<bits/stdc++.h>
using namespace std;

string decode(string s){
    
    string result;
    // iterate over the string and push char until ']'
    for(int i=0;i<s.size();i++){
        if(s[i] != ']')
            result.push_back(s[i]);
        
        else{

            // extract chars from result backwards until '['
            string str = "";
            while(!result.empty() && result.back() != '['){
                str.push_back(result.back());
                result.pop_back();
            }

            // reverse the extraced string
            reverse(str.begin(), str.end());


            // remove the '[' for number extraction
            result.pop_back();

            // extract number from to repeat from the result
            string number = "";
            while(!result.empty() && result.back() >= '0' && result.back() <= '9'){
                number += result.back();
                result.pop_back();
            }

            // conversion of num
            int num = stoi(number);

            // final result
            while(num--) result += str;
        }
    }
    return result;
}
// Time Complexity  : O(n) where n is the length of decode string
// Space Complexity : O(n)

int main() {
    string s;
    cin >> s;
    cout << decode(s);

}


// input : 2[a2[bc]]
// Output : abcbcabcbc
