#include "generate_array.h"

int* generate_array(int len) {
    int* arr = new int[len];
    for (int i = 0; i < len; i++) {
        arr[i] = rand() % 49 + 1;
        cout << arr[i] << endl;
    }
    return (arr);
}