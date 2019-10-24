#include<bits/stdc++.h>

int main () {

    int x, t, in=0, out=0;

    std::cin >> t;

    for(int i = 0; i < t;i++) {
        std::cin >> x;
        if(x <= 20 && x>=10)
            in++;
        else
            out++;
    }
    std::cout << in << " in\n" << out << " out\n";


    return 0;
}
