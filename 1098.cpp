#include<bits/stdc++.h>

int main () {
    float i=0.0, j=1.0;
    int c=0,c2=0;

    while (1) {
        if(c==3) {
            i+=0.2;
            j-=2.8;
            c=0;
            c2++;
        }
        if (c2==11)
            break;
        std::cout << "I=" << i << " J=" << j << std::endl;
        c++;
        j++;
    }
    return 0;
}
