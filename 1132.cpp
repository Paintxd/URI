#include<bits/stdc++.h>

int main () {
    int x,y, c=0;
    std::cin >> x >> y;

    if (x > y) {
        for (int i=y;i<=x;i++) {
            if (i%13!=0) {
                c+=i;
            }
        }
    } else {
        for (int i=x;i<=y;i++) {
            if (i%13!=0) {
                c+=i;
            }
        }
    }
    std::cout << c << std::endl;

    return 0;
}
