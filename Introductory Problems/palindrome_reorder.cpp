#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#define ll long long
using namespace std;

int main(void) {
    string str;
    std::cin >> str;
    unordered_map<char, int> hashMap;

    for (char c : str) {
        hashMap[c]++;
    }

    int oddCount = 0;
    char oddChar = '\0'; // vazia, por agora...
    for (auto it : hashMap) {
        if (it.second % 2 != 0) {
            oddCount++;
            oddChar = it.first;
        }
    }

    if (oddCount > 1) {
        std::cout << "NO SOLUTION" << endl;
        return 0;
    }

    // Se oddCount = 1 esse char será colocado no meio
    // (tem de ser uma string de comprimento ímpar)

    // Construír as metades do palíndromo
    string p1 = "", p2 = "";
    for (auto it : hashMap) {
        string temp(it.second/2, it.first);
        p1 += temp;
    }

    p2 = p1;
    reverse(p2.begin(), p2.end());
    // Se houver um caractere único fica no meio
    string pal = (oddCount == 1) ? p1 + oddChar + p2 : p1 + p2;
    cout << pal << endl;
    return 0;
}
