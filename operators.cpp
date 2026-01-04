// #include <iostream>
// // MACRO aek symbolic constant hota hai
// // #define x 25
// using namespace std;

// int main () {

// // const int num = 25; // must be intialized
// // int num2 = 25;
// // num2 = 35;
// // num = 35; // constant never change

// // const int y = 35;



    
//     return 0;

// }


// TYPECASTING IN C++

// #include <iostream>
// using namespace std;

// int main () { 

// // cout<< (10/3) << endl; //3 
// // cout<< (10/3.0) << endl; //3.3333

// // cout << ('A' + 1) << endl; //65
// // cout << ('a' + 1) << endl; //65

// // cout << ('A' + 0) << endl; //65
// // cout << ('a' + 0) << endl; //97

// // typecasting explicit 

// float PI = 3.14;
// cout << (int)(PI) << endl; //3
// cout << ((float)10/3) << endl; //3.3333
// cout << (char) ('A' + 1) << endl; //B

// }


// // PRACTICE Qs

// #include <iostream>
// using namespace std;

// int main () {
//     cout <<(bool)3 + 2 << endl;
//     cout << (23.5 + 2 + 'A') << endl;

//     return 0;
// }



// TYPE OF OPEATORS IN C++


// #include <iostream>
// using namespace std;

// int main () {

//     // // Arithemtic Opertors////

//     // // Binary 

//     // int  a = 5;
//     // int b = 3;

//     // cout << "+" << (a + b) << endl; //8
//     // cout << "-" << (a - b) << endl; //2
//     // cout << "*" << (a * b) << endl; //15
//     // cout << "/" << (a / b) << endl; //1
//     // cout << "%" << (a % b) << endl; // Modulo (remainder)2



//     // // Unary 

//     int a = 5;

//     //  a++;
//     //  cout << "a = " << a << endl; //6

//     //   a--;
//     //  cout << "a = " << a << endl; //5

//     int b = a--; // post derement
//     // int b = --a; // pre derement
//     cout << "a =" << a << endl; //2
//     cout << " b = " << b << endl; //3






//     return 0;
// }




// // ASSIGMENT OPERATORS IN C++
// #include <iostream>
// using namespace std;

// int main () { 

//     int a = 10;

//     a += 5; // a = a + 5
//     cout << "a =" << a << endl; // 15

//       a -= 5; // a = a - 5
//     cout << "a =" << a << endl; // 10

//       a *= 5; // a = a * 5
//     cout << "a =" << a << endl; // 50

//       a /= 5; // a = a / 5
//     cout << "a =" << a << endl; // 10



//     return 0;

// }




// // RELATIONAL OPERATORS IN C++
// #include <iostream>
// using namespace std;

// int main () { 


//   int a = 3;
//   int b = 5;
//     cout << (a > b) << endl; // false -> 0
//     cout << (a < b) << endl; // true -> 1
//     cout << (a == b) << endl; // false -> 0
//     cout << (a != b) << endl; // true -> 1
    

//     return 0;
// }

// // // LOGICAL OPERATORS IN C++
// #include <iostream>
// using namespace std;
// int main () {

//   cout << ((3 > 2) && (5 > 2)) << endl; // true && true -> 1
//   cout << (( 3 > 2) || (5 < 2)) << endl; // true || false -> 1
//   cout << (!(3 > 2)) << endl; // !true -> false ->
//   return 0;

// }




// LIVE SESSION Qs 

#include <iostream>
using namespace std;

int main () {
  // int b = 5;
  // int c = --b;

  // int x = 'a' + b++ - c;
 
  // cout<<b<< " " <<c<<" "<<x<<endl;

  int b = 5;
  int x = ++b + b++;
  cout<<b<< " " <<x<<endl;


}