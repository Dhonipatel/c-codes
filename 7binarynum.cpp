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

void decToBin (int decNum) {
    int n = decNum;
    int pow = 1;
    int binNum = 0;

    while( n > 0) {
        int rem = n % 2;
        binNum += rem *pow;

        n = n/2;

        pow = pow *10;
    } 
     cout << "binary of " << decNum <<" = " << binNum <<endl;
}



int main() {
    decToBin(37);

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