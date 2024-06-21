#include <iostream>
using namespace std;
int main(){
   string s;
   cin >> s;
   int n = s.size();

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i == j || i+j == n-1 || j==0 || j==n-1){
            if(j == 0 || j == n-1){
                if(i == n/2) cout << s[n-1];
                else cout << s[n-1-abs(n/2-i)];
            }
            else{
                 cout << s[abs(n/2-j)];
            }
        }
        else cout << ' ';
    }
    cout << endl;
   }

}


// HYDRATION
// A       A
// TR     RT
// I D   D I
// O  Y Y  O
// N   H   N
// O  Y Y  O
// I D   D I
// TR     RT
// A       A
