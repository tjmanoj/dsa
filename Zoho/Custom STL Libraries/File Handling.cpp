#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // Reading
    ifstream in("sample.txt",ios::in);
    if(!in) cout << "Error";
    
    string line;                                                        // using string
    while(getline(in,line)) cout << line;
    
    char ch;
    
    in >> ch;                                                           // using char pointer
    while(!in.eof()){
        cout << ch;
        in >> ch;
    }
    in.close();
    
    
    
    // Writing
    
    ofstream out("sample.txt",ios::app);
    if(!out) cout << "error";
    
    out << "\nHello";
    
    out.close();
    
    
    
    
    
    Searching...
    ifstream in("sample.txt",ios::in);
    if(!in) cout << "error";
    
    string line;
    
    bool found =false;
    while(getline(in,line)){
        if(line.find("Manoj") != string::npos){
            found = true;
            cout << "FOUND";
        }
    }
    if(!found) cout << "Not Found";
    
    in.close();
    
    
    
    
    // Updating
    ofstream out("sample1.txt",ios::app);         // for writing to temp file
    if(!out) cout << "error";
    
    
    ifstream in("sample.txt",ios::in);
    if(!in) cout << "error";
    
    string line;
    
    bool found =false;
    while(getline(in,line)){
        if(line.find("Manoj") != string::npos){
            found = true;
            
            line.replace(0,string::npos,"Tj");
            out << line;
        }
    }
    if(!found) cout << "Not Found";
    remove("sample.txt");
    rename("sample1.txt","sample.txt");
    in.close();
    out.close();
}
