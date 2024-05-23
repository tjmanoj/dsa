#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if(year % 4 == 0 && year %100 != 0 || year %400 == 0) cout << year << " is leap year";
    else cout << year << "is not a leap year";
}

// exactly divisible by 4 then it should not be a century year or
// it may be a century year and may or may not divisible by 4
