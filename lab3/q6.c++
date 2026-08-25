#include<iostream>

using namespace std;

class employee{
    string name;
    int id;
    float salary;

public:
    void accpetDetails(){
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void Display(){
        cout<< "name "<<name<<endl;
        cout<< "id "<<id<<endl;
        cout<< "salary "<<salary<<endl;
    }
};



int main(){
    int n;   
    cout<<"enter a number of employees "<<endl;
    cin>>n;
    employee *s = new employee[n];
    for(int i=0;i<n;i++){
        s->accpetDetails();
        s->Display();
    }
    
    delete[] s;
    s= nullptr;

    return 0;
}