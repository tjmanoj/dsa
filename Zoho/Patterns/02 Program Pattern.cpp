#include <iostream>
using namespace std;

int main(){
   string word;
   cin >> word;
   int n = word.size();

   int top_space = (n-1);
   int bottom_space = 2;
   int bottom_left_space = n/2 - 1;

   for(int i=0;i<n;i++){

    if(i < n/2){                                    // top section

        for(int j=0;j<i;j++) cout << ' ';           // top left space
        cout << word[i];
        

        for(int j=0;j<top_space;j++) cout << ' ';   // top middle space
        
        top_space -= 2;
        cout << word[i];
    }
    else if(i > n/2){                                       // bottom section                           
        
        for(int j=0;j<bottom_left_space;j++) cout << ' ';   // bottom left space   
        bottom_left_space -= 1;
        cout << word[i];


        for(int j=0;j<bottom_space;j++){                    //bottom middle space
            cout << ' ';
        }
        bottom_space += 2;
        cout << word[i];
    }
    else{                                                   //center position
        for(int j=0;j<n/2+1;j++){
            cout << ' ';
        }
        cout << word[i];
    }
    cout << endl;
   }
}


// P      P
//  R    R
//   O  O
//     G
//   R  R
//  A    A
// M      M

