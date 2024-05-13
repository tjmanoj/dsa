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



// Find the strength of the given password string based on the conditions

// Four rules were given based on the type and no. of characters in the string.

// Weak – only Rule 1 is satisfied or Rule 1 is not satisfied

// Medium – Two rules are satisfied

// Good – Three rules satisfied

// Strong – All Four rules satisfied



// I/P: Qw!1        O/P: Weak

// I/P: Qwertyuiop      O/P: Medium

// I/P: QwertY123       O/P: Good

// I/P: Qwerty@123    O/P: Strong
