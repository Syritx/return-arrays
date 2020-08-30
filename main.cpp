#include <iostream>

class test {
public:
    int id;
};

test *array;

// returns an array of struct 'test'
test* returnArray() {
    static test rArray[10];

    for (int i = 0; i < sizeof(rArray); i++) {
        rArray[i].id = i;
    }
    return rArray;
}

int main() {
    array = returnArray();
    for (int i = 0; i < 10; i++) {
        std::cout << array[i].id << std::endl;
    }
}
