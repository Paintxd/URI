#include<bits/stdc++.h>

int main () {
    double x[100], p;

    std::cin >> p;
    std::cout << std::fixed;
    x[0]=p;
    std::cout << "N[0] = " << std::setprecision(4) << x[0] << "\n";
    for (int i=1;i<100;i++) {
        x[i]=x[i-1]/2;
        std::cout << "N[" << i << "] = " << std::setprecision(4) << x[i] << "\n";
    }

    return 0;
}
