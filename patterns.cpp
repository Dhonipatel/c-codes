#include <iostream>
using namespace std;

int main() {
    
    // int n= 5;
    // // outerloop
    // for (int i = 1; i<=n; i++) {
    //     // inner loop
    //    for(int j= 1; j<=n; j++) {
    //     cout<<i << " ";

    //    }
    //     cout<<endl;
        
    // }

    // PRINT STAR PATTERN

    // int n =5;

    // for (int i =1; i<=n; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

// PRINT INVERTED STAR PETTERN

// int n=5;

// for(int i =1; i<=n; i++) {
//     for(int j=1; j<=(n-i+1); j++) {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

   
//PRINT HALF PYRAMID PETTERN

int  n =5;

for (int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
        cout<< j ;
    }
    cout<<endl;
}


    return 0;


}