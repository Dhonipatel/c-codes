
// BUBBLE SORT  ////////////////


// #include <iostream>
// using namespace std;

// void print (int arr[], int n) {
//     for(int i=0; i<n; i++){
//         cout << arr[i] <<" ";
//     }
// }

//   void bubbleSort(int arr[], int n) {
    
//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n-i-1; j++) {

//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
              
//             }
//         }
//     }
//     print(arr, n);
// }

// int main() {
//     int arr[5] = {5, 4,1, 3, 2};
//     bubbleSort(arr , 5);


//     return 0;
// }





// #include <iostream>
// using namespace std;

// void print (int arr[], int n) {
//     for(int i=0; i<n; i++){
//         cout << arr[i] <<" ";
//     }
// }

//   void bubbleSort(int arr[], int n) {
    
//     for(int i=0; i<n-1; i++) {
//         bool isSwap = false;
//         cout<<"inner loop";
//         for(int j=0; j<n-i-1; j++) {

//             if(arr[j] > arr[j+1]) {
//                 cout << "inner loop";
//                 swap(arr[j], arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(!isSwap) {
//             //array is already sorted
//             return;
//         }
//     }
//     print(arr, n);
// }

// int main() {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     bubbleSort(arr , 10);
//     cout << endl;


//     return 0;
// }



// SELECTION SORT ////////////

// #




// INSERTION SORT 



#include <iostream>
using namespace std;
void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i] << " ";
    }
}

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(arr, n);
}

int main() {
    int arr[5]= {5, 4, 1, 3, 2};
    insertionSort(arr, 5);


    return 0;
}
