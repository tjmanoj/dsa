
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



// without builtin function

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int b= 15;
    int count = 0;
    for(int i=a; i<= 15;i++){
        int temp = 0;
        int s = i;
        while(s > 0){
            temp += (1 & s);
            s = s >> 1;
        }
        count += temp;
    }
    cout << count;
    return 0;
}
