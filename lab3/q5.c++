#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    float marks;

public:
    void accpetDetails(){
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void Display(){
        cout<< "name "<<name<<endl;
        cout<< "roll number "<<roll<<endl;
        cout<< "marks "<<marks<<endl;
    }
};



int main(){
    student *s = new student();
    s->accpetDetails();
    s->Display();
    delete s;
    s= nullptr;

    return 0;
}