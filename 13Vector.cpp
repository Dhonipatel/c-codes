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

// #include <iostream>
// #include<vector>
// using namespace std;

// int main () {

//     vector<int> vec ={1, 2, 3, 4};
//     cout <<"size :" << vec.size() <<endl;
//     cout << "capacity :"<< vec.capacity() <<endl;

//     vec.push_back(5);
//     cout <<"size :" << vec.size() <<endl;
//     cout << "capacity :"<< vec.capacity() <<endl;

//     return 0;
// }



// PAIR SUM

// #include <iostream>
// #include <vector>
// using namespace std;



// vector<int> pairSum(vector<int> arr, int target) {

//     int st =0, end =arr.size()-1;
//     int currSum =0;
//     vector<int> ans;

//     while(st < end) {
//         currSum = arr[st] + arr[end];
//         if(currSum == target) {
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans;
//         } else if(currSum > target) {
//             end--;
//         }else{
//             st++;
//         }
//     }
//     return ans;
// }

// int main(){

//     vector<int>vec = {2, 7, 11, 15};
//     int target =9;

//     vector<int> ans = pairSum(vec, target);
//     cout<< ans[0] << "," << ans[1]<<endl;

//     return 0;
// }


// 2D VECTOR

// #include <iostream>
// #include <vector>
// using namespace std;

// int main () {

//     vector <vector<int>> matrix= {{1, 2, 3,},  {4, 5, 6}, {7, 8, 9}};

//     for(int i=0; i<matrix.size();  i++){
//         for(int j=0; j<matrix[i].size(); j++) {
//             cout<< matrix[i][j] << " ";
//         }
//         cout << endl;
//     }



//     return 0;
// }

