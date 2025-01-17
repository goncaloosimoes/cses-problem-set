#include <iostream>
#include <assert.h>
#define ll long long
using namespace std;

int main(void) {
    ll n;
    std::cin >> n;
    assert(n>=1 && n<=1e9);
    ll tz = 0;
    for (ll i = 5; i <= n; i*=5) {
        tz += n/i;
    }
    std::cout << tz << endl;
    return 0;
}