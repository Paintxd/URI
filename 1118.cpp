#include<bits/stdc++.h>

int main () {

    float n1, n2, n=0;
    int op;

    while(op!=2) {
        if (n==0) {
            std::cin >> n1;
            if (n1 < 0.0 || n1 > 10.0) {
                std::cout << "nota invalida\n";
            } else
                n++;
        }

        else if (n==1) {
            std::cin >> n2;
            if (n2 < 0.0 || n2 > 10.0) {
            std::cout << "nota invalida\n";
        } else
            n++;
        }

        else if (n==2) {
            printf("media = %.2f\n", (n1+n2)/2);
            n++;
        }

        if (n==3) {
            std::cout << "novo calculo (1-sim 2-nao)\n";
            std::cin >> op;
                if (op==1)
                    n=0;
        }
    }
    return 0;
}
