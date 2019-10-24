#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main() {

    int t, i, n, g, p=0, ttl=0;
    string time;

    while(cin >> t >> n && t!= 0){
        p=0;

        for (i=0;i<t;i++) {

                cin >> time >> g;

                p+=g;
        }

        ttl = (n*3) - p;

        cout << ttl << endl;


    }

    return 0;
}
