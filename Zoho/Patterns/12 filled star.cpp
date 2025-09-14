//java code
public class Main {
    public static void main(String[] args) {
      int n = 7;
      
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<n*2-1;j++)
        {
          if(i+j >= n/2 && i >= (j-n/2) && i <= (j+n/2) && i+j <= (3*n-2)/2) System.out.print('X');
          else System.out.print(' ');
        }
        System.out.println();
      }
      
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j >= n/2 && i >= j - n/2 && i <= j+n/2 && i+j <= (3 * n - 2) /2) cout << 'X';
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}

//ip 11     ONLY FOR ODD NUMBERS

//      X     
//     XXX    
//    XXXXX   
//   XXXXXXX  
//  XXXXXXXXX 
// XXXXXXXXXXX
//  XXXXXXXXX 
//   XXXXXXX  
//    XXXXX   
//     XXX    
//      X
