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



// PRACTICE QUESTIONS 


// for(int i = 1; i<=4; i++) {

//     cout<< "****"<<endl;
// };

// int n;
// cout<< "enter your number :";
// cin>> n;

// for(int i= n; i>=1; i--) {
//     cout << i << " ";
// }
// cout<<" " <<endl;


// int n = 10829;
// int sum = 0;

// for (int i=1; i<=n; i++) {
//     sum +=i;

//     cout<< sum << endl;
// }

//    int n = 10829;
//     int sum = 0;

//     for(int i = n; n>0; i++) {
//         int lastDig = n %10;
//         sum += lastDig;
//         n =n/10;

//         cout<< "sum =" <<sum<<endl;
//     }

//     return 0;





//     return 0;
// };

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10829;
//     int sum = 0;

//     for (; n > 0; n = n / 10) {
//         int lastDig = n % 10;
//         sum += lastDig;
//     }

//     cout << "sum = " << sum << endl;
//     return 0;

// }







// WHILE LOOPS

// #include <iostream>
// using namespace std;

// int main () {

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

//     int n ;
//     cout<< "enter your n = " ;
//     cin >> n;

//     int sum = 0;
//     int i = 1;
//     while(i <= n) {
//        sum +=i;
//        cout << i << " ";
//        i++;
//     }
//     cout<< "sum = " << sum<<endl;



// int n = 10829;
// int digSum = 0;

// while(n > 0) {
//     int lastDig = n%10;
//     digSum += lastDig;
//     n = n/10;
// }
// cout<<"sum = "<<digSum<<endl;


//  only odd number sum
// int n = 10829;
// int digSum = 0;

// while(n > 0) {
//     int lastDig = n%10;
//     if(lastDig % 2!= 0) {
//         digSum += lastDig;
//     }
//     n = n/10;
// }
// cout<<"sum = "<<digSum<<endl;



// int n = 10829;
// int sum = 0;

// while( n > 0) {
//     int lastDig = n % 10;
//     cout<< lastDig;
//     // sum += lastDig;
//     n /=10;

// }


// int n = 12345;
// int res = 0;
//  while(n > 0) {
//     int lastDig = n %10;
//     res = res *10 +lastDig;
//     n /=10;
//  }

//  cout << "reverse = "<<res<< endl;





 
   

//     return 0;

// }



// // DO WHILE LOOPS

// #include <iostream>
// using namespace std;

// int main () {

//     // different between do-while loops and while loops

// int val = 1;

//     do {
//         cout<<"apna college in do-while loops " << endl;
//     } while (val > 5);

//     while (val > 5) {
//         cout<< "apna college in while loop";
//     }
// }


// BREAK STATEMENT 

// #include <iostream>
// using namespace std;

// int main () {
//     int i = 1;
//     while (i <=10) {
//         if(i == 3) {
//             break;
//         }
//         cout<<i<<endl;
//         i++;
//     }
//     cout <<"out of loops now" <<endl;


// PRACTICE QUESTION

//      int n;

//     do{
//         cout<<"enter number =" ;
//         cin >> n;
//         if (n %10 == 0) {
//             break;
//         }
//         cout << "you enterd " <<n<<endl;
//     }while(true);

//     return 0;
// }


// CONTINUE STATEMENTS ///////

#include <iostream>
using namespace std;

int main () {

    // for(int i = 1; i<=10; i++) {
    //     if(i == 3){
    //         continue;
    //     }
    //     cout <<i<<endl;
    // }


    int n;

    do {
        cout<<"enter you number" ;
        cin>> n;
        if(n%10 == 0) {

            continue;
        }
        cout << "you entered = " <<n<<endl;

    }while(true);



    return 0;
}





