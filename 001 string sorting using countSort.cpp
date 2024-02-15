#include<bits/stdc++.h>
using namespace std;


int main() {
    int alphabets[26] = {0};
    string str = "apples";
    string answer = "";

    // for calculating freqencies
    for(auto i:str){
        alphabets[i - 'a']++;
    }

    // appending alphabets to result
    for(int i=0;i<26;i++){
        for(int j=0;j<alphabets[i];j++){
            answer += (i + 'a');
        }
    }
    cout << answer;
    
}