#include<bits/stdc++.h>

int main () {
        int x;

        while (std::cin >> x && x!=0) {
            for (int i=1;i<=x;i++) {
                if (i==x)
                    std::cout << i << "\n";
                else
                    std::cout << i << " ";
            }
        }

    return 0;
}
