#include <iostream>
#include <assert.h>
using namespace std;

int main(void) {
    size_t array_size;
    std::cin >> array_size;
    assert(array_size>=1 && array_size<=2e5);

    long int numbers[array_size];
    for (int i = 0; i < array_size; i++) {
        std::cin >> numbers[i];
    }

    long int moves = 0;

    for (int j = 0; j < array_size-1; j++) {
        while (numbers[j+1] < numbers[j]) {
            numbers[j+1]++;
            moves++;
        }
    }

    // for (int i = 0; i<array_size; i++) {
    //     std::cout << numbers[i] << " ";
    // }

    std::cout <<  moves;

    return 0;
}