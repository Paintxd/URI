#include<bits/stdc++.h>

int main () {

    int x,y;

    while (std::cin >> x >> y && x!=y) {
        if (x > y) {
            std::cout << "Decrescente" << std::endl;
        } else {
            std::cout << "Crescente" << std::endl;
        }
    }
    return 0;
}
