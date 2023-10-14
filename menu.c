#include <stdio.h>
#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"
#define STR_SIZE 101
#define pair arr, arr_len
int main() {
	int str[STR_SIZE];
	int str_len = 0;
	char space;
	while (space != '\n') {
		scanf("%d%c", &str[str_len], &space);
		str_len++;
	}
	int task = str[0];
	int arr_len = str_len - 1;
	int arr[100];
	for (int i = 0; i < str_len; i++ ) {
        arr[i] = str[i+1];
	}
	switch(task) {
	case 0: {
	    printf("%d\n", index_first_zero(pair));
	    break;
    }
	case 1: {
	    printf("%d\n", index_last_zero(pair));
	    break;
	}
	case 2: {
	    printf("%d\n", sum_between(pair));
	    break;
	}
	case 3: {
	    printf("%d\n", sum_before_and_after(pair));
	    break;
	}
	default: {
	    printf("Данные некорректны");
	    break;
    }
    }
	return 0;
}