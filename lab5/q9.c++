#include <iostream>
using namespace std;


int maximum(int a, int b)
{
    return (a > b) ? a : b;
}


int maximum(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}


int maximum(int *arr, int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int a = 25, b = 40;

    int x = 60, y = 35;

    int arr[] = {12, 45, 23, 67, 34};

    cout << "Maximum between two integers: "
         << maximum(a, b) << endl;

    cout << "Maximum using integer pointers: "
         << maximum(&x, &y) << endl;

    cout << "Maximum in array: "
         << maximum(arr, 5) << endl;

    return 0;
}