
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int b= 15;
    int count = 0;
    for(int i=a; i<= 15;i++){
        count += __builtin_popcount(i);
    }
    cout << count;
    return 0;
}
