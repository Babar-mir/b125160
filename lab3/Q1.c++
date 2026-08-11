#include<iostream>
using namespace std;

int main(){
    
    int *n= new int;
    cout<<"enter a number "<<endl;
    cin>>*n;
    cout<<"entered value " <<*n;
    delete n;
    n= nullptr;
    return 0;

}