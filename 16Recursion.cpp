// // FECTORIAL RECURSION

// #include <iostream>
// using namespace std;

// // recursive function recursion

// int fectorial(int n) {
//     if(n==0) {
//         return 1;
//     }

//    return n* fectorial(n-1);

// }

// // 

// return 0;

// }

// #include <iostream>
// using namespace std;

// void print  (int n) {
//     if(n==0) {
//         return;
//     }

//     cout<<n<< " " <<endl;
//     print(n-1); faith next call
// }

// int main() {

//      print(20);
//     //cout<<ans<<endl;

//     return 0;
// }


// SUM OF N NURUAL NUMBERS

// #include <iostream>
// using namespace std;

// int sum(int n) {

//     if(n == 1) {
//         return 1;
//     }

//     return n + sum(n-1);
// }


// int main() {

//     cout<< sum(6) <<endl;


//     return 0;
// }



//// PRINT NTH FIBONACCI NUMBER

// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     if(n == 0 || n == 1) {// 0 , 1
//         return n;
//     }

//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main() {

//     cout<< fibonacci(3) <<endl;

//     return 0;
// }

 

// #include <iostream>
// using namespace std;

// bool isSorted(int arr [], int n, int i) {
//     if(i == n-1) {
//         return true;
//     }
    
//     if(arr[i] > arr[i+1]) {
//         return false;
//     }

//     return isSorted(arr, n, i+1);
// }

// int main() {

//     int arr1[5] = {1, 2, 3, 4, 5,};// sorted :1
//     int arr2[5] = {1, 2, 4, 3,  5,};//unsorted :0
//     cout<<isSorted( arr2, 5, 0);

//     return 0;
// };



#





// // #part 2

// TILLING PROBLEM GOOGLE


// #include <iostream>
// using namespace std;

//       int tilingproblem(int n) {   //2x1
//     if(n==0 || n==1) {
//         return 1; 
//     }
//     return tilingproblem(n-1) + tilingproblem(n-2);
// }


// int main() {
//     int n=3;

//     cout << tilingproblem(5) << endl; //2x5

//     return 0;
// }





// REMOVE DUPLICATES IN STRING

#include <iostream>
#include <string>
using namespace std;

void removeDuplicates (string str, string ans, int i, int map[26]) {

    if(i == str.size()) {
        cout<< "ans :" <<ans <<endl;
        return;
    }


    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]) { // duplicate
        removeDuplicates(str , ans, i+1, map);

    } else { // not dupllicate

        map[mapIdx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);

    }
}


int main() {

    string str = "appnnacollege";
    string ans = "" ;
    int map[26] = {false};

    removeDuplicates(str , ans , 0 , map);

    return 0;
}





