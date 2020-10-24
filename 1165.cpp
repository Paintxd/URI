#include <iostream>

using namespace std;

int main() {
    int x, n;

    cin >> x;

    for(x; x>0; x--) {
        cin >> n;
        int cc = 0;
        for(int i=2; i<n; i++) {
            if(n%i==0) {
                cc++;
                cout << n << " nao eh primo\n";
                break;
            }
        }

        if(cc==0)
            cout << n << " eh primo\n";
    }


    return 0;
}
