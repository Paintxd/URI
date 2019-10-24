#include<bits/stdc++.h>

int main () {
    float x[100];

    for (int i=0;i<100;i++) {
        std::cin >> x[i];
    }
    for (int i=0;i<100;i++) {
        if (x[i]<=10.0)
        printf("A[%d] = %.1f\n", i, x[i]);
    }

    return 0;
}
