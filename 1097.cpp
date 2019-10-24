#include<bits/stdc++.h>

int main () {

    int j=7,i=1, c=0, c2=0;
    while(1) {
        if (i==11)
            break;
        std::cout << "I=" << i << " J=" << j << std::endl;
        j--;
        c++;
        if (c==3) {
        j+=5;
        c=0;
        i+=2;
        }
    }
    return 0;
}
