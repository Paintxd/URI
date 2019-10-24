#include<bits/stdc++.h>

int main () {

    int d, n;

    std::cin >> d;

    for (int i=0;i<d;i++) {
        std::cin >> n;
        if (n==0)
            std::cout << "NULL" << std::endl;
        else if (n%2==0) {
             if (n>0) {
                std::cout << "EVEN POSITIVE" << std::endl;
            } else {
                std::cout << "EVEN NEGATIVE" << std::endl;
            }
        } else {
            if (n>0) {
                std::cout << "ODD POSITIVE" << std::endl;
            } else {
                std::cout << "ODD NEGATIVE" << std::endl;
            }
        }
    }

    return 0;
}
