#include <iostream>
using namespace std;

int wordSum(string word){
    int sum = 0;
    for(int i=0;i<word.size();i++){
        int k = word[i];
        sum += k;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;

    string *a = new string[n];
    for(int i=0;i<n;i++) cin >> a[i];

    string word;
    cin >> word;

    int sum = wordSum(word);
    
    for(int i=0;i<n;i++){
        if(wordSum(a[i]) == sum) cout << a[i] << ' ';
    }

    cout <<endl;
    bool res = wordSum("anagra1m") == wordSum("nagaram");
    cout << res;

    delete[] a;
    return 0;
}

// It’s about anagram.i/p was array of strings .and a word was given to find whether it has anagram in given array.

// I/p catch, got, tiger, mat, eat, Pat, tap, tea

// Word: ate

// O/p eat, tea
