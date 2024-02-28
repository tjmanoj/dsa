#include<bits/stdc++.h>
using namespace std;


struct Person {
    int age;
    string name;
    string DOB;
};

void update_info(int age, string name, string DOB, Person &p){
    p.age = age;
    p.name = name;
    p.DOB = DOB;
}


void display (Person p){
    cout << "Age    :" << p.age << endl;
    cout << "Name   :" << p.name << endl;
    cout << "DOB    :" << p.DOB << endl;
}
int main() {
    Person person1, person2;
    update_info(45, "Manoj", "31-08-2003", person1);
    update_info(18, "Tj", "25-08-2003", person2);

    display(person1);

}
