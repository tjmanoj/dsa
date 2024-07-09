#include <iostream>
using namespace std;

void helper(string s,int ind, string cur){
    if(ind == s.size()){
        cout << cur <<endl;
        return;
    }
    
    helper(s,ind+1,cur + s[ind]);           // Taking current index char
    helper(s,ind+1,cur);                    // Not taking
}

int main()
{
    string s = "abc";
    
    helper(s,0,"");
    return 0;
}

// INPUT : abc

//OUTPUT
// abc
// ab
// ac
// a
// bc
// b
// c
// 
