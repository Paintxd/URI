#include<bits/stdc++.h>

int main () {
    int n,m, c;
    std::string a;
    std::cin >> n >> m;
    c=n;
    std::cin.ignore();
    for (int i=0; i<m;i++) {
        std::getline(std::cin, a);
            if (a=="fechou") {
                c++;
            }
            else if (a=="clicou") {
                c--;
            }
    }
    std::cout << c << std::endl;
}
