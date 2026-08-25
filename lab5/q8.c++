#include <iostream>
using namespace std;


int count(int n)
{
    int digits = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        digits++;
        n /= 10;
    }

    return digits;
}


int count(int arr[], int n)
{
    return n;
}


int count(char arr[], int n, char ch)
{
    int occurrences = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ch)
            occurrences++;
    }

    return occurrences;
}

int main()
{
    int number = 123456;
    int arr[] = {10, 20, 30, 40, 50};
    char chars[] = {'a', 'b', 'a', 'c', 'a', 'd'};

    cout << "Number of digits: " << count(number) << endl;
    cout << "Number of array elements: " << count(arr, 5) << endl;
    cout << "Occurrences of 'a': " << count(chars, 6, 'a') << endl;

    return 0;
}