#include <stdio.h>

int *array;

// returns an array of integers
int* returnArray() {
    static int rArray[10];

    for (int i = 0; i < sizeof(rArray); i++) {
        rArray[i]= i;
    }
    return rArray;
}

int main() {
    array = returnArray();
    for (int i = 0; i < 10; i++) {
        printf("%d\n",array[i]);
    }
}
