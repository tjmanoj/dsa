#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int left_sum = 0,sum = 0;
    bool found = false;

    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=0;i<n;i++) sum += a[i];

    for(int i=0;i<n;i++){
        sum -= a[i];
        if(sum == left_sum){
            cout << a[i];
            found = true;
            break;
        }
        left_sum += a[i];
    }

    if(!found) cout << -1;
}

