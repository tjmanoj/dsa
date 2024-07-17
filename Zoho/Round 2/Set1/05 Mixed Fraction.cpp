#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main()
{
    float num;
    cin >> num;                                     // 3.4
    
    
    int n = num;                                    // 3
    float frac = num - n;                           // 0.4
    
    int deno = 100;
    
    int nume = frac * deno;                         // 40     
    
    int commonfactor = gcd(nume,deno);              // 20
     
    nume /= commonfactor;                           // 2
    deno /= commonfactor;                           // 5
    
    cout << n << ' ' << nume << '/' << deno;        // 3 2/5

    return 0;
}
