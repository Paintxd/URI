#include<bits/stdc++.h>

int main () {

    int n1, n2, si=0;

    std::cin >> n1;
    std::cin >> n2;

    if (n1 > n2) {
        for (int i = n1-1; i > n2; i--)
            if (i%2!=0) {
                si+=i;
            }
    } else {
        for (int i = n1; i < n2; i++)
            if (i%2!=0)
                si+=i;
    }

    std::cout << si << std::endl;

    return 0;
}
