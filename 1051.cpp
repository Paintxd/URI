#include<bits/stdc++.h>

void isento(double s) {
    std::cout << "Isento" << std::endl;
}

void oito(double s) {
    s-=2000;
    double b=s*.08;
    printf("R$ %.2f\n", b);
}

void dzt(double s) {
    s-=3000;
    double b=s*.18+80;
    printf("R$ %.2f\n", b);
}

void vto(double s) {
    s-=4500;
    double b=s*.28+350;
    printf("R$ %.2f\n", b);
}

int main () {
    double a;
    std::cin >> a;

    if (a>=00 && a<=2000) {
        isento(a);
    }
    else if (a>=2000.01 && a <=3000) {
        oito(a);
    }
    else if (a>=3000.01 && a<=4500) {
        dzt(a);
    }
    else {
        vto(a);
    }
    return 0;
}
