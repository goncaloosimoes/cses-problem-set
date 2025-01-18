#include <iostream>
#include <assert.h>
using namespace std;

void hanoiTowers(int disks, int start, int aux, int end) {
    if (disks==0) {return;}
    hanoiTowers(disks-1, start,end,aux);
    std::cout << start << " " << end << endl;
    hanoiTowers(disks-1, aux, start, end);
}

int main(void) {
    int n;
    std::cin >> n;
    assert(1<=n && n<=16);
    // 2^n-1 moves = (1<<n)-1 usando Shift left logical
    std::cout << (1<<n)-1 << endl;
    hanoiTowers(n,1,2,3);
    return 0;
}