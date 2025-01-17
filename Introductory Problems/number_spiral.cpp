#include <iostream>
#include <assert.h>
using namespace std;

int main(void)
{
    int t; // corresponde à dimensão da matriz
    std::cin >> t;
    assert(t >= 1 && t <= 1e5);

    // linhas pares começam com os quadrados
    // colunas ímpares começam com os quadrados

    while (t--) { // executar enquanto t!=0
        long long y;
        long long x;
        std::cin >> y >> x;
        assert(y >= 1 && y <= 1e9 && x >= 1 && x <= 1e9);
        long long res;
        if (y > x) {
            if (y % 2 == 0) {
                res = y*y - x + 1;
            } else {
                res = (y-1)*(y-1) + x;
            }
        } else if (y <= x) {
            if (x % 2 == 0) {
                res = (x-1)*(x-1) + y;
            }
            else {
                res = x*x - y + 1;
            }
        }
        std::cout << res << endl;
    }
    return 0;
}