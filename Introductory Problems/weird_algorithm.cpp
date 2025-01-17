#include <iostream>
#include <assert.h>

int main(void) {
    long int n;
    std::cin >> n;
    assert(n>=1 && n <= 1e6);
    std::cout << n;
    while (n!=1) {
        if (n%2 == 0) {
            // Número par
            n = n/2;
        } else {
            // Número ímpar
            n = 3*n+1;
        }
        std::cout << " " << n;
    }
    return 0;
}