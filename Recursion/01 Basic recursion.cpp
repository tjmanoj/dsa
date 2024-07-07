#include <iostream>
using namespace std;

void print(int i){
    if(i > 5) return;                       // Base Case
    cout << "Func " << i << endl;
    
    print(i+1);                             
}

int main()
{
    print(1);
}
