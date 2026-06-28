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





// COUNT SET BIT
// #include <iostream>
// using namespace std;

// class Complex {
// public:
//     int real;
//     int imag;

//     Complex(int r, int i) {
//         real = r;
//         imag = i;
//     }

//     void display() {
//         cout << real << " + " << imag << "i";
//     }
// };

// int main() {
//     Complex c1(3, 4);
//     c1.display();
// }