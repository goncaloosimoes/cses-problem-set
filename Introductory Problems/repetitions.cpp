#include <iostream>
#include <assert.h>
using namespace std;

int main(void) {
    string dna_sequence;
    getline(cin,dna_sequence);

    int dna_length = dna_sequence.length();
    assert(dna_length>=1 && dna_length<=1e6);
    
    // sequências de 1 caractere
    if (dna_length == 1) {
        std::cout << 1;
        return 0;
    }

    int curr_max = 1;
    int total_max = 1;
    for (int i = 0; i < dna_length; i++) {
        if (dna_sequence[i] == dna_sequence[i+1]) {
            // std::cout << dna_sequence[i] << " igual a " << dna_sequence[i+1] << "\n";
            curr_max++;
            // std::cout << curr_max << "\n";
            if (curr_max > total_max) {
                total_max = curr_max;
                // std::cout << "total max atualizado para" << total_max << "\n";
            }
        }
        else {
            // std::cout << dna_sequence[i] << " diferente de " << dna_sequence[i+1] << "\n";
            curr_max = 1;
            // std::cout << "curr max resetado para " << curr_max << "\n";
        }
    }

    if (curr_max > total_max) {
        total_max = curr_max;
    }

    std::cout << total_max;
    return 0;
}