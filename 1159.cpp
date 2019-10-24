#include<bits/stdc++.h>

int main () {

    int x;

    while(std::cin >> x && x!=0) {
        int i=x;
        int c=0, a=0;
        while(a!=5) {
            if(i%2==0) {
                c+=i;
                a++;
            }
            i++;
        }
        std::cout << c << std::endl;
    }

    return 0;
}
