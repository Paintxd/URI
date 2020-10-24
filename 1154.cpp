#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int c=0, id, aux=0;

    while(cin >> id && id > 0) {
        aux+=id;
        c++;
    }
    cout << fixed << setprecision(2);
    cout << (float) aux / c << "\n";
    return 0;
}
