#include <iostream>
using namespace std;

void funcArr() {
    int size ;
    cin >> size;

    int *ptr = new int [size]; 
    int x = 1;

    for (int i=0; i<size; i++) {
        ptr [i] = x;

        cout << ptr [i] << " ";
        x++;
    }
    cout << endl;

    delete [] ptr ; // free
}

int main () {

    funcArr();
    


    // // int arr [100] = {1, 2, 3, 4, 5};
    // int size;
    // cin >> size;

    // int *arr = new int(size);

    // int x = 1;
    // for(int i=0; i<size; i++) {
    //     arr[i] = x;
    //     cout <<arr [i] << " ";
    //     x++;
    // }

    cout <<endl;

    return 0;
}