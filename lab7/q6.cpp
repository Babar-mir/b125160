#include <iostream>
using namespace std;

class InternalExam {
protected:
    int internalMarks;
public:
    InternalExam(int m) : internalMarks(m) {}
    void display() const { cout << "Internal Marks: " << internalMarks << endl; }
};

class ExternalExam {
protected:
    int externalMarks;
public:
    ExternalExam(int m) : externalMarks(m) {}
    void display() const { cout << "External Marks: " << externalMarks << endl; }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    FinalResult(int i, int e) : InternalExam(i), ExternalExam(e) {}
    void display() const {
        InternalExam::display();   
        ExternalExam::display();
        cout << "Final Total: " << internalMarks + externalMarks << endl;
    }
};

int main() {
    FinalResult f(28, 62);
    f.display();

    return 0;
}