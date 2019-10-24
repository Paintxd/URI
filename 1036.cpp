#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <math.h>

    using namespace std;

int main () {

    double a, b, c, delta, rq, x1, x2;

    cin >> a;
    cin >> b;
    cin >> c;
    delta = pow(b,2)-4*a*c;

    if (a==0) {
        cout << "Impossivel calcular\n";
    }
    else if (delta<0) {
        cout << "Impossivel calcular\n";
    } else {
    rq = sqrt(delta);
    x1 = (-b+rq)/(2*a);
    x2 = (-b-rq)/(2*a);

    printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }

return 0;
}
