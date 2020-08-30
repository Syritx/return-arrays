#include <stdio.h>

struct test {
    int id;
};
struct test *array;

// returns an array of struct 'test'
struct test* returnArray() {
    static struct test rArray[10];

    for (int i = 0; i < sizeof(rArray); i++) {
        rArray[i].id = i;
    }
    return rArray;
}

int main() {
    array = returnArray();
    for (int i = 0; i < 10; i++) {
        printf("%d\n",array[i].id);
    }
}
