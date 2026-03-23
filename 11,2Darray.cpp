// #include <iostream>
// using namespace std;

// int main() {

//     int  students[3] [3] = {{100, 100, 100},
//                              {85, 74, 89},
//                             {63, 72, 65}};

//      cout << students[1] [1] ;                       

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
    
//     int arr[3][4];

//     int n =3, m=4;
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cin>> arr[i][j];
//         }
//     }

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//            cout<< arr[i][j] << " ";
//         }
//         cout<<endl;
//     }



//     return 0;
// }


// //SPIRAL MATRIX /////////////

// #include <iostream> 
// using namespace std;

// void spiralMatrix(int mat[] [4], int n, int m) {

//     int srow= 0, scol =0;

//     int erow = n-1, ecol= m-1;

//     while(srow <=erow && scol <= ecol) { // odd matrix
//         // top

//         for(int j=scol; j <=ecol; j++) {
//             cout << mat[srow][j] <<" ";
//         } 

//         // right

//         for(int i=srow+1; i<=erow; i++) {
//             cout<< mat[i][ecol] << " ";
//         }

//         // bottom

//         for(int j=ecol-1; j>=scol; j--) {
//             if(srow == erow) {  // middle
//                 break;
//             }
//             cout << mat[erow][j] << " ";
//         }

//         // left 
//         for(int i=erow-1; i>=srow+1; i--) {
//             if(scol == ecol) { // middle
//                 break;

//             }
//             cout << mat[i][scol] <<" ";
//         }

//         srow++; scol++;
//         erow--; ecol--;

//     } 

//     cout <<endl;


// }

// int main() {
    
//         int matrix[4][4] = {{1, 2, 3, 4},
//                             {5, 6, 7, 8 },
//                             {9, 10, 11, 12},
//                             {13, 14, 15, 16}};

//     spiralMatrix(matrix, 4, 4);   
    
//      int matrix2[3][4] = {{1, 2, 3, 4},
//                             {5, 6, 7, 8 },
//                             {9, 10, 11, 12}};

//     spiralMatrix(matrix, 3, 4);    

  

//     return 0;
// }


// DIOGONAL SUM /////////////////////

#include <iostream> 
using namespace std;

int diagonaSum(int mat [] [3], int n) {
    int sum =0;

//     for(int i=0; i<n; i++) { // rows
//         for(int j=0; j<n; j++) { //cols
//             if(i== j) {
//                 sum += mat[i][j];
//             } else if(j == n-i-1) {
//                 sum += mat[i][j];
//             }

//         }

//     }
//     cout << "sum = " << sum << endl;
//     return sum;
// }

// O(N)

// for(int i=0; i<n; i++) {
//     sum += mat[i][i]; //pd
//     if(i != n-i-1) {
//         sum += mat[i][n-i-1]; // sd
//     }
// }

// cout << "sum =" << sum << endl;
// return sum;

// }

// int main() {

//            int matrix[4][4] = {{1, 2, 3, 4},
//                             {5, 6, 7, 8 },
//                             {9, 10, 11, 12},
//                             {13, 14, 15, 16}};
  


//     int matrix2 [3][3] = {{1, 2, 3},
//                          {4, 5, 6 },
//                         { 7, 8, 9}};
//     diagonaSum(matrix2, 3);



//     return 0;
// }