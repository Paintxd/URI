#include<bits/stdc++.h>

int main () {

    float n[3];
    int x;
    std::cin >> x;
    float mp[x];

    for (int i = 0; i < x;i++) {
        std::cin >> n[0];
        std::cin >> n[1];
        std::cin >> n[2];

        mp[i]=((n[0]*2)+(n[1]*3)+(n[2]*5))/10;

        printf("%.1f\n", mp[i]);
    }



    return 0;
}
