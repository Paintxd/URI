#include<bits/stdc++.h>

int main () {
    int x, y, c=0;
    std::cin >> x >> y;

    if (x > y) {
        for (int i=y+1;i<x;i++) {
            if (i%5==2 || i%5==3) {
                std::cout << i << std::endl;
            }
        }
    } else {
        for (int i=x+1;i<y;i++) {
            if (i%5==2 || i%5==3) {
                    std::cout << i << std::endl;
            }
        }
    }

    return 0;
}
