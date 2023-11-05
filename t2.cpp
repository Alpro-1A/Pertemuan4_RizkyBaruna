#include <iostream>
using namespace std;
int main () {
    int x;
    cout << "Masukkan nilai x : ";
    cin >> x;

    for (int i = 1; i <= x; i++) {
        for (int j = x; j > i; j--) {
            cout <<" ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
