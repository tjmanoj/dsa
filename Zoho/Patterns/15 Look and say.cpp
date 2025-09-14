// java code
import java.util.*;

public class Main {
    public static void main(String[] args) {
      int n = 5;
      
      String term = "1";
      System.out.println(term);
      for(int i=0; i<n; i++)
      {
        term = nextTerm(term);
        System.out.println(term);
      }
      
    }
    
    public static String nextTerm(String term)
    {
      int count =1;
      int len = term.length();
      String res = "";
      
      for(int i=1;i<=len;i++)
      {
        if(i < len && term.charAt(i) == term.charAt(i-1))
        {
          count++;
        }
        
        else 
        {
          res = res + count;
          res += term.charAt(i-1);
          count = 1;
        }
      }
      
      return res;
    }
}

#include <iostream>
using namespace std;
string next_term(string &s){
    int count = 1;
    string term = "";
    for(int i=1;i<= s.size();i++){                  //i <= size because in iteration 1 the string has size 1 
                                                    //howerver 1 has to be added as next term as 1 1 
        if(i < s.size() && s[i] == s[i-1]){
            count++;
        }
        
        else{
            term += (char)(count + '0');            // converting the count to char and appending
            term += s[i-1];                         // appending the char 
            count = 1;                  
        }
        
    }
    return term;
}

int main()
{
    int n;
    cin >> n;
    string s = "1";
    cout << s << endl;
    
    for(int i=0;i<n-1;i++){
        s = next_term(s);
        cout << s << endl;
    }

    return 0;
}

// 5
  
// 1
// 11
// 21
// 1211
// 111221
