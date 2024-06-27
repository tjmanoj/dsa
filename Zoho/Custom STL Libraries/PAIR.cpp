#include <iostream>
using namespace std;

template<typename T1, typename T2>
struct Pair {
    T1 first;
    T2 second;

    Pair(const T1& f, const T2& s) : first(f), second(s) {}
};

int main() {
    Pair<int, int> p(23,233);
    
    cout<< p.second;

    return 0;
}
