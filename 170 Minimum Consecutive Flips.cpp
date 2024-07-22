// TC : O(N)
// SC : O(1)

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    
    for(int i=1;i<n;i++){
        if(a[i] != a[i-1]){
            if(a[i] != a[0]){
                cout << i << '-';
            }
            else{
                cout << i-1 << endl;
            }
        }
    }
    if(a[0] != a[n-1]) cout << n-1;                      // edge case  [ 1 1 0 0 1 1 1 1 0 0 0]   intha input ku last two elements same ah irukra naala 
                                                        // for loop condition fail aairum so end index print aaguthu and so we are using this line
                                                          
}
