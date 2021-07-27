#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len);
void show_unsigned_int(unsigned int x);
void show_int(int x);
void show_float(float x);
void show_pointer(void *x);

void inplace_swap_by_memory(int *x, int *y);
void reverse_array_by_memory(int a[], int cnt);