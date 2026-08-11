#include<iostream>
using namespace std;


int largest(int arr[],int n){
    int larg = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>larg){
            larg = arr[i];
        }
    }
    return larg;
}
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
    cout<<endl;
    cout<<"largest element : "<<largest(arr,n);
    delete[] arr;
    arr= nullptr;
    return 0;

}