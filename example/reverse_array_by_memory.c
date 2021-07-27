#include <stdio.h>

int
main() {
    int arr1[4] = {1, 2, 3, 4};
    int i;
    reverse_array_by_memory(arr1, 4);
    for(i = 0; i < 4; i++) {
        printf("%d%s", arr1[i], i != 3 ? ", " : "");
    }
    printf("\n");

    int arr2[5] = {1, 2, 3, 4 ,5};
    reverse_array_by_memory(arr2, 5);
    for(i = 0; i < 5; i++) {
        printf("%d%s", arr2[i], i != 4 ? ", " : "");
    }
    printf("\n");

    return 0;
}