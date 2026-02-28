// #include <iostream>
// using namespace std;

// int main () {


// //    int arr[5] = {7, 5, 2, 1, 3};
// //    int n = sizeof(arr) / sizeof(int);

// //    for(int i =0; i<n; i++) {
// //     cout <<arr[i] <<" "; // idx = 0, 1, 2, 3, 4,

// //    }
// //    cout << endl;



// //  int arr[5] ;
// //    int n = sizeof(arr) / sizeof(int);

// //    for(int i=0; i<n; i++) {
// //     cin>>arr[i];
// //    }

// //    for(int i =0; i<n; i++) {
// //     cout <<arr[i] <<" "; // idx = 0, 1, 2, 3, 4,

// //    }
// //    cout << endl;



// //    int n;
// //    cout<<"enter your length of array :";

// //    cin>>n;

// //    int arr[n];
// //    for(int i=0; i<n; i++) {
// //     cin>>arr[i];
// //    }

// //    for(int i=0; i<n; i++ ) {
// //     cout<<arr[i] <<",";
// //    }


// // int arr [] = {5, 4, 3, 9 ,12};
// // int n= sizeof(arr) /sizeof(int);

// // int max = arr [0];
// // for(int i = 0; i<n; i++){
// //     if(arr[i] > max) {
// //         max= arr[i];
// //     }
// // }
// // cout <<"lagest = " <<max <<endl;

// int arr[]= {3, 5, 6,2,7};
// int n= sizeof(arr) / sizeof(int);

// int small  =arr[0];
// for(int i=0; i<n; i++) {
//     if(arr[i] < small) {
//         small= arr[i];
//     }
// }
// cout<<"smallest value = " << small <<endl;



//     return 0;
// }


// #include <iostream>
// using namespace std;

// int  main() {

//     int arr [] = {5, 4, 3, 9 ,12};

//     int n =sizeof(arr) / sizeof(int);

//     int max=arr[0];

//     for(int i = 0; i<n; i++) {
//         if(arr[i] > max) {
//          max = arr[i];

//         }

//     }
//     cout<<"lergest = "<<max<< endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int linearSearch(int *arr, int n, int key) {
//     for(int i=0; i<n; i++) {
//         if(arr[i] == key) {
//             return i;
//         }
//     }
//     return -1;
// }

// int  main() {

//     int arr[]= {2, 4, 6, 8, 10, 12, 14, 16};
//     int n= sizeof(arr) /sizeof(int);

//     cout<<  linearSearch(arr, n, 10) <<endl;


//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printArr(int *arr, int n) {
//     for(int i=0; i<n; i++) {
//         cout<< arr[i] << ",";
//     }
//     cout << endl;
// }

// int  main() {


//     int arr[]= {5, 6, 3, 9, 2};
//     int n = sizeof(arr) / sizeof(int);

//     int copyArr[n];
//     for(int i=0; i<n; i++) {
//         int j=n-i-1;
//         copyArr[i] = arr[j];
//     }
//      for(int i=0; i<n; i++){
//         arr[i]= copyArr[i];
    
//      }
   
//    printArr(arr, n);

// return 0;

// }



#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout<< arr[i] << ",";
    }
    cout << endl;
}

int  main() {

    
    int arr[]= {5, 6, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int start =0 , end = n-1;

    while(start < end) {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        swap(arr[start] , arr[end]);

        start++;
        end--;
    }


       
   printArr(arr, n);

   return 0;

}