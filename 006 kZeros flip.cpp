#include<bits/stdc++.h>
using namespace std;

int kzeros(string s, int k){
    int ans = 0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            string temp = s.substr(i, j);
            int c = count(temp.begin(), temp.end(), '0');
            if(c == k && ans < temp.size()) ans = temp.size();
    }
    }
    return ans;
}
// Time Complexity : O(n^2)


int kzeros_using_slidingWindow(string s, int k){
    int i=0;
    int j=0;
    int answer = 0;
    int zero_count = 0;

    // iterate till last character
    while(j < s.size()){
        if(s[j] == '0'){        // if 0 found update zero count 
            zero_count++;
        }
        while(zero_count > k){      // if zero count exeeds k then -- and update i++
            if(s[i] == '0'){
                zero_count--;
            }
            i++;
        }
        answer = max(answer, j - i + 1);
        j++;
    }
    return answer;
}

// Time Complexity : O(n)


int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << kzeros(s, k) <<endl;
    cout << kzeros_using_slidingWindow(s, k);

}
