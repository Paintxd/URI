#include <iostream>

using namespace std;

uint64_t fibbo(int n) {
    uint64_t aux = 1, lastAux = 0, value;

    if(n==0)
        return 0;
    if(n==1)
        return 1;

    for(int i=1; i<n; ++i) {
        value = aux + lastAux;
        lastAux = aux;
        aux = value;
    }

    return value;
}

int main() {

    int x, n;

    cin >> x;

    for(x; x>0; x--) {
        cin >> n;
        cout << "Fib(" << n << ") = " << fibbo(n) << '\n';
    }

    return 0;
}
