// TC : O(2^N)
// SC : O(N)

#include <iostream>
using namespace std;

void print(string s,int i, string ans){                  // ans is the string we have formed so far and 
    if(i == s.size()){                                  // i means the length
        cout << ans <<endl;
        return;
    }

    print(s, i+1, ans);               // Not Take
    print(s, i+1, s[i] + ans);       // Take
}

int main()
{
    string s;
    cin >> s;
    print(s,0,"");
}
