#include<bits/stdc++.h>

int main () {
    int x,y,r,c=0;

    std::cin >> r;

    for (int i=0;i<r;i++) {
        c=0;
        std::cin >> x >> y;
        if (x < y) {
            for (int j=x+1;j<y;j++) {
                if (j%2!=0) {
                    c+=j;
                }
            }
        } else {
            for (int j=y+1;j<x;j++) {
                if(j%2!=0) {
                    c+=j;
                }
            }
        }
        std::cout << c << std::endl;
    }

    return 0;
}
