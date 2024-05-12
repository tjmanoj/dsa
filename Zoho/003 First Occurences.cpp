#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    int hash[26] ={0};
    cin >> s1;
    cin >> s2;

    int visited[128] = {0};

    int min = 999;
    int max = -1;

    for(auto i:s2){
        for(int j=0;j<s1.size();j++){
            if(s1[j] == i && !visited[s1[j]]){
                if(min > j) min = j;
                if(max < j) max = j;
                visited[s1[j]] = 1;
            }
        }
    }

    for(int i=min;i<=max;i++){
        cout << s1[i];
    }
}


// Given two strings, find the first occurrence of all characters of second string in the first string and

// print the characters between the least and the highest index

// I/P: ZOHOCORPORATION PORT

// O/P: OHOCORPORAT



// Explanation: The index of P in first string is 7, O is 1, R is 6 and T is 11. The largest range is 1 – 11.

// So print the characters of the first string in this inex range i.e. OHOCORPORAT
