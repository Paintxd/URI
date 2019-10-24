#include<bits/stdc++.h>

int main () {

    int x,y,z, hf;

    std::cin >> x >> y >> z;

    hf = x+y;

    if (hf > 24) {
        hf-=24;
    }
    else if (hf + z < 0) {
        hf+=24;
    }

    std::cout << hf + z << std::endl;


    return 0;
}
