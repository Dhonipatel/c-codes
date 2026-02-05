// #include <iostream>
// using namespace std;

// void sayHello() {
//     cout<<"hello :) \n"; 
// }

// void assistant() {
//     sayHello();
//     cout<<"work done \n";
// }

// int main() {

//     assistant();



//     return 0;
// }



// PRACTICE QUESTIONS


// #include <iostream>
// using namespace std;

// // int sum (int a , int b) {  //a, b are parameters
// //     int sum = a + b;
// //     return sum;
// // }


// int diff (int a , int b=1) {  //a, b are parameters
//     int diff = a - b;
//     return diff;
// }

// int main (){

// // int s=  sum (2, 4); // 2,4 are arguments
// // cout<<"sum = " <<s<<endl;

// int d=  diff (2); // 2,4 are arguments
// cout<<"sum = " <<d<<endl;

//     return 0;

// }



//PRACTICE QEUTIONS 


// #include <iostream>
// using namespace std;

// int mul (int a, int b  ) {
//     int mul = a * b;
//     return mul;

// }

// // even --> true odd --> false

// int isEven(int n) {
//     if(n %2 ==0) {
//         return true;
//     } else{
//         return false;
//     }
// }



// int main () {

// int m = mul(4 , 5);// 4 5 are argumernts
// cout<< "mul  " <<m << endl;

// cout<< isEven(6);

//     return 0;
// }





// // PRACTICE QEUSTION


// #include <iostream>
// using namespace std;

// int factorial (int n) {
//     int fact = 1;
//     for(int i = 1; i<=n; i++) {
//         fact = fact*i;
//     }
//     cout <<"factorial ("<< n <<") =" << fact <<endl;
//     return fact;
// }

// int main () {


//     factorial(0);
//     factorial(1);
//     factorial(2);
//     factorial(3);
//     factorial(4);
//     factorial(5);
//     factorial(6);

//     return 0;
// }



// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if(n == 1) {
//         return false;
//     }

//     for(int i =2; i<=n-1; i++){
//         if(n %i == 0) // non prime
//         return false;
//     }
//     return true;
// }

// int main () {

//     cout<< isPrime(22) <<endl;


//     return 0;
// }


// #include <iostream>
// using namespace std;

// int factorial (int n) {
//     int fact = 1;
//     for(int i=1; i<=n; i++) {
//         fact *=i;

//     }
//     return fact;
// }

// int binCoff(int n, int r) {
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);

//     int result = val1 /(val2* val3);
// }


// int main() {

// cout << binCoff(4, 2) <<endl;




//     return 0;
// }


#include <iostream>
using namespace std;

 int sum (int a, int b) {
    cout<< (a+b) <<endl;
    return a+b;
}


double sum (double a, double b) {
    cout<< (a + b) <<endl;
    return a + b;
}

int sum (int a, int b, int c) {
    cout <<(a+b+c) <<endl;
    return a + b + c;
}


int main() {

    sum(2, 3);
    sum(12 , 13);
    sum(1.5, 2.5);
    sum(1, 2, 3);

    return 0;
}