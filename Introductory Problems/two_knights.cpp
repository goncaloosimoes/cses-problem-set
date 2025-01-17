#include <iostream>
#include <assert.h>
#define ll long long
using namespace std;

int main(void) {
    ll n;
    std::cin >> n;
    assert(n>=1 && n<=10000);

    for (ll i = 1; i <= n; ++i) {
        // o número de posições total num chessboard n*n=x é xC2
        // xC2 = n^2C2 = n^2*(n^2-1)/2
        ll total_moves = i*i*(i*i-1)/2;
        // os moves de ataque são feitos em tabelas 3x2 ou 2x3
        // porque os knights movem-se em Ls
        // para cada 2x3 temos 2 moves de ataque
        // para cada 3x2 temos 2 moves de ataque
        // num chessboard n*n temos (n-1)(n-2) tabelas 3*2
        // num chessboard n*n temos (n-2)(n-1) tabelas 2*3
        // dá um total de 2(n-1)(n-2) tabelas onde podem ser feitos ataques
        // cada tabela destas tem 2 moves possiveis
        // logo o número de posições de ataque num chessboard n*n será 2*2*(n-1)*(n-2)
        ll attack_moves = 4*(i-1)*(i-2);
        // queremos o número de posições sem ataque portanto ao total tiramos as posições de ataque
        std::cout << total_moves-attack_moves << endl;
    }
    return 0;
}