// #include <iostream>
// using namespace std;

// int main (){

// for(int i = 1; i <= 3; i++) {        // Outer loop
//     for(int j = 1; j <= 2; j++) {    // Inner loop
//         cout << i << " " << j << endl;
//     }
// }

// for(int i = 1; i <= 3; i++) {
//     for(int j = 1; j <= 3; j++) {
//         cout << "* ";
//     }
//     cout << endl;
// }


// //   return 0;

// // }




// LIVE SESSION Qs 

// #include <iostream>
// using namespace std;

// int main () {
//   // int b = 5;
//   // int c = --b;

//   // int x = 'a' + b++ - c;
 
//   // cout<<b<< " " <<c<<" "<<x<<endl;

//   int b = 5;
//   int x = ++b + b++;
//   cout<<b<< " " <<x<<endl;



  
// // calculator

//     if (op == '+') {
//         cout << "a + b =" << (a+b) << endl;
//     }else if (op == '-') {
//         cout << " a - b ="<< (a-b)<< endl;
//     }else if ( op == '*') { 
//         cout<< " a * b = " << (a*b) << endl;
//     } else if (op == '/') {
//         cout<< "a / b =" << ( a/b) << endl;
//     } else{
//         cout << "Invalid operator";
//     }



// int n = 4;
// for(int i = 1; i <= n; i++) {
//     // spaces
//     for(int s = 1; s <= n - i; s++) {
//         cout << " ";
//     }
//     // stars
//     for(int j = 1; j <= i; j++) {
//         cout << "* ";
//     }
//     cout << endl;
// }



// int n = 4;
// int num = 1;
// for(int i = 1; i <= n; i++) {
//     for(int j = 1; j <= i; j++) {
//         cout << num << " ";
//         num++;
//     }
//     cout << endl;
// }




//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 9, 1, 7, 5};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    cout << "Largest = " << max;
    return 0;
}

