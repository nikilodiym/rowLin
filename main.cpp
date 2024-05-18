#include <iostream>
using namespace std;

int main() {
    int size = 5;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j < i) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        for (int j = 0; j < size; j++) {
            if (j < size - i - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j < size - i - 1) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        for (int j = 0; j < size; j++) {
            if (j < i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
