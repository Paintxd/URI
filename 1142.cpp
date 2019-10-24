#include<bits/stdc++.h>

int main () {

    int n,c=0,i=1;
    std::cin >> n;

    while(c!=n) {
        if (i%4==0) {
            std::cout << "PUM\n";
            c++;
        }
        else if (c==n) {
            break;
        } else {
            std::cout << i << " ";
        }
        i++;
    }
    return 0;
}
