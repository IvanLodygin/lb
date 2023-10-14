#define pair arr, arr_len
int sum_between(int arr[], int arr_len) {
    int sum = 0;
    int fzero = index_first_zero(pair);
    int lzero = index_last_zero(pair);
    int i = fzero + 1;
    while (i < lzero) {
        sum += abs(arr[i]);
        i++;
    }
    return sum;
}