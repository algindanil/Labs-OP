#include "manipulations.h"

void manipulations(int* arr, int len, bool flags) {
    int difference, min = arr[0];
    if (flags != 0) {
        difference = arr[len] - arr[len - 1];
        cout << "d of sequence: " << difference << endl;
    }
    else {
        for (int i = 0; i < len; i++) {
            if (min > arr[i]) {
                min = arr[i];
            }
        }
        cout << "Rearranged array: " << endl;
        for (int i = 2; i < len; i += 2) {
            arr[i] = min;
            cout << arr[i] << "\t";
            if (i > 0) {
                cout << arr[i - 1] << "\t";
            }
        }
    }
}