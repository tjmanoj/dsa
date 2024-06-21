#include <iostream>
using namespace std;

int n;
char choice;
string query;
int val = 0;
char field,op;
int fieldTocheck;
int** matrix;

void display(char op,bool flag){
    switch(op){
            case '>':
                if(flag){
                    for(int i=0;i<n;i++){
                    if(matrix[i][fieldTocheck] == val || matrix[i][fieldTocheck] < val ){
                        continue;
                    }
                    for(int j=0;j<4;j++) cout << matrix[i][j] << ' ';
                    cout << endl;
                    }
                }
                else{
                    for(int i=0;i<n;i++){
                        if(matrix[i][fieldTocheck] == val || matrix[i][fieldTocheck] < val ){
                        continue;
                        }
                        cout << matrix[i][choice - 'A' + 1] << endl;
                    }
                }
                
                break;
            
            case '<':
                if(flag){
                    for(int i=0;i<n;i++){
                    if(matrix[i][fieldTocheck] == val || matrix[i][fieldTocheck] > val ){
                        continue;
                    }
                    for(int j=0;j<4;j++) cout << matrix[i][j] << ' ';
                    cout << endl;
                    }
                }
                else{
                    for(int i=0;i<n;i++){
                        if(matrix[i][fieldTocheck] == val || matrix[i][fieldTocheck] > val ){
                        continue;
                        }
                        cout << matrix[i][choice - 'A' + 1] << endl;
                    }
                }
                break;
            
            case '=':
                if(flag){
                    for(int i=0;i<n;i++){
                    if(matrix[i][fieldTocheck] < val || matrix[i][fieldTocheck] > val ){
                        continue;
                    }
                    for(int j=0;j<4;j++) cout << matrix[i][j] << ' ';
                    cout << endl;
                    }
                }
                else{
                    for(int i=0;i<n;i++){
                        if(matrix[i][fieldTocheck] < val || matrix[i][fieldTocheck] > val ){
                        continue;
                        }
                        cout << matrix[i][choice - 'A' + 1] << endl;
                    }
                }
                break;
        }
}

int main(){
    

    cin >>n;
    matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin >> matrix[i][j];
        }
    }

    cin >> choice;
    cin >> query;

    field = query[0];
    op = query[1];
    for(int i=2;i<query.size();i++) val = val * 10 + (query[i]-'0');

    fieldTocheck = field - 'A' + 1;

    if(choice == '*'){
        display(op,true);
  
    }
    else{
        display(op,false);
    }
}



// R A B C

// 1 56 67 89

// 2 89 54 90

// 3 78 91 83

// 4 69 72 95

// R – Rollno, A, B, C – Marks in three subjects

// Given the above matrix, print the result of the queries given the following syntax.

// The first input string has a single character denoting the field to be printed.

// * – All fields of the selected rows

// A – Print only field A

// B – Print only field B

// C – Print only field C

// The second string contains the condition – <field><relational_operator><value>.

// > – Greater than

// < – Less than

// = – Equal to



// I/P: *

// A>70

// O/P:

// 2 89 54 90

// 3 78 91 83

// I/P: A

// C<90

// O/P:

// 56

// 78
