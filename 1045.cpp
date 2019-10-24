#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>

    using namespace std;

int main () {

    double t[3];
    for (int i=0;i<3;i++) {
        cin >> t[i];
    }
    double a,b,c;
    if (t[0]>t[1]&&t[0]>t[2]) {
        a=t[0];
        if (t[1]>t[2]) {
            b=t[1];
            c=t[2];
        } else {
            b=t[2];
            c=t[1];
        }
    } else if (t[1]>t[0]&&t[1]>t[2]) {
        a=t[1];
        if (t[0]>t[2]) {
            b=t[0];
            c=t[2];
        } else {
            b=t[2];
            c=t[0];
        }
    } else {
        a=t[2];
        if (t[1]>t[0]) {
            b=t[1];
            c=t[0];
        } else {
            b=t[0];
            c=t[1];
        }
    }

    if (a>=(b+c)) {
        cout << "NAO FORMA TRIANGULO\n";
    } else if (pow(a,2)==(pow(b,2)+pow(c,2))) {
        cout << "TRIANGULO RETANGULO\n";
        if (a==b && a==c && b==c) {
            cout << "TRIANGULO EQUILATERO\n";
        } else if (a==b || b==c || a==c) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    } else if (pow(a,2)>(pow(b,2)+pow(c,2))) {
        cout << "TRIANGULO OBTUSANGULO\n";
        if (a==b && a==c && b==c) {
            cout << "TRIANGULO EQUILATERO\n";
        } else if (a==b || b==c || a==c) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    } else if (pow(a,2)<(pow(b,2)+pow(c,2))) {
        cout << "TRIANGULO ACUTANGULO\n";
        if (a==b && a==c && b==c) {
            cout << "TRIANGULO EQUILATERO\n";
        } else if (a==b || b==c || a==c) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

return 0;
}
