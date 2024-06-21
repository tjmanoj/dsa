// TC  : O(N)
// SC  : O(1)

#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    int l = 0,r = s.size() - 1;

    while( l < r){
        bool left = s[l] >= 97 && s[l] <= 122 || s[l] >= 48 && s[l] <= 57  || s[l] >= 65 && s[l] <= 90;
        bool right = s[r] >= 97 && s[r] <= 122 || s[r] >= 48 && s[r] <= 57 || s[r] >= 65 && s[r] <= 90;

        if(left && right){
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--; 
        }
        else if(left && !right) r--;
        else if(right && !left) l++;
        else{
            l++;
            r--;
        }

    }
    cout << s;
}


// INPUT : I brought 3 items: a pen, a notebook, and a scale
// OUTPUT: e lacsadn a koobe: t ona, n epasmeti, 3th g uorbI

// INPUT : house!no:12
// OUTPUT: 21one!su:oh
