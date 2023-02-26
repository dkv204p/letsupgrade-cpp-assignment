#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Enter an integer: ";
    cin >> input;
    cout << "Even numbers from 0 to " << input << ":" << endl;
    for (int i = 0; i <= input; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
