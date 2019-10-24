#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>

    using namespace std;

int main () {

    double a, b, c, area, pr;

    cin >> a;
    cin >> b;
    cin >> c;

    if (fabs(b-c)<a && a<b+c) {
        pr = a+b+c;
        printf("Perimetro = %.1lf\n", pr);
    } else {
        area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }

return 0;
}
