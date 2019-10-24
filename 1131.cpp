#include<bits/stdc++.h>

int main () {
    int i, g,vi=0, vg=0, e=0, op, j=0;

    while (op!=2) {
        j++;
        std::cin >> i >> g;
        if (i > g) {
            vi++;
        }
        else if (g > i) {
            vg++;
        } else {
            e++;
        }
        std::cout << "Novo grenal (1-sim 2-nao)\n";
        std::cin >> op;
    }
    std::cout  << j << " grenais\n" << "Inter:" << vi << "\nGremio:" << vg << "\nEmpates:" << e;
    if (vi > vg) {
        std::cout << "\nInter venceu mais\n";
    }
    else if (vi < vg) {
        std::cout << "\nGremio venceu mais\n";
    } else {
        std::cout << "\nNao houve vencedor\n";
    }

    return 0;
}
