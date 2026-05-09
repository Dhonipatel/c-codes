// #include <iostream>
// using namespace std;

// void funcArr() {
//     int size ;
//     cin >> size;

//     int *ptr = new int [size]; 
//     int x = 1;

//     for (int i=0; i<size; i++) {
//         ptr [i] = x;

//         cout << ptr [i] << " ";
//         x++;
//     }
//     cout << endl;

//     delete [] ptr ; // free
// }

// int main () {

//     funcArr();



//     // // int arr [100] = {1, 2, 3, 4, 5};
//     // int size;
//     // cin >> size;

//     // int *arr = new int(size);

//     // int x = 1;
//     // for(int i=0; i<size; i++) {
//     //     arr[i] = x;
//     //     cout <<arr [i] << " ";
//     //     x++;
//     // }

//     cout <<endl;

//     return 0;
// }


// #include  <iostream> 
// using namespace std;

// int* func () {
//     int *ptr = new int;
//     *ptr = 1200;
//     cout << " ptr point to " << *ptr << endl;

//     return ptr;
// }

// int main () {

//     int *x = func();
//     cout << *x<< endl;
    

//     return 0;
// }


// 2D DYNAMIC ARRAY  

// #include <iostream>
// using namespace std;

// int main () {

//     int rows, cols;

//     cout <<"enter rows :";
//     cin>> rows;
//     cout << "enter cols : ";
//     cin>>cols;

//     int* *matrix = new int*[rows];
//     for(int i=0; i<rows; i++) {
//         matrix[i] = new int [cols];
//     }

//     // data store 

//     int x = 1;
//     for(int i=0; i<rows; i++) {
//         for(int j=0; j<cols; j++) {
//             matrix[i][j] = x++;
//             cout <<matrix[i][j] <<" ";

//         }
//         cout <<endl;
//     }

//     return 0;
// }


// VECTOR IMPLEMENTATION IN MEMORY

#include <iostream>
#include<vector>
using namespace std;

int main () {

    vector<int> vec ={1, 2, 3, 4};
    cout <<"size :" << vec.size() <<endl;
    cout << "capacity :"<< vec.capacity() <<endl;

    vec.push_back(5);
    cout <<"size :" << vec.size() <<endl;
    cout << "capacity :"<< vec.capacity() <<endl;

    return 0;
}
