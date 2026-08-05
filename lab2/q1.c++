#include<iostream>
#include<string>
using namespace std;


class student{
    int rollNum;
    string name;
    float marks;

public:
    void acceptDetails(){
        cout<<"enter the roll number ";
        cin>>rollNum;

        cout<<"enter the name ";
        cin>>name;

        cout<<"enter the marks ";
        cin>>marks;
    }

    void printDetails(){
        cout << "Roll Number : " << rollNum << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }


};



int main(){
    student s;
    s.acceptDetails();
    s.printDetails();
    return 0;
}