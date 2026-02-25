#include <iostream>
using namespace std;

int main () {


//    int arr[5] = {7, 5, 2, 1, 3};
//    int n = sizeof(arr) / sizeof(int);

//    for(int i =0; i<n; i++) {
//     cout <<arr[i] <<" "; // idx = 0, 1, 2, 3, 4,

//    }
//    cout << endl;



//  int arr[5] ;
//    int n = sizeof(arr) / sizeof(int);

//    for(int i=0; i<n; i++) {
//     cin>>arr[i];
//    }

//    for(int i =0; i<n; i++) {
//     cout <<arr[i] <<" "; // idx = 0, 1, 2, 3, 4,

//    }
//    cout << endl;



//    int n;
//    cout<<"enter your length of array :";

//    cin>>n;

//    int arr[n];
//    for(int i=0; i<n; i++) {
//     cin>>arr[i];
//    }

//    for(int i=0; i<n; i++ ) {
//     cout<<arr[i] <<",";
//    }


int arr [] = {5, 4, 3, 9 ,12};
int n= sizeof(arr) /sizeof(int);

int max = arr [0];
for(int i = 0; i<n; i++){
    if(arr[i] > max) {
        max= arr[i];
    }
}
cout <<"lagest = " <<max <<endl;




    return 0;
}