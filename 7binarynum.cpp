#include <iostream> 
using namespace std;


void binToDec(int binNum) {
    int n= binNum ;
    int decNum =0;
    int pow = 1;

    while(n> 0) {
        int lastDig = n %10;
        decNum += lastDig *pow;
        pow = pow *2;
        n = n/10;
    }

    cout << decNum <<endl;
}

int main() {

    binToDec(101);

    // cout << sizeof(int) << endl;
    // cout<< sizeof(long int ) << endl;

    // cout<< sizeof(double ) << endl;
    // cout<< sizeof(long double ) << endl;

    //   cout<< sizeof(int ) << endl;
    // cout<< sizeof(short int ) << endl;

    // cout<< sizeof(long long ) << endl;

    return 0;
}