#include<bits/stdc++.h>

int main () {

    float vt=0;
    int x, c ,tc;

    std::cin >> x;

    for (int i =0; i<x;i++) {
        std::cin >> c >> tc;

        if (c==1001) {
            vt+= tc * 1.50;
        }
        else if (c==1002) {
            vt+= tc * 2.50;
        }
        else if (c==1003) {
            vt+= tc * 3.50;
        }
        else if (c==1004) {
            vt+= tc * 4.50;
        } else {
            vt += tc * 5.50;
        }
    }

    printf("%.2f\n", vt);

    return 0;
}
