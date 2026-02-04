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



#include <iostream>
using namespace std;

int mul (int a, int b  ) {
    int mul = a * b;
    return mul;

}

// even --> true odd --> false

int isEven(int n) {
    if(n %2 ==0) {
        return true;
    } else{
        return false;
    }
}



int main () {

int m = mul(4 , 5);// 4 5 are argumernts
cout<< "mul  " <<m << endl;

cout<< isEven(6);

    return 0;
}


