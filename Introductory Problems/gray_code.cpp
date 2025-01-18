#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

vector<string> solve(int n) {
    vector <string> graycode;
    if (n == 1) {
        graycode.push_back("0");
        graycode.push_back("1");
        return graycode;
    }
    vector <string> prev = solve(n-1);
    for (int i = 0; i < (int)prev.size(); i++) {
        graycode.push_back("0"+prev[i]);
    }
    for (int j = (int)prev.size()-1; j >= 0; j--) {
        graycode.push_back("1"+prev[j]);
    }
    return graycode;
}

int main(void) {
    int n; std::cin >> n;
    assert(1<=n && n<=16);
    vector<string> res = solve(n);
    for (string &code : res) {
        std::cout << code << endl;
    }
    return 0;
}