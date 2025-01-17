#include <iostream>
#include <assert.h>
#define ll long long int
using namespace std;

int main(void) {
    int t;
    std::cin >> t;
    assert(t>=1 && t<=1e5);

    for (int i = 0; i < t; i++) {
        ll a,b;
        std::cin >> a >> b;
        assert(a>=0 && a<=1e9 && b>=0 && b<=1e9);

        if (a*2<b || b*2<a || (a+b)%3!=0) {
            std::cout << "NO" << endl;
        } else {
            std::cout << "YES" << endl;
        }
    }
    return 0;
}