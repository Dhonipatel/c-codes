// #include <iostream>
// using namespace std;
// int main() {

//     // BITWISE OPERATORS

//     cout<<(3 & 5) << endl;
//     cout<<(3 | 5) << endl;
//     cout<<(3 ^ 5) << endl;
    

//     // BINARY NOT  OPERATOR

//     cout << (~6) << endl; 
//     cout << (~0 )<< endl; 

//     // BINARY SHIFT OPERTORS
//     cout << (7 >> 2) << endl;

//     return 0;
// }


// CHECK NUM ODD AND EVEN


// #include <iostream>
// using namespace std;

// void oddOrEven(int num) {
//     if(!(num & 1)) {
//         cout<<"even"<<endl;
//     } else{
//         cout<<"odd"<<endl;
//     }
// }

// int main() {

//     oddOrEven(5);
//     oddOrEven(6);
//     oddOrEven(13);

//     return 0;
// }


// GET Ith BIT

// #include <iostream>
// using namespace std;

// int getIthBit(int num, int i) {
//     int bitmarks = 1 << i;

//     if(!(num & bitmarks)) {
//         return 0;
//     } else {
//         return 1;
//     }
// }

// int main() {
//     cout << getIthBit(6, 2);
//     return 0;
    
// }

//set ith bit

#include <iostream>
using namespace std;

int setIthBit(int num, int i) {
    int bitMarks =1<<i;
    return (num | bitMarks);
}

int main() {

    cout<< setIthBit(6, 3) <<endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "Hello";
// }

// int main() {
//     greet();
//     return 0;
// }