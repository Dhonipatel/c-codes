#include <iostream>
using namespace std;

int main () {

    // /////////////// IF ELSE STATEMENT //////////////////////

    // int age = 18;
    // cout << "Enter your age;";

    // cin >> age;
    // if (age >= 18) {
    //     cout << "you can vote " << endl;
    // }else{
    //     cout << "you can not vote " <<endl;
    // }


    // int marks = 33;
    // cout<<"Enter your marks :";
    // cin>> marks;

    // if(marks >= 33) {
    //     cout<<"you are pass"<<endl;
    // } else{
    //     cout<<"you are fail"<<endl;
    // }


    // int a , b ;
   
    
    // cout<<"enter your number a: " ;
    //  cin>> a;

    // cout<< "enter your number b: ";
    // cin>> b;

    // if (a >= b) {
    //     cout<< "a is largest";

    // }else{
    //     cout<<"b is largest"<< endl;
    // }



    // int num ;
    // cout<< "enter your number: ";
    // cin>> num;

    // if (num % 2 == 0) {
    //     cout<< "number is even " <<endl;

    // }else {
    //     cout<< " number is odd"<< endl;
    // };



    // //////////////// ELSE IF STATEMENT ///////////////////


    // int age ;
    // cout << "enter your age:";
    // cin >> age;

    // if(age < 18 ) {
    //     cout<< "your are kids" <<endl;

    // } else if (age >= 18 && age < 60) {
    //     cout<<"you are adult"<<endl;
    // } else{
    //     cout<<"you are senior citizen "<< endl;
    // };


    int marks ;
    cout<<"enter your marks : ";
 
    cin>> marks;

    if(marks > 90 ) {
        cout << "grade A++ "<< endl;
    }else if (marks >= 80) {
        cout << "grade A " <<endl;

    } else{
        cout << "grade B" << endl;
    };



    return 0;

  
};