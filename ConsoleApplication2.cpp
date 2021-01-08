#include "check.h"
#include "generate_array.h"
#include "manipulations.h"
#include <time.h>

int main() {
    srand(time(NULL));
    int t = rand() % 9 + 1;
    int* array = generate_array(t);
    bool flag = check_array(array, t);
    manipulations(array, t, flag);
}
