#include <iostream>

using namespace std;

int main () {

    int c;
    cin >> c;

    for(int i=0; i<c; i++) {
        int x, y, aux=0;
        cin >> x >> y;

        for(x; y!=0; x++) {
            if(x%2 != 0) {
                aux+=x;
                y--;
            }
        }

        cout << aux << '\n';
    }

    return 0;
}
