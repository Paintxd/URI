#include<bits/stdc++.h>

int main () {

    int v[5], v2[5], c=0;

    for (int i =0; i<5;i++)
        std::cin >> v[i];

    for (int i =0; i<5;i++)
        std::cin >> v2[i];

    for (int i =0; i<5;i++)
        if (v[i]!=v2[i])
            c++;


    if (c==5) {
        std::cout << "Y" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }

    return 0;
}
