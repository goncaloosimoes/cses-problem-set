#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string s;
    std::cin >> s;

    sort(s.begin(), s.end());
    vector<string> str_v;

    do {
        str_v.push_back(s);
    } while(next_permutation(s.begin(),s.end()));

    std::cout << str_v.size() << endl;
    for (string s : str_v) {
        std::cout << s << endl;
    }
    return 0;
}