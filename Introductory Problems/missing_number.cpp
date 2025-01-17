#include <iostream>
#include <assert.h>
using namespace std;

int main(void) {
    size_t max;
    std::cin >> max;
    assert(2<=max && max<=2e5);

    const size_t length = max-1;
    int numbers[length];
    int count = 0;
    for (int i = 0; i < length; i++) {
        std::cin >> numbers[i];
        count += numbers[i];
    }

    // soma progressão aritmética
    int total = (max+1)*max/2;
    int missing_number = total - count;
    std::cout << missing_number;
    return 0;
}