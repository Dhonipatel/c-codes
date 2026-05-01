// #include <iostream>
// using namespace std;

// int main() {

//     // char ch1 ='a';
//     // char ch2 = 'X';
//     // char ch3 = '%';
//     // char ch4 = '9';


//     // char ch1='a';
//     // cout<<(int) ch1 <<endl;

//     // char ch2='A';
//     // cout<<(int) ch2 <<endl;

//     char ch1= 'f';
//     int pos= ch1 - 'a';

//     cout<<pos<<endl;


//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {

//     // char arr[5] = {'a', 'b','c','d','e', };
//     // cout << arr<<endl;

//     // char work[] = "code";
//     // cout << work << endl;

//     // char work[5] = "code";
//     // cout << work <<endl;

// //     char work[]={'c','o','d','e','\0'};
// //     cout <<work <<endl;

// //     char work [50]= {'c','o','d','e','\0'};
// //     cout << work << endl; 

//     return 0;
// }



// #include <iostream>
// #include <cstring>
// using namespace std;

// int main () {

//     // char word[30];

//     // cin >> word; // cin ignore whitespace

//     // cout << "your word was :" << word << endl;
//     // cout << "length :" << strlen(word) << endl;

//       char sentence[30];

//     cin.getline(sentence, 30, '*');

//     cout << "your word was :" << sentence << endl;
//     cout << "length :" << strlen(sentence) << endl;

//     return 0;

// }


// CONVERT TO UPPERCASE


// #include <iostream>
// #include <cstring>
// using namespace std;

// int toUpper(char word[] ,int n) {

//   for(int i=0; i<n; i++) {
//     char ch= word[i];
//     if(ch>= 'A' && ch<= 'Z') {

//     } else{
//       word[i] = ch- 'a' + 'A';
//     }
//   }
// }

// int main(){
//   char word[] = "ApPle";
//   toUpper(word, strlen(word));
//   cout << word << endl;


//   return 0;
// }


// REVERSE  A CHAR ARRAY

// #include <iostream>
// #include <cstring>
// using namespace std;

// void reverse(char word[], int n) {

//   int st = 0, end = n-1;

//   while(st < end) {
//     swap(word[st], word[end]);
//     st++;
//     end--;
//   }
// }


// int main() {

//      char word[] = "code";
//      reverse(word, strlen(word));

//      cout << "reverse = " << word << endl;
//      return 0;



//   return 0;
// }




// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isPalindrome(char str[], int n) {

//   int st =0, end = n-1;

//   while(st < end) {
//     if(str[st++] != str[end--]){ 
//     cout << "not valid palindrome \n";
//     return false;
//     }
//   }
// cout << "valid palindrome \n";
// return true;

// }

// int main() {
//   char word [] = "racecar";
//   isPalindrome(word, strlen(word));
//   return 0;

//   return 0;
//  }



// //////// STRING IN ++ //


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//   string str;
//   getline(cin, str);

//   cout << str[0] << endl;
//   cout << str[1] << endl;
//   cout << str[2] << endl;


//   return 0;
// }


//STRING IN C++
// FOR EACH LOOP

// #include <iostream>
// using namespace std;

// int main() {

//   string str ="apna college !";

//   // for (int i=0; i<str.length(); i++) {
//   //   cout << str[i] << "-";
//   // }
//   // cout <<"\n";

//   for(char ch : str) {
//     cout << ch <<",";
    
//   }

//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {

//     for(int num = 1; num <= 10; num++) {
//         cout << "Table of " << num << endl;

//         for(int i = 1; i <= 10; i++) {
//             cout << num << " x " << i << " = " << num * i << endl;
//         }

//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {

//     for(int num = 1; num <= 10; num++) {
//         cout << "Table of " << num << endl;

//         for(int i = 1; i <= 10; i++) {
//             cout << num << " x " << i << " = " << num * i << endl;
//         }

//         cout << endl;
//     }

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main() {
//     int num;

//     cout << "Enter a number: ";
//     cin >> num;

//     for(int i = 1; i <= 10; i++) {
//         cout << num << " x " << i << " = " << num * i << endl;
//     }

//     return 0;
// }