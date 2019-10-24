#include <iostream>

int main () {
    int soma=0, ant=0, val=1, n, cont=0;

    std::cin >> n;
    for(int i=0;i<n;i++) {
        if (i==n-1)
            std::cout << soma << '\n';
        else {
        std::cout << soma << " ";
        soma = ant + val;
        val = ant;
        ant = soma;
        }
    }
    return 0;
}
