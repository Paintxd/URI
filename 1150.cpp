#include <iostream>

int main() {
    int x, z, c=1, aux=0;

    std::cin >> x >> z;

    while(z<=x)
        std::cin >> z;
    aux=x;
    while(aux<=z) {
        aux+=(x+c);
        c++;
    }
    std::cout << c << '\n';

    return 0;
}
