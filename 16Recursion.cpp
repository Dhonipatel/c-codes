// // FECTORIAL RECURSION

// #include <iostream>
// using namespace std;

// // recursive function recursion

// int fectorial(int n){
//     if(n == 0) {
//         return 1;
//     }
//     return n * fectorial(n-1);

// }

// int main() {
//     int ans = fectorial(5);
//     cout<<ans<<endl;

//     return 0; 
// }


// PRINT NUMBERS IN DECREASING ORDER

// #include <iostream>
// using namespace std;

// void print(int n) {
//     if(n == 0) {
//         return;
//     }

//     cout<<n<<endl;
//     print (n-1);
// }

// int main() {

//      print(20);
//     //cout<<ans<<endl;

//     return 0;
// }


// SUM OF N NURUAL NUMBERS

#include <iostream>
using namespace std;

int sum(int n) {

    if(n == 1) {
        return 1;
    }

    return n + sum(n-1);
}


int main() {

    cout<< sum(6) <<endl;


    return 0;
}