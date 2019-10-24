#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main() {

    int p,i,n, cc=0,d;

    cin >> p >> n;
    int c[n];

    for(i=0;i<n;i++)
        cin >>c[i];

    for(i=1;i<n;i++) {
        if (c[i-1] < c[i])
            d = (c[i]-c[i-1]);
        else
            d = (c[i-1]-c[i]);
        if (d<=p)
            cc++;
    }

    if (cc==n-1) {
        cout << "YOU WIN" << endl;
    } else {
         cout << "GAME OVER" << endl;
    }

    return 0;
}
