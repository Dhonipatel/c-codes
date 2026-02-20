// #include <iostream>
// using namespace std;

// int main() {
 
//     int a =10;
//     int *ptr= &a;

//     // float pi = 3.14;
//     // float *ptr2 = &pi;


//     int **pptr = &ptr;
//     cout << &ptr << " = " << pptr << "\n";





//     // cout<<&pi <<" = " <<ptr2 << "\n";

//     // cout<<&a << " = " << ptr << "\n";

//     return 0;
// }



// #include <iostream>
// using namespace std;

//  int changeA(int num) {
//     int a = 20;
//     cout<< a << endl;
//  }


//pass by reference using pointer

// int changeA( int *ptr) {
//     *ptr = 20;
//     cout << *ptr << endl;
// }



// void changeA(int &param) {
//     param = 20;
//     cout << param << "\n";
// }

// int main () {

    // int a = 10;
    // int *ptr = &a;

    // cout << ptr <<"\n";
    // cout << *ptr <<"\n";

    // *ptr = 20;

    // cout << a <<"\n";


    // //// NULL POINTER

    // int *ptr = NULL;

    // cout << ptr << "\n";
    
    // cout<< *ptr <<"\n"; //segmentation fault

    // cout<<"bye";




    //pass by reference using pointer

    // int a = 10;
    // changeA(&a);
    // cout << a<< endl;


    // reference variable 

    // int a = 10;
    // int &b = a;
    //  b = 25;
    //  cout << b << "\n";
    //  cout << a << "\n";

  
// int a = 10;
// int *b;

// changeA(a);
// cout << a << "\n";

   
    


//     return 0;
// }






// live session 


// #include <iostream>
// using namespace std;

// void swap(int a , int b) {
//     cout <<a << " " << endl;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<< a << " " << b << endl;
// }

// int main () {

//     int x =10;
//    int y = 20;

//     cout << x<< " " <<y <<endl;
//     swap(x , y);
//     cout<<x << " " << y <<endl;




//     return 0;
// }



// PRACTICE QUESTION

// what will ptr2 point to in the following code

#include <iostream>
using namespace std;

int main () {

    int x = 5, y = 10;
    int *ptr1 = &x, *ptr2 = &y;
    ptr2 = ptr1;
    cout<< ptr2 <<"\n";
    cout << ptr1<<"\n";
    cout << &x <<"\n";

    return 0;
    



}



