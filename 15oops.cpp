#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    float cgpa;

    void getpercentage() {
        cout<< (cgpa * 10) << "% \n";
    }
};

int main () {

    Student s1;

    s1.name = "Dhoni";
    s1.cgpa= 9.0;

    cout <<s1.name <<endl;
    cout<< s1.cgpa << endl;

    s1.getpercentage();

    return 0;
}