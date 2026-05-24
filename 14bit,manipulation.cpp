#include <iostream>
using namespace std;
int main() {

    // BITWISE OPERATORS

    cout<<(3 & 5) << endl;
    cout<<(3 | 5) << endl;
    cout<<(3 ^ 5) << endl;
    

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     bool isPrime = true;

//     if(n <= 1) {
//         isPrime = false;
//     }

//     for(int i = 2; i < n; i++) {

//         if(n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }

//     if(isPrime) {
//         cout << "Prime Number";
//     } else {
//         cout << "Not Prime Number";
//     }

//     return 0;
// }