#include<bits/stdc++.h>

int main () {
    long int x;
    std::cin >> x;

    for (int i=1;i<=x;i++) {
        std::cout << i << " " << pow(i , 2) << " " << std::setprecision(std::numeric_limits<long int>::digits10+1)  << pow (i , 3) << std::endl;
        std::cout << i << " " << pow (i , 2)+1 << " " << std::setprecision(std::numeric_limits<long int>::digits10+1) << pow(i , 3)+1 << std::endl;
    }

    return 0;
}
