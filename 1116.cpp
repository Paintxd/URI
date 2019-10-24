#include<bits/stdc++.h>

int main () {
    int n,m,r;

    std::cin >> r;

    for(int i=0;i<r;i++) {
        std::cin >> n >> m;

        if (n==0) {
            std::cout << "0.0\n";
        }
        else if (m==0) {
            std::cout << "divisao impossivel\n";
        } else {
            printf("%.1f\n", (float)n/m);
        }

    }

    return 0;
}
