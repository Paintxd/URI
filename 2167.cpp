#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main () {

    int i,m=0,n, v[100];
    bool r=false;

    for(i=0;i<100;i++) {
        v[i]=0;
    }

    cin >> n;


    for(i=1;i<=n;i++) {
        cin >> v[i];

        if(v[i]<v[i-1] && r==false) {
            m=i;
            r=true;
        }
    }

    cout << m << endl;

  return 0;
}
