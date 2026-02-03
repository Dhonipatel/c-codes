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



    // int n=4;

    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=n; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // };


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

// int  n =5;

// for (int i=1; i<=n; i++) {
//     for(int j=1; j<=i; j++) {
//         cout<< j ;
//     }
//     cout<<endl;
// }

// int n = 6;
// char ch = 'A';

// for(int i =1; i<=n; i++) {
//     for(int j=1; j<=i; j++) {
//         cout << ch;
//         ch++;
//     }
//     cout<<endl;
// }

// int n= 6;

// for(int i=1; i<=n; i++) {
//     cout<<"*"; //First
//     for(int j=1; j<=n-1; j++) {
//         if(i==1 || i ==n ) {
//             cout<<"*";
//         }else {
//             cout<<" ";
//         }
//     }
//     cout<<"*"<< endl;//Last
// }




// int n =8;

// for(int i=1; i<=n; i++) {
//     // space
//     for(int j=1; j<=n-i; j++) {
//         cout<<" ";
//     }

//     for(int j=1; j<=i; j++) {
//         cout<<"*";
//     }
//     cout<< endl;
// }


// int n=4;
// int num=1;

// for(int i=1; i<=n; i++) {
//     for(int j=1; j<=i; j++) {
//         cout<<num++ <<" ";
     
//     }
//     cout<<endl;
// }


// int n=4;

// // FIRST PYRAMID
//  for(int i=1; i<=n; i++){
//     // space
//     for(int j=1; j<=n-i; j++) {
//         cout<<" ";
//     }
//     for(int j=1; j<=2*i-1; j++) {
//         cout<<"*";
//     }
//     cout<<endl;
//  }

//     // 2ND PYRAMID
//     for(int i=n; i>=1; i--) {
//         //space
//         for(int j=1; j<=n-i; j++) {
//             cout<<" ";

//         }
//         // stars
//         for(int j=1; j<= 2*i-1; j++) {
//             cout << "*";
//         }
//         cout<< endl;
//     }

    
 
// int n=4;

// for(int i=1; i<=n; i++) {
//     for(int j=1; j<=n-i; j++) {
//         cout<<" ";
//     }
//     for(int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;


// }


// for(int i=1; i<=n; i++) {
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";

//     }
//     for(int j=1; j<=i; j++) {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
 

    int rows = 5;
    int cols = 10;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            if(i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
  
}






    return 0;




}