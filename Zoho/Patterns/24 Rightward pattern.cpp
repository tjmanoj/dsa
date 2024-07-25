// O(1)

#include <iostream>
using namespace std;

void pattern(int i){
    if(i&1){
        for(int j=0;j<i;j++) 
            if(j%2==0) cout << '*';
                else cout << ' ';
        
        cout << endl;
    }
    else{
        for(int j=0;j<i;j++) 
            if(j%2 == 0) cout << ' ';
                else cout << '*';
        
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    
    for(int i=1;i<n;i++){
        pattern(i);
    }
    
    for(int i=n;i>0;i--){
        pattern(i);
    }
}




O(N^2) space and time

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int range = n*2-1;
    int bottomRange = range;
    
    char pattern[range][range];
    memset(pattern,' ',sizeof pattern);
    
    for(int i=0;i<range;i++){
       bool flag = true;
       if(i%2 == 0){
            for(int j=i/2;j<bottomRange;j++){
                if(flag) pattern[j][i] = '*';
                flag = !flag;
            }
            bottomRange--;
       }
    }
    
    for(int i=0;i<range;i++){
        for(int j=0;j<range;j++){
            cout << pattern[i][j];
        }
        cout << endl;
    }

}
// *
//   *
// *   *
//   *   * 
// *   *   *
//   *   *
// *   * 
//   *
// *
