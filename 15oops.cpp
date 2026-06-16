// #include <iostream>
// using namespace std;

// class Student {
//     public:
//     string name;
//     float cgpa;

//     void getpercentage() {
//         cout<< (cgpa * 10) << "% \n";
//     }
// };

// int main () {

//     Student s1;

//     s1.name = "Dhoni";
//     s1.cgpa= 9.0;

//     cout <<s1.name <<endl;
//     cout<< s1.cgpa << endl;

//     s1.getpercentage();

//     return 0;
// }



// #include <iostream>
// #include <String>
// using namespace std;

// class Student {
//     public:
//     string name;
//     float cgpa;

//     void getpercentage() {
//         cout<< (cgpa * 10) << "% \n";
//     }

//     // SETTER
//     void setName(string nameVal) {
//         name = nameVal;
//     }

//     void setCgpa (float cgpaVal) {
//         cgpa = cgpaVal;
//     }

//     // GETTERS

//     string getName() {
//         return name;
//     } 
//     float getCgpa(){
//         return cgpa;
//     }

// };

// int main () {

//     Student s1;

//     s1.setName ("Dhoni kumar");
//     s1.setCgpa(9.1);

//     cout<< s1.getName()  << endl;
//     cout<<s1.getCgpa() << endl;

    

//     return 0;
// }



// CONSTRUCTOR

#include <iostream>
using namespace std;

class Car {
string name;
string color;

public :

Car() {
    cout<<"constructor without params ..\n";
}

Car(string name, string color) {
    cout<<"constructor with parameter..\n";
    this->name = name;
    this->color= color;
}

void start() {
    cout<<"car has start...\n"; 
}

void stop() {
    cout<<"car has stopped \n";
}

// GETTERS

string getName() {
    return name;
}

string getColor() {
    return color;
}

};

int main () {

    Car c0; // non- parameter
    Car c1("maruti 800", "white"); //parameter
    Car c2("fortuner,", "white");


    return 0;
}