#include <iostream>
#include <set>
#include <assert.h>
using namespace std;

int main(void) {
    int n;
    std::cin >> n;
    assert(1<=n && n<=2e5);
    set<int> s;
    int num;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        s.insert(num);
    }
    std::cout << s.size() << endl;
    return 0;
}