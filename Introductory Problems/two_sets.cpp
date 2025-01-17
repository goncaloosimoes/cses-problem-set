#include <iostream>
#include <assert.h>
#include <set>
#define ll long long
using namespace std;

int main(void) {
    ll n;
    std::cin >> n;
    assert(n>=1 && n<=1e6);

    // Soma de 1 a n é dada por (n)(n-1)/2
    ll sum = n*(n+1)/2;

    if (sum % 2 == 0) {
        // É possível dividir em grupos iguais
        std::cout << "YES" << endl;

        ll target = sum/2; // Soma de cada subconjunto
        set<ll> set1, set2;
        for (int i = n; i >= 1; i--) {
            if (target>=i) {
                set1.insert(i);
                target-=i;
            } else {
                set2.insert(i);
            }
        }

        std::cout << set1.size() << endl;
        for (auto num : set1) {
            std::cout << num << " ";
        }
        std::cout << endl;

        std::cout << set2.size() << endl;
        for (auto num : set2) {
            std::cout << num << " ";
        }
        std::cout << endl;

    } else {
        // Soma ímpar, não dá para dividir
        std::cout << "NO" << endl;
    }

    return 0;
}