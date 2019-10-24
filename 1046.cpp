#include<bits/stdc++.h>

int main () {
    int i, f, hf;

    std::cin >> i >> f;

    hf = f - i;

    if (hf < 24) {
        hf+=24;
    }

   if (hf > 24) {
        hf-=24;
    }

    std::cout << "O JOGO DUROU " << hf << " HORA(S)\n";


    return 0;
}
