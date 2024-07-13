#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if(year % 4 == 0 && year %100 != 0 || year %400 == 0) cout << year << " is leap year";
    else cout << year << "is not a leap year";
}

// century year ah iruntha 400 aala divide aaguthanu paakanum.
// century year ah ilana 4 aala divide aaguthanu pakaanum.
