#include <iostream>
using namespace std;
int main () {
    int x, fn, fn1, fn2;


    cout << "Deret Fibonacci" << endl;
    cout << "masukan nilai x : ";
    cin >> x;

    cout << "Masukkan nilai deret pertama : ";
    cin >> fn1;
    cout << "Masukkan nilai deret kedua : ";
    cin >> fn2;
        fn = fn1 + fn2;
        cout << fn1 << " " << fn2 << " ";
        for ( int i = 1; i < x - 1; i++) {
        fn = fn1 + fn2;
        fn1 = fn2;
        fn2 = fn;
        cout << fn << " ";
        }

    return 0;
}
