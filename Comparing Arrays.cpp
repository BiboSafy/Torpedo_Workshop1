#include <iostream>

using namespace std;

int main() {
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;

    int arr1[size1];

    cout << "Enter elements of first array: \n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> size2;

    int arr2[size2];

    cout << "Enter elements of second array: \n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    if (size1 != size2) {
        cout << "The arrays are not equal." << endl;
    } else {
        bool equal = true;

        for (int i = 0; i < size1; i++) {
            if (arr1[i] != arr2[i]) {
                equal = false;
                break;
            }
        }

        if (equal) {
            cout << "The arrays are equal." << endl;
        } else {
            cout << "The arrays are not equal." << endl;
        }
    }

    return 0;
}
