#include <iostream>
#include <string>
using namespace std;

class Diary {
private:
    string ownerName;
    int numberOfEntries;
    string lastEntry;

public:
    void getInput(){
        cout << "Enter owner name: ";
        cin >> ownerName;
   
 
        cout << "enter number of entries: ";
        cin>>numberOfEntries;
 
        cout << "Enter last entry: ";
        cin >> lastEntry;

    }
    

    // Friend function declaration
    friend void displayDiary(Diary d);
};

// Friend function definition
void displayDiary(Diary d) {
    cout << "----- Diary Details -----" << endl;
    cout << "Owner Name      : " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry      : " << d.lastEntry << endl;
}


int main() {
    Diary d1;
    d1.getInput();
    displayDiary(d1);

    return 0;
}