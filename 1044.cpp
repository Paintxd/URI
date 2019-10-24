#include<bits/stdc++.h>

using namespace std;

int main () {

    int i, r, e, e2, c=0;

    cin >> e;
    cin >> e2;

    for (i=-10000;i<=10000;i++) {

        if (e*i == e2 || e2*i == e) {
            cout << "Sao Multiplos" << endl;
            c++;
        }
    }
    if (c==0) {
        cout << "Nao sao Multiplos" << endl;
    }

  return 0;
}
