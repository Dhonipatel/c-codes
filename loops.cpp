// #include <iostream>
// using namespace std;

// int main() {

//     // FOR LOOPS

//     // int num;

//     //  for(num = 1; num >=0; num++) {
//     //     cout<< num<< " ";
//     //  }

//     //  cout<< endl;
//     //  cout << "last value of num =" << num << endl;

// //   for (int i= 1; i <=5; i++) {
// //         cout<<"apna college"<< endl;
// //     }

// int n;
// cout<<"enter you n :";
// cin>> n;

// int sum = 0;

// for (int i = 1; i<=n; i++) {
//     sum +=i;
// }
// cout<<"sum = " << sum<<endl;

//     return 0;
// };


#include <iostream>
using namespace std;

int main () {

    // int i = 1;

    // while(i < 3) {
    //     cout<< i <<" ";
    //     i++;
    // }

    // int i = 1;
    // while (i <= 10) {
    //     cout<<"DHONI KUMAR" << " " ;
    //     i++;
    // }

    int n ;
    cout<< "enter your n = " ;
    cin >> n;

    int sum = 0;
    int i = 1;
    while(i <= n) {
       sum +=i;
       cout << i << " ";
       i++;
    }
    cout<< "sum = " << sum<<endl;
}