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



#include <iostream>
using namespace std;

int main () {

    int a = 10;
    int *ptr = &a;

    cout << ptr <<"\n";
    cout << *ptr <<"\n";

    *ptr = 20;

    cout << a <<"\n";
    


    return 0;
}

