#include <iostream>
using namespace std;


void display(int x)
{
    cout << "Integer: " << x << endl;
}

void display(float x)
{
    cout << "Float: " << x << endl;
}

void display(char x)
{
    cout << "Character: " << x << endl;
}


void display(int arr[], int n)
{
    cout << "Integer array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}


void display(char arr[], int n)
{
    cout << "Character array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int x = 25;
    float y = 12.5;
    char ch = 'A';

    int arr[] = {10, 20, 30, 40, 50};
    char chars[] = {'H', 'e', 'l', 'l', 'o'};

    display(x);
    display(y);
    display(ch);
    display(arr, 5);
    display(chars, 5);

    return 0;
}