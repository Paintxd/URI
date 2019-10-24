#include<bits/stdc++.h>

int main () {
    int x,y,c=0;

    while (std::cin >> x >> y && x>0 && y>0) {
        c=0;
        if(x<y) {
            for(int i=x;i<=y;i++) {
                std::cout << i << " ";
                c+=i;
            }
            std::cout << "Sum=" << c << std::endl;
        } else {
            for(int i=y;i<=x;i++) {
                std::cout << i << " ";
                c+=i;
            }
            std::cout << "Sum=" << c << std::endl;
        }
    }
    return 0;
}
