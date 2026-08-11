#include<iostream>
using namespace std;

int main(){
    int n;   
    cout<<"enter a number of elements "<<endl;
    cin>>n;
    float *arr= new float[n];
    cout <<"enter "<< n<< " integers "<<endl;


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float sum;
    cout<<"given array is ";
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    float avg= sum/n;
    cout<<"sum ="<<sum<<"and average= "<<avg;
    delete[] arr;
    arr= nullptr;
    return 0;

}