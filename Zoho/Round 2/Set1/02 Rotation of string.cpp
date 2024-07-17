#include <iostream>
using namespace std;

string rotate(string s,char direction,int n){
    string substr1 = "";
    string substr2 = "";
    int size = s.size()-1;
    n %= size;
    if(direction == 'L'){
        for(int i=0;i<n;i++) substr1 += s[i];
        
        for(int i=n;i<s.size();i++) substr2 += s[i];
        
        return substr2 + substr1;
        
    }
    else{
        for(int i=size;i>size-n;i--) substr1 = s[i] + substr1;
        
        for(int i=0;i<size-n;i++) substr2 += s[i];
        
        return substr1 + substr2;
    }
}

int main()
{
    string s,r;
    int n;
    cin >> s >> r >> n;
    cout << rotate(s,r[0],n);
}
