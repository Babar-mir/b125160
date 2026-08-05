#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
    int bookID;
    string bookTitle;
    string studentName;
    int issuedDays;
    float fine;

public:
    void enterDetails()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, bookTitle);

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Number of Days Book was Issued: ";
        cin >> issuedDays;
    }

    void calculateFine()
    {
        if (issuedDays > 15)
            fine = (issuedDays - 15) * 5;
        else
            fine = 0;
    }

    void displayDetails()
    {

        cout << "Book ID      : " << bookID << endl;
        cout << "Book Title   : " << bookTitle << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Issued Days  : " << issuedDays << endl;
        cout << "Fine         : Rs. " << fine << endl;
    }
};

int main()
{
    LibraryBook b;

    b.enterDetails();
    b.calculateFine();
    b.displayDetails();

    return 0;
}