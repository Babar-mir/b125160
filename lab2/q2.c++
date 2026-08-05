#include<iostream>
using namespace std;


class rectangle{
    float length,breadth;
    float perimeter,area;

public:
    void getDim(){
        cout<<"enter the length ";
        cin>>length;

        cout<<"enter the breadth ";
        cin>>breadth;
        area = length*breadth;
        perimeter= 2*(length+breadth);
    }

    void display(){
        cout << "Length     : " << length << endl;
        cout << "Breadth    : " << breadth << endl;
        cout << "perimeter : " << perimeter << endl;
        cout << "area        : " << area << endl;
    }


};



int main(){
    rectangle r;
    r.getDim();
    r.display();
    return 0;
}