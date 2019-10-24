#include<bits/stdc++.h>

int main () {

    float a, g, ka, kg;

    std::cin >> a >> g >> ka >> kg;

    if (a/ka < g/kg) {
        std::cout << "A" << std::endl;
    } else {
        std::cout << "G" << std::endl;
    }


    return 0;
}
