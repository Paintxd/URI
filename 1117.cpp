#include<bits/stdc++.h>

int main () {

    int c=0;
    float x, n[2];

    while (std::cin >> x && c!=2) {

        if (x > 0.0 && x<10.1) {
            n[c]=x;
            c++;
                if (c==2) {
                    printf("media = %.2f\n", (n[0]+n[1])/2);
                    break;
                }
        } else
            std::cout << "nota invalida" << std::endl;
    }

    return 0;
}
