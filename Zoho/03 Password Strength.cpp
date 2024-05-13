#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int conditionsMet = 0;

    // condition 1 length
    if(s.size() >= 5) conditionsMet++;

    if(conditionsMet){
    //condition 2  digits
    bool flag = false;
    for(auto i:s){
        if(i >= 48 && i <= 57){
             flag = true;
             break;
        }
    }
    if(flag) conditionsMet++;
    
    
    //condition 3  special characters
    flag = false;
    for(auto i:s){
        if(i >= 33 && i <= 47 || i >=58 && i <= 64 || i>=91 && i<=96){
             flag = true;
             break;
        }
    }
    if(flag) conditionsMet++;
    }
    switch(conditionsMet){
        case 0:
            cout << "Weak";
            break;
        case 1:
            cout << "Medium";
            break;
        case 2: 
            cout << "Good";
            break;
        case 3:
            cout << "Strong";
            break;
    }
}

