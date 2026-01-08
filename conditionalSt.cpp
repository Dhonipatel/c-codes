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


    // int marks ;
    // cout<<"enter your marks : ";
 
    // cin>> marks;

    // if(marks > 90 ) {
    //     cout << "grade A++ "<< endl;
    // }else if (marks >= 80) {
    //     cout << "grade A " <<endl;

    // } else{
    //     cout << "grade B" << endl;
    // };


    // int income ;
    // float tax;
    // cout<<"enter your income (in lakhs): ";
    // cin>> income;

    // if(income < 5) {
    //        tax = 0;
    //     cout<<"you have no tax " <<endl;
      

    // }else if (income >= 5 && income < 10) {
    //      tax = 0.2 * income;
    //     cout<<"you have to pay 20% tax" << endl;
     
    // }else {
    //     tax = 0.3 *income;
    //     cout<<"you have to pay 30% tax"<< endl;
        
    // }
    // cout << " Tax = " <<(tax *100000)<< endl;


    // int a, b, c ;

    // cout<<" enter a :";
    // cin>> a;

    // cout<<" enter b :";
    // cin>> b;

    // cout<<" enter c :";
    // cin>> c;

    // if ( a >= b && a >= c) {
    //     cout << " a is largest number"<< endl;
    // } else if (b >= c) {
    //     cout << " b is largest number"<< endl;

    // } else {
    //     cout << "c is largest numbe "<< endl;
    // }



    // bool isAdult;
    // int age ;
    // cout<<"enter you age"<<endl;
    // cin>>age;

    // if(age >= 18){
    //     isAdult = true;
        
    // }else{
    //     isAdult = false;
    // }

    // // upar wala if else method 




    // // TERNARY OPERTAR ////////////////////////////// ?






    // isAdult = age >= 18 ? true : false;

    // // Largest of 2 numbers

    // int a = 10;
    // int b = 5;

    // int largest = a >= b ? a : b;
    // cout <<"largest is"<< largest << endl;

    // int num = 13 ;

    // int isEven = num %2 == 0 ? true : false;

    // int day = 1 ;
    // cout<< "enter day :" ;
    // cin>> day;

    // switch(day) {
    //     case 1: cout <<"monday" <<endl;
    //     break;
    //     case 2: cout << "tuesday" << endl;
    //     break;
    //      case 3: cout << "wednesday" << endl;
    //     break;
    //      case 4: cout << "thursday" << endl;
    //     break;
    //      case 5: cout << "friday" << endl;
    //     break;
    //      case 6: cout << "saturday" << endl;
    //     break;
    //      case 7: cout << "sunday" << endl;
    //     break;
    //     default: cout << "Invalid Day"<<endl;
    // }

    // int a ,b ;
    // char op;

    //  cout <<"enter a : ";
    // cin>> a;
    // cout <<"enter b  : ";
    // cin>>b;
    // cout <<"enter operator :";
    // cin>> op;

    // // calculator

    // // if (op == '+') {
    // //     cout << "a + b =" << (a+b) << endl;
    // // }else if (op == '-') {
    // //     cout << " a - b ="<< (a-b)<< endl;
    // // }else if ( op == '*') { 
    // //     cout<< " a * b = " << (a*b) << endl;
    // // } else if (op == '/') {
    // //     cout<< "a / b =" << ( a/b) << endl;
    // // } else{
    // //     cout << "Invalid operator";
    // // }

    // // SWITCH STATEMENT SE

    // switch (op) {
    //     case '+' : cout << "a + b =" << (a+b)<<endl;
    //     break;
    //     case '-': cout << "a - b ="<< (a-b) << endl;
    //     break;
    //     case '*': cout << "a * b ="<< (a*b) << endl;
    //     break;
    //     case '/':
    //     cout << "a / b = " << (a/b);
    //     break;
    //     break;
    //     default: cout << "invalid operator"<<endl;
    // }

        

        //  ASSIGMENT QS //////////////////


    int num ;
    cout<<"enter your number"<<endl;
    cin>>num;

    // if(num > 0) {
    //     cout<<"num is positive"<<endl;

    // }else if (num < 0 ) {
    //     cout<<"num is negative"<<endl;
    // } else{
    //     cout<<" num is zero"<<endl;
    // }

    
    // TERNARY OPERTOR SE

    (num > 0) ? cout<<"positive" : (num == 0) ? cout<<"ZERO" : cout<<"negative";



    return 0;

  
};