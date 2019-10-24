#include<bits/stdc++.h>

int main () {
    int i, f, m, s, mf, hf;

    std::cin >> i >> s >> f >> m;

    if (i==f && s==m) {
        std::cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
        return 0;
    }

    mf = m - s;
    hf = f - i;

    if (mf < 60) {
        mf+=60;
        hf--;
    }

    if (mf >= 60 ) {
        mf-=60;
        hf++;
    }

    if (hf < 24) {
        hf+=24;
    }

   if (hf >= 24) {
        hf-=24;
    }



    std::cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)\n";


    return 0;
}
