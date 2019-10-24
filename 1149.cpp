#include<bits/stdc++.h>

int main () {
    int a, n, c=0;
    std::cin >> a;
    for (int i=0;i<=a;i++) {
        c+=i;
        std::cout << c << std::endl;
    }
    while (std::cin >> n && n<=0) {
        for (int i=0;i<n;i++)
        c+=i;
    }
    std::cout << c << std::endl;


    return 0;
}
