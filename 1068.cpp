#include <iostream>
#include <string>

int main () {
    std::string calculo;

    while (std::cin >> calculo) {
        int parentese_inicial=0,parentese_final=0, aux_i=0, aux_f=0;
        int a = calculo.size();
        for (int i=0;i<a;i++) {
            if (calculo[i]== ')' ) {
                parentese_final++;
                aux_f = i;
            }
            else if (calculo[i]=='(' ) {
                parentese_inicial++;
                aux_i = i;
            }
        }
            if (aux_f < aux_i) {
                std::cout << "incorrect\n";
            }
            else if (parentese_inicial == parentese_final) {
                std::cout << "correct\n";
            } else {
                std::cout << "incorrect\n";
            }
    }

    return 0;
}
