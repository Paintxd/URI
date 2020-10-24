#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    float s = 1.0;

    for(float i=2; i<= 100; i++) {
        s+= (float) 1 / i;
    }

    cout << fixed << setprecision(2);
    cout << s << "\n";

    return 0;
}
