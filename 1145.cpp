#include<bits/stdc++.h>

int main () {
    int x,y;

    std::cin >> x >> y;

    for (int i=1;i<=y;i++) {
        if (i%x==0) {
            std::cout << i << "\n";
        } else std::cout << i << " ";
    }
    return 0;
}
