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

// #include <iostream>
// using namespace std;

// class Car {
// string name;
// string color;

// public :

// Car() {
//     cout<<"constructor without params ..\n";
// }

// Car(string name, string color) {
//     cout<<"constructor with parameter..\n";
//     this->name = name;
//     this->color= color;
// }

// void start() {
//     cout<<"car has start...\n"; 
// }

// void stop() {
//     cout<<"car has stopped \n";
// }

// // GETTERS

// string getName() {
//     return name;
// }

// string getColor() {
//     return color;
// }

// };

// int main () {

//     Car c0; // non- parameter
//     Car c1("maruti 800", "white"); //parameter
//     Car c2("fortuner,", "white");


//     return 0;
// }


//PRACTICE

// #include <iostream>
// using namespace std;

// class User {
//     private :
//     int id;
//     string password;

//     public:

//     string username;

//     User(int id){
//         this->id= id;

//     }

//     // getters
//     string getpassword() {  
//         return password;
//     }
//     // setters

//     void setpassword(string password) {
//         this->password= password;
//     }
// };

// int main() {

//     User u1(101);
//     u1.username= "apnacollege";
//     u1.setpassword("abcd");

//     cout << "usename :" <<u1.username <<endl;
//     cout<< " password : " << u1.getpassword ()<<endl;


//     return 0;
// }


//COPY CONSTRUCTOR

// #include <iostream>
// using namespace std;

// class Car {

//     public:
//     string name;
//     string color;

//     Car(string name, string color) {
//         this->name = name;
//         this->color = color;

//     }

//     Car(Car &original) {
//         cout<< "copy original to new..\n";
//         name = original.name;
//         color = original.color;
//     }
// };

// int main () {

//     Car c1("maruti 800","white" );

//     Car c2(c1);
//     cout <<c2.name << endl; // maruti800
//     cout << c2.color << endl; // white

//     return 0;
// }


// SHALLOW AND DEEP COPY

#include <iostream>
using namespace std;

class Car {

    public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //DYNAMIC ALLOCATION
        *mileage =12;

    }

    Car(Car &original) {
        cout<< "copy original to new..\n";
        name = original.name;
        color = original.color;
        mileage = original.mileage;
    }
};

int main () {

    Car c1("maruti 800","white" );

    Car c2(c1);
    cout<< c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage=10;

    cout<<*c1.mileage<<endl;

    return 0;
}