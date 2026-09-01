#include <iostream>
using namespace std;

void addMarks(int *ptr, int n) {
    for (int i = 0; i < n; i++) {
        *ptr = *ptr + 5;
        ptr++;
    }
}

void display(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
}

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    cout << "Enter marks:\n";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "\nMarks before modification: ";
    display(marks,n);

    addMarks(marks, n);

    cout << "\nMarks after modification: ";
    display(marks,n);
    return 0;
}