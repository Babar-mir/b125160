#include <iostream>
using namespace std;

int total(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}


float total(float arr[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int total(int arr[], int n, int elements)
{
    int sum = 0;

    for (int i = 0; i < elements && i < n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    float b[] = {1.5, 2.5, 3.5, 4.5};

    cout << "Total of integer array: " << total(a, 5) << endl;
    cout << "Total of floating-point array: " << total(b, 4) << endl;
    cout << "Total of first 3 elements: " << total(a, 5, 3) << endl;

    return 0;
}