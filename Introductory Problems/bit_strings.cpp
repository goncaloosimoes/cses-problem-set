#include <iostream>
#include <assert.h>
#define ll long long
using namespace std;

ll power(ll b, ll p, ll md) {
    ll ans = 1;
    while (p--) {
        ans = ans * b % md;
    }
    return ans;
}

int main(void) {
    ll comp;
    std::cin >> comp;
    assert(comp>=1 && comp<=1e6);
    std::cout << power(2,comp,1e9+7);
    return 0;
}