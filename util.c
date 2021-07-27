#include <stdio.h>
#include "./util.h"

void
show_bytes(byte_pointer start, size_t len) {
    int i;
    for(i = (int)len - 1; i >= 0; i--) {
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void
show_unsigned_int(unsigned int x) {
    printf("unsigned int value: %u / ", x);
    show_bytes((byte_pointer) &x, sizeof(unsigned int));
}

void
show_int(int x) {
    printf("int value: %d / ", x);
    show_bytes((byte_pointer) &x, sizeof(int));
}

void
show_float(float x) {
    printf("float value: %f / ", x);
    show_bytes((byte_pointer) &x, sizeof(float));
}

void
show_pointer(void *x) {
    printf("pointer value: %d / ", x);
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void
inplace_swap_by_memory(int *x, int *y) {
    if(*x == *y) {
        return;
    }

    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void
reverse_array_by_memory(int a[], int cnt) {
    int first, last;
    for(first = 0, last = cnt - 1; first <= last; first++, last--) {
        inplace_swap_by_memory(&a[first], &a[last]);
    }
}