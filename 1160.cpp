#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, pa, pb;
    float ga, gb;

    cin >> t;

    for(t; t!=0; t--) {
        int c=1;
        cin >> pa >> pb;
        cin >> ga >> gb;

        while(c <= 100) {
            pa += floor((ga/100) * pa);
            pb += floor((gb/100) * pb);
            if(pa > pb) {
                cout << c << " anos.\n";
                break;
            }
            c++;
        }
        if(c > 100)
            cout << "Mais de 1 seculo.\n";
    }

    return 0;
}
