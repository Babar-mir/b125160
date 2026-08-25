#include<iostream>
using namespace std;


void add(int a, int b){
    cout<<"sum of 2 integrs= "<<a+b<<endl;
}
void add(int a , int b,int c){
    cout<<"sum of 3 integers= "<<a+b+c<<endl;
}
void add(float a , float b,float c){
    cout<<"sum of 2 float type numbers= "<<a+b+c<<endl;
}

int main(){
    int a,b,c;
    float d,e;
    cout<<"enter the fist interger;";
    cin>>a;
    cout<<"enter the 2nd integer;";
    cin>>b;
    cout<<"enter the 3rd integer;";
    cin>>c;
    cout<<"enter the fist float number;";
    cin>>d;
    cout<<"enter the 2nd float number;";
    cin>>e;
    add(a,b);
    add(a,b,c);
    add(d,e);


}