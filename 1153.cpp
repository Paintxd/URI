#include <iostream>

int main() {
    int n;

    std::cin >> n;
    int aux=n;
    while(n>1) {
        n--;
        aux*=n;
    }
    std::cout << aux << '\n';

    return 0;
}
