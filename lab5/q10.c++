#include <iostream>
using namespace std;


int process(int a, int b)
{
    return a + b;
}

float process(int a, float b)
{
    return a + b;
}

float process(float a, float b)
{
    return a + b;
}

int process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a = 10, b = 20;
    int x = 30;
    float y = 5.5;
    float p = 2.5, q = 7.5;

    int arr[] = {10, 20, 30, 40};

    cout << "Two integers: "
         << process(a, b) << endl;

    cout << "Integer + floating-point: "
         << process(x, y) << endl;

    cout << "Two floating-point values: "
         << process(p, q) << endl;

    cout << "Integer array total: "
         << process(arr, 4) << endl;

    cout << "Two integer pointers: "
         << process(&a, &b) << endl;

    return 0;
}