#include "check.h"

bool check_array(int* arr, int len) {
    bool flag = 1;
    for (int i = 1; i < (len - 1); i++) {
        if (arr[i] != (arr[i - 1] + arr[i + 1])) {
            flag = 0;
        }
    }
    if (flag == 1) {
        cout << "Sequence is arithmetic\t" << endl;
    }
    else {
        cout << "Sequence is not arithmetic\t" << endl;
    }
    return flag;
}