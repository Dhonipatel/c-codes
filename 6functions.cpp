// #include <iostream>
// using namespace std;

// void sayHello() {
//     cout<<"hello :) \n"; 
// }

// void assistant() {
//     sayHello();
//     cout<<"work done \n";
// }

// int main() {

//     assistant();



//     return 0;
// }



// PRACTICE QUESTIONS


// #include <iostream>
// using namespace std;

// // int sum (int a , int b) {  //a, b are parameters
// //     int sum = a + b;
// //     return sum;
// // }


// int diff (int a , int b=1) {  //a, b are parameters
//     int diff = a - b;
//     return diff;
// }

// int main (){

// // int s=  sum (2, 4); // 2,4 are arguments
// // cout<<"sum = " <<s<<endl;

// int d=  diff (2); // 2,4 are arguments
// cout<<"sum = " <<d<<endl;

//     return 0;

// }



//PRACTICE QEUTIONS 


// #include <iostream>
// using namespace std;

// int mul (int a, int b  ) {
//     int mul = a * b;
//     return mul;

// }

// // even --> true odd --> false

// int isEven(int n) {
//     if(n %2 ==0) {
//         return true;
//     } else{
//         return false;
//     }
// }



// int main () {

// int m = mul(4 , 5);// 4 5 are argumernts
// cout<< "mul  " <<m << endl;

// cout<< isEven(6);

//     return 0;
// }





// // PRACTICE QEUSTION


// #include <iostream>
// using namespace std;

// int factorial (int n) {
//     int fact = 1;
//     for(int i = 1; i<=n; i++) {
//         fact = fact*i;
//     }
//     cout <<"factorial ("<< n <<") =" << fact <<endl;
//     return fact;
// }

// int main () {


//     factorial(0);
//     factorial(1);
//     factorial(2);
//     factorial(3);
//     factorial(4);
//     factorial(5);
//     factorial(6);

//     return 0;
// }



// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if(n == 1) {
//         return false;
//     }

//     for(int i =2; i<=n-1; i++){
//         if(n %i == 0) // non prime
//         return false;
//     }
//     return true;
// }

// int main () {

//     cout<< isPrime(22) <<endl;


//     return 0;
// }


// #include <iostream>
// using namespace std;

// int factorial (int n) {
//     int fact = 1;
//     for(int i=1; i<=n; i++) {
//         fact *=i;

//     }
//     return fact;
// }

// int binCoff(int n, int r) {
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);

//     int result = val1 /(val2* val3);
// }


// int main() {

// cout << binCoff(4, 2) <<endl;




//     return 0;
// }


// #include <iostream>
// using namespace std;

//  int sum (int a, int b) {
//     cout<< (a+b) <<endl;
//     return a+b;
// }


// double sum (double a, double b) {
//     cout<< (a + b) <<endl;
//     return a + b;
// }

// int sum (int a, int b, int c) {
//     cout <<(a+b+c) <<endl;
//     return a + b + c;
// }


// int main() {

//     sum(2, 3);
//     sum(12 , 13);
//     sum(1.5, 2.5);
//     sum(1, 2, 3);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if(n==1) {
//         return false;
//     }

//     for(int i=2; i*i<=n; i++) {
//         if(n% i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// void allPrimes(int n) {
//     //all primes --> from 2 to n
//     for(int i=2; i<=n; i++) {
//         if(isPrime(i)) {
//             cout<<i<< " ";
//         }
//     }
// }

// int main (){

//     allPrimes(50);



//     return 0;
// }


//////////////////////////////////////////////////////////

// LIVE SSESSION  WITH ASSIGMENTS QUESTION SOLVE.///////////////

//////////////////////////////////////////////////////////////

// //write a function to check if a  given number is palidrome 


// #include <iostream>
// using namespace std;

// //write a function to check if a  given number is palidrome 

// bool isPalindrome (int num) {
//     int temp = num;
//     int rev = 0;
//     while(num >0) {
//         int d = num %10;
//         rev = rev*10+d;
//         num = num / 10;
//     }

//     if (temp == rev) {
//         return true;
//     } else {
//         return false;
//     }
// }


// int main () {

//     int num ;
//     // cin>> num;

//     bool result = isPalindrome(1123);
//     cout<< result << endl;
//     bool result2 = isPalindrome(121);
//     cout << result2 << endl;

   
    
//     return 0;
// }



// write a function to calculate sum of digit  of a number 


// #include <iostream>
// using namespace std;


// int sumofDigits(int n) {
//     int res = 0;

//     while(n > 0) {
//         // res += n % 10;
//         int d = n % 10;
//         res = res + d;
//         n = n / 10;

        
//     }
//     return res;
// }

// int main () {

//     int sum = sumofDigits(1234);
//     cout <<sum << endl;


//     return 0;
// }





// write a function which take to number as  parameter (a & b) and output  ; a^2+b^2+2*ab

// #include <iostream>
// using namespace std;

// int abSquare (int a, int b ){
//     return a*a + b*b + 2*a*b;
// }


// int main () {
// int result = abSquare(1,3);
// cout << result << endl;

//     return 0;
// }




// WRIITE A  FUNCTION TO THAT PRINTS THE LARGEST OF 3 NUMBERS;


// #include <iostream>
// using namespace std;

// int largest (int a, int b, int c) {
//     if(a >= b && a >= c) {
//         return a;
//     } else if( b>= a && b >= c) {
//         return b;
//      } else {
//         return c;
//      }
// }

// int main() {

//     int lar = largest (20 , 30 , 79);
//     cout << lar << endl;
    
//     return 0;
// }



// WRITE  A FUNCTION TO ACCEPT CHARACTER AND RETURN CHARACTER THAT APPEAR AFTER IT CH ="B"


// #include <iostream> 
// using namespace std;

// char nextChar (char ch) {
//     if (ch == 'z') 
//     return 'a';

//     else 
//     return (char)(ch + 1);
// }


// int main () {

//     char ch1 = nextChar('c');
//     cout << ch1 <<endl;
//     char ch2 = nextChar('z');
//     cout << ch2 << endl;

// }




















// #include <iostream>
// using namespace std;

// int main() {
//     int fuel[] = {4, 6, 3};
//     int dist[] = {3, 5, 4};
//     int n = 3;

//     int totalFuel = 0, totalDist = 0;

//     for(int i = 0; i < n; i++) {
//         totalFuel += fuel[i];
//         totalDist += dist[i];
//     }

//     if(totalFuel >= totalDist)
//         cout << "YES - Trip possible";
//     else
//         cout << "NO - Trip not possible";

//     return 0;
// }







// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 3, 2, 4, 1};
//     int n = 5;
//     int count = 0;

//     for(int i = 1; i < n-1; i++) {
//         if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
//             count++;
//         }
//     }

//     cout << "Number of scenic peaks = " << count;

//     return 0;
// }




