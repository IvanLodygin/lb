#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#define pair arr, arr_len
int sum_before_and_after(int arr[], int arr_len) {
    int sum = 0;
    int fzero = index_first_zero(pair);
    int lzero = index_last_zero(pair);
    for (int i = 0; i < fzero; i++) {
        sum += abs(arr[i]);
    }
    for (int i = lzero; i < arr_len ; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}