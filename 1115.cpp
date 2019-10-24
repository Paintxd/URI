#include<bits/stdc++.h>

int main () {

    int x,y;

    while (std::cin >> x >> y) {
        if (x==0 || y==0) {
            break;
        }
        else if (x>0&&y>0) {
            std::cout << "primeiro\n";
        }
        else if (x>0&&y<0) {
            std::cout << "quarto\n";
        }
        else if (x<0&&y>0 ) {
            std::cout << "segundo\n";
        }
        else if (x<0&&y<0) {
            std::cout << "terceiro\n";
        }
    }
    return 0;
}
