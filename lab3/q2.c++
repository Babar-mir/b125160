#include<iostream>
using namespace std;

int main(){
    int n;   
    cout<<"enter a number of elements "<<endl;
    cin>>n;
    int *arr= new int(n);
    cout <<"enter "<< n<< " integers "<<endl;


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"given array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    arr= nullptr;
    return 0;

}