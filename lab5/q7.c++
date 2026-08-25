#include <iostream>
using namespace std;


int compare(int a, int b)
{
    return (a > b) ? a : b;
}


float compare(float a, float b)
{
    return (a > b) ? a : b;
}


bool compare(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main()
{
    int a = 25, b = 40;
    float x = 12.5, y = 18.7;

    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {10, 20, 30, 40};

    cout << "Larger integer: " << compare(a, b) << endl;
    cout << "Larger floating-point value: " << compare(x, y) << endl;

    if (compare(arr1, arr2, 4))
        cout << "Both arrays contain identical elements." << endl;
    else
        cout << "Arrays do not contain identical elements." << endl;

    return 0;
}