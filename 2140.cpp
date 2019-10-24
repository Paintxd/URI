#include<bits/stdc++.h>

int main () {
    int n, m;

    while (std::cin >> n >> m && n!=0 && m!=0) {
       if ((m-n)%2==0 || (m-n)%5==0 || (m-n)%10==0 || (m-n)%20==0 || (m-n)%50==0 || m-n%100==0) {
        std::cout << "possible\n";
       } else {
        std::cout << "impossible\n";
       }

    }

}
