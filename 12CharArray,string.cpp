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



#include <iostream>
#include <cstring>
using namespace std;

int main () {

    // char word[30];

    // cin >> word; // cin ignore whitespace

    // cout << "your word was :" << word << endl;
    // cout << "length :" << strlen(word) << endl;

      char sentence[30];

    cin.getline(sentence, 30, '*');

    cout << "your word was :" << sentence << endl;
    cout << "length :" << strlen(sentence) << endl;

    return 0;

}


#include <iostream>
using namespace std;

int main() {

    string word;

    getline(cin, word);

    cout << "Your word was: " << word << endl;
    cout << "Length: " << word.length() << endl;

    return 0;
} 