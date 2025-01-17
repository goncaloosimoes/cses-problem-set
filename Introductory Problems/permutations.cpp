#include <iostream>
#include <assert.h>
using namespace std;

int main(void) {
    long int n;
    std::cin >> n;
    assert(n>=1 && n<=1e6);
    if (n<=3 && n!=1) {
        std::cout << "NO SOLUTION";
    } else {
        for (int i = 1; i <= n; i++) {
            if (i%2 == 0) {
                // números pares
                std::cout << i << " ";
            }
        }
        for (int i = 1; i <= n; i++) {
            if (i%2 != 0) {
                // números ímpares
                if (i==n) {
                    std::cout << i; // tirar o espaço final (chegou ao fim)
                    return 0;
                }
                std::cout << i << " ";
            }
        }
    }
    return 0;
}