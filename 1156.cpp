#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    float s = 1.0, div=2.0;

    for(float i=3; i <= 39; i+=2) {
        s+= i / div;
        div*=2;
    }

    cout << fixed << setprecision(2);
    cout << s << "\n";

    return 0;
}
