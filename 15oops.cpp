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

// #include <iostream>
// using namespace std;

// class Car {

//     public:
//     string name;
//     string color;
//     int *mileage;

//     Car(string name, string color) {
//         this->name = name;
//         this->color = color;
//         mileage = new int; //DYNAMIC ALLOCATION
//         *mileage =12;

//     }

//     Car(Car &original) {
//         cout<< "copy original to new..\n";
//         name = original.name;
//         color = original.color;
//         //mileage = original.mileage;
        
//         // deep copy ke liye
//         mileage = new int;
//         *mileage = *original.mileage;
//     }
// };

// int main () {

//     Car c1("maruti 800","white" );

//     Car c2(c1);
//     cout<< c2.name<<endl;
//     cout<<c2.color<<endl;
//     cout<<*c2.mileage<<endl;
//     *c2.mileage=10;

//     cout<<*c1.mileage<<endl;
//     cout<<*c2.mileage<<endl;

//     return 0;
// }


//DESTRUCTOR

// #include <iostream>
// using namespace std;

// class Car {

//     public:
//     string name;
//     string color;
//     int *mileage;

//     Car(string name, string color) {
//         this->name = name;
//         this->color = color;
//         mileage = new int; //DYNAMIC ALLOCATION
//         *mileage =12;

//     }

//     Car(Car &original) {
//         cout<< "copy original to new..\n";
//         name = original.name;
//         color = original.color;
//         //mileage = original.mileage;
        
//         // deep copy ke liye
//         mileage = new int;
//         *mileage = *original.mileage;
//     }

//     ~Car() {
//         cout<<"deleting object..\n";
//         if(mileage != NULL) {
//             delete mileage;
//             mileage = NULL;
//         }
//     }
// };

// int main () {

//     Car c1("maruti 800","white" );
//     cout<< c1.name<<endl;
//     cout<<c1.color<<endl;
//     cout<<*c1.mileage<<endl;



//     return 0;
// }



// INHERITANCE   //////////////////////////////////

// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     string color;

//     void eat (){
//         cout<<"eat..\n";

//     }
//     void breathe() {
//         cout<<"breathe ..\n";
//     }
// };

// class Fish : public Animal{
//     public :
//     int fins;

//     void swim() {
//         eat();
//         cout<<"swim ..\n";
//     }

//     // // protected mode only access to inside class and drive class
//     // class Fish : protected Animal{
//     // public :
//     // int fins;

//     // void swim() {
//     //     eat(); // you only acees to class 
//     //     cout<<"swim ..\n";
//     // }

//     // private mode
//     // keep any mode in private you will not get aceess 

// };

// int main() {

//     Fish f1;

//     f1.fins =3;
//     cout<< f1.fins <<endl;

//     f1.swim();
//     f1.eat();
//     f1.breathe();

//     return 0;
// }


// MULTILEVEL INHERITANCE


// #include <iostream>
// using namespace std;

// class Animal {
//     public :
//     void eat(){
//         cout << "eat ..\n";
//     }
//     void breathe(){
//         cout<< "breathe.. \n";
//     }
// };

// class Mammal : public Animal {
//     public :
//     string bloodType;

//     Mammal(){
//         bloodType = "worm";
//     }

// };

// class Dog : public Mammal{
//     public:

//     void tailWag() {
//         cout<<"a Dog wags its tail \n";
//     }
// };

// int main () {
//     Dog d1;
     
//     d1.eat();
//     d1.breathe();
//     d1.tailWag();
//     cout<<d1.bloodType<<endl;

//     return 0;
// }


//MULTIPLE INHERITANCE

// // #include <iostream>
// using namespace std;

// class Teacher {
//     public :

//     int salary;
//     string subject;
// };

// class Student{
//     public:
//     int rollno;
//     float cgpa;

// };

// class TA : public Teacher, public Student {
//     public :
//     string name;

// };

// int main() {

//     TA ta1;

//     ta1.name ="dhoni kumar";
//     ta1.subject = "c++";
//     ta1.cgpa = 8.5;

//     cout <<ta1.name<<endl;
//     cout <<ta1.subject<<endl;
//     cout<< ta1.cgpa<<endl;

//     return 0;
// }


// //COMPAILE TIME POLYMORPHISM = FUNCTION OVERLOADING 

// #include <iostream>
// using namespace std;

// class Print {
//     public:
//     void show(int x) {
//         cout<<"int :"<< x<<endl;
//     }

//     void show(string str) {
//         cout<<"string :" <<str <<endl;
//     }
// };

// int main () {

//     Print obj1;
//     obj1.show(25);
//     obj1.show("apnacollge");


//     return 0;
// }



// //COMPAILE TIME POLYMORPHISM = FUNCTION OVERLOADING 

// #include <iostream>
// using namespace std;

// class Complex{

//     int real;
//     int img;

//     public:
//     Complex(int r, int i) {
//         real = r;
//         img = i;

//     }

//     void showNum() {
//         cout<< real <<" +" <<img<<"i \n";
//     }

//     Complex operator + (Complex & c2) {
//         int resReal = this->real + c2.real;
//         int resImg = this->img + c2.img;
//         Complex c3(resReal, resImg);
//         return c3;
//     }

// };

// int main () {

//     Complex c1(1, 2);
//     Complex c2(3, 4);

//     c1.showNum();
//     c2.showNum();

//     Complex c3= c1 +c2;
//     c3.showNum();
//     return 0;

//     return 0;
// }


// RUN TIME POLYMORPHISM = FUNCTION OVERIDING


// #include <iostream>
// using namespace std;

// class Parent {
//     public :
//     void show(){
//         cout << "parent class show // \n";
//     }
// };

// class Child {
//     public :
//     void show() {
//         cout << "child class show..\n";
//     }
// };

// int main () {

//     Child child1;
//     child1.show();

//     return 0;
// }


// ABSTRACT CLASS AND PURE VIRTUAL FUNCTION

// #include <iostream>
// using namespace std;

// // abstract class
// class Shape{
//     public:
//     virtual void  draw()=0; //ABSTRACT FNX , PURE VIRTUAL FNX
// };

// class Circle : public Shape {
//     public :
//     void draw() {
//         cout<<"draw circle..\n";
//     }
// };

// class Squre : public Shape{
//     public: 
//     void draw() {
//         cout<< " draw squre ..\n";
//     }
// };

// int main () {

//     Circle cir1;
//     cir1.draw();

//     Squre squ1;
//     squ1.draw();



//     return 0;
// }


// //  STATIC KEYWORD

// #include <iostream>
// using namespace std;

// // void counter () {
// //     static int count = 0;
// //     count++;
// //     cout<<"count :" << count<<endl;
// // }

// class Example{
//     public:
//     static int x;
// };
// int Example:: x=0;

// int main() {
//     // counter();
//     // counter();
//     // counter();
//     // counter();


//     Example eg1;
//     Example eg2;
//     Example eg3;

//     cout<<eg1.x++ <<endl;
//     cout<<eg2.x++ <<endl;
//     cout<<eg3.x++ <<endl;
//     return 0;
// }


// STATIC OBJECT

// #include <iostream>
// using namespace std;

// class Example {

//     public:
//      Example () {
//     cout<<"constructor"<<endl;
// }

// ~Example() {
//     cout<<"destructor" <<endl;
// }

// };



// int main() {

//     int a =0;
//     if(a == 0) {
//    static Example eg1;
//     }

//     cout<< "code ending ..\n";

//     return 0;
// }