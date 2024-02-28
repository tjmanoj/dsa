#include<bits/stdc++.h>
using namespace std;


struct Question {
    string question;
    string a[3];
    int answer;
};

void update_info(string question, std::array<string, 3> opt, int answer, Question &q){
    q.question = question;
    q.a[0] = opt[0];
    q.a[1] = opt[1];
    q.a[2] = opt[2];
    q.answer = answer;
}


void display (Question  &q){
    cout <<q.question << endl;
    cout << "1. " << q.a[0] << endl;
    cout << "2. " << q.a[1] << endl;
    cout << "3. " << q.a[2] << endl;
}
int main() {
    Question q[3];

    update_info("What is the time now?",{"4pm","5pm","6pm"}, 1, q[0]);
    update_info("What is the time now?",{"4pm","5pm","6pm"}, 2, q[1]);
    update_info("What is the time now?",{"4pm","5pm","6pm"}, 3, q[2]);
    for(auto i:q){
        display(i);
        int userinput;
        cin >> userinput;
        if(i.answer == userinput) cout << "Correct!" <<endl;
        else cout << "Incorrect!" << endl;
    }

}
