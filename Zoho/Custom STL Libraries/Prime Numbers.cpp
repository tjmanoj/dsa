// TC : O(N) + O(N log(N))
// SC : O(N)

#include <iostream>
using namespace std;
int main()
{
    int n = 25;
    int prime[n+1] = {0};
    for(int i=2;i*i<=n;i++){                 // O(N log(log N))
            if(!prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j] = 1;
                }
            }
    }
    
    for(int i=2;i<=n;i++){                    // O(N)
        if(!prime[i]) cout << i << " ";
    }
}


// Check Prime
#include <iostream>
using namespace std;
int main()
{
    int n = 25;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
             cout << "Not prime";
             exit(0);
        }
    }
    cout << "Prime";
}
