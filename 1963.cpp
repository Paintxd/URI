#include<bits/stdc++.h>

int main () {
    double a,b;
    char c = '%';
    std::cin >> a >> b;

    printf("%.2f%c\n", ((b-a)/a)*100 , c);

}
