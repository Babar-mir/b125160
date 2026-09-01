#include <iostream>
using namespace std;

void findLongest(int *ptr, int n) {
    int longest = *ptr;

    for (int i = 1; i < n; i++) {
        ptr++;

        if (*ptr > longest) {
            longest = *ptr;
        }
    }

    cout << "Longest episode duration: "
         << longest << " minutes" << endl;
}

int main() {
    int n;
    cout<<"enter the number of episodes ";
    cin>>n;

    int duration[n];
    cout<<"enter the duration of each episode ";
    for(int i=0;i<n;i++){
        cin>>duration[i];
    }

    findLongest(duration, 6);

    return 0;
}