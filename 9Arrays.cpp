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


///////////////////////////////////////
// REVERSE AN ARRAY
//////////////////////////////////



// WITH EXTEA SPACE

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



// WITHOUT EXTRA SPACE (2POINTER APPROACH)

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

//     int start =0 , end = n-1;

//     while(start < end) {
//         // int temp = arr[start];
//         // arr[start] = arr[end];
//         // arr[end] = temp;

//         swap(arr[start] , arr[end]);

//         start++;
//         end--;
//     }


       
//    printArr(arr, n);

//    return 0;

// }



//////////////////////
// BINARY SEARCH
/////////////////////

// #include <iostream>
// using namespace std;

// int binSearch(int *arr, int n, int key) {
//     int st=0 , end = n-1;
    
//     while(st <= end) {
//         int mid =(st +end) / 2;
//         if(arr[mid] == key) {
//             return mid; //key found
//         } else if(arr[mid] < key) { // 2nd half
//             st = mid + 1;

//         }else {
//             // 1st half
//             end = mid-1;
//         }

//     }
//     return -1;
// }

// int main() {

//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16,};
//     int n =sizeof(arr) / sizeof(int);

//     cout << binSearch(arr, n, 12) << endl;



//     return 0;
// }


////////////////////////
// POINTER ARITHMETIC
//////////////////////

// #include <iostream>
// using namespace std;

// void printArr(int *ptr, int n) {
//     for(int i=0; i<n; i++) {
//         cout << *ptr <<"\n";
//         ptr = ptr+1;
//     }
// }

// int main() {

//     // increament 

//     // char ch ='a';
//     // int a = 10;
//     // int *ptr = &ch;
//     // cout<< ptr << "\n";
//     // ptr++; //1 char ++
//     // cout << ptr << "\n";

//     // decreament


//     // int a = 5;
//     // int *ptr = &a;

//     // cout << ptr << "\n";
//     // ptr++;
//     // cout << ptr << "\n";
//     // ptr--;



//     // ADDITION SUBTRACTION OF CONSTANT

//     // int a =5;
//     // int *ptr = &a;

//     // cout << ptr << "\n"; //1st
//     // ptr = ptr +3;
//     // cout << (ptr-3) << "\n";



//     int arr[] = {1, 2, 3, 4, 5}; 
//     int n = sizeof(arr) / sizeof(int);
//     printArr(arr, n);


// POINTER ARITHMETIC
    
// int arr[20] = {1, 2, 3, 4, 5, 6};
// int *ptr1 = arr;
// int *ptr2 = ptr1 + 3;

// // subtraction

// // cout << ptr2 - ptr1 <<"\n";

// // compare 


// cout <<(ptr2 > ptr1) << "\n"; //yes : true : 1

//     return 0;
// }




// PRINT SUBARRAYS

// SUBARRAY IS COUNTINOUS  PART OF AN ARRAY

// #include <iostream>
// using namespace std;

// void printSubarrays (int *arr , int n) {
//     for(int start = 0; start < n; start ++) {
//         for (int end=start; end < n; end++) {
//             // cout << "(" << start << "," << end << ")" ;

//             for(int i=start; i <= end; i++) {
//                 cout << arr[i];
//             }
//             cout<< ", ";
//         }
//         cout << endl;
//     }
// }

// int main ()  {  


//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     printSubarrays(arr , n);

//     return 0;
// }




// // MAX SUBARRAY SUM

// #include <iostream>
// #include <climits>
// using namespace std;

// void maxSubarraySum1(int *arr, int n) {
//   int maxSum = INT_MIN;

//   for(int start=0; start<n; start++) {
//     for(int end=start; end<n; end++) {
//       int currSum =0;
//       for(int i = start; i<=end; i++) {
//         currSum += arr[i];
//       }
//       cout<< currSum << " ,";
//       maxSum = max(maxSum, currSum);
//     }

//     cout << endl;
//   }
//   cout <<"maxium subarray sum =" << maxSum << endl;

// }

// int main ()  { 
     
//   int arr[] = {2, -3, 6, -5, 4, 2};
//   int n = sizeof(arr)/ sizeof (int);

//   maxSubarraySum1(arr , n);

//   return 0;
}



#include <iostream>
#include <climits>
using namespace std; 

int maxSum = INT_MIN;
void maxSubarraySum2 (int *arr, int n) {
  for( int start=0; start<n; start++) {
   int  currSum =0;
   for( int end = start; end<n; end++) {
    currSum +=arr[end];
    maxSum = max(maxSum , currSum);

   }
   cout <<endl;
  }
  cout << "maximum subarray sum =" << maxSum << endl;
}

  

int main ()  { 

  int arr[] ={2, -3, 6, -5, 4 ,2};
  int n= sizeof(arr) / sizeof (int);

  maxSubarraySum2(arr , n);

    return 0;
}